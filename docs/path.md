---
id: path
title: Path
sidebar_label: Path
---

### `Path.delimeter`

When used will return the platform specific path delimeter.

#### Type definition

```reason
let delimeter: string;
```

#### Usage

```reason
/*
  ";" for Windows
  ":" for Unix
*/
let addDelimeterToPath = (path, value) => path ++ Path.delimeter ++ value;  
```

---

### `Path.sep`

Provides the platform-specific path segment separator. Either `/` on unix or `\` on windows.

#### Type definition

```reason
let sep: string;
```

#### Usage

```reason
/*
  "\" for Windows
  "/" for Unix
*/
let addSepToEnd= (path) => path ++ Path.sep;  
```

---

### `Path.basename(ext?, path)`

Will return the last portion of a path, `basename` takes two arguments, a file extension that is optional, and path that is mandatory to pass.

#### Type definition

```reason
let basename: (~ext: string=?, string) => string;
```

#### Usage

```reason
let basenameNoExt = Path.basename("/foo/bar/baz/quux.html"); // "quux.html"

let basenameWithExt = Path.basename(".html", "/foo/bar/baz/quux.html"); // "quux"
```

---

### `Path.dirname(path)`

returns the directory name of a `path`, similar to the Unix `dirname` command.

#### Type Definition

```reason
let dirname: string => string;
```

#### Usage

```reason
let myDir = Path.dirname("/foo/bar/baz/quux"); // "/foo/bar/baz"
```

---

### `Path.extname(path)`

returns the extension of the `path` from the last occurence of the `.` charachter to end of string in the last portion of the path.

#### Type Definition

```reason
let extname: string => string;
```

#### Usage

```reason
let myFileExt = Path.extname("foo/bar/lol.html"); // ".html"
```

---

### `Path.format(pathObject)`

returns a path string from an object. This is the opposite of `path.parse`. When providing properties to the `pathObject` remember that there are combinations where one property has priority over another:

* `pathObject.root` is ignored if `pathObject.dir` is provided

* `pathObject.ext` and `pathObject.name` are ignored if `pathObject.base` exists.

#### Type Definition

```reason
type pathObject = {
  dir: option(string),
  root: option(string),
  base: option(string),
  name: option(string),
  ext: option(string)
};

let format: pathObject => string;
```

#### Usage

```reason
let myPathObject = {
  dir: Some("/home/user/dir"),
  root: Some("/ignored"),
  base: Some("file.txt"),
  name: Some("file"),
  ext: None
};

let fromPathObject = Path.format(myPathObject); // "/home/user/dir/file.txt"
```

---

### `Path.isAbsolute(path)`

returns a boolean that determines if `path` is an absolute path. If the given `path` is a zero-length string, `false` will be returned.

#### Type Definition

```reason
let isAbsolute: string => bool;
```

#### Usage

```reason
let thisPathIsAbsolute = Path.isAbsolute("/foo/bar/index.html"); // true

let thisPathIsNotAbsolute = Path.isAbsolute("./foo/bar/index.html"); // false
```

---

### `Path.join(paths)`

returns a string containing all the `paths` segments joined togther delimited by the seperator. Zero-length `path` segments are ignored. If the joined path string is a zero-length string then "." will be returned. representing the current working directory.

#### Type Definition

```reason
let join: list(string) => string;
```

#### Usage

```reason
let myPathsToJoin = Path.join(["/foo", "bar", "baz/asdf", "quux"]); // "/foo/bar/baz/asdf/quux"

let unnormaliedPathToJoin = Path.join([
  "/foo",
  "bar",
  "baz/asdf//",
  "..",
  ".."
]); // "/foo/bar"
```

---

### `Path.normalize(path)`

returns a string of the normalized `path`, resolving `..` and `.` segments. When multiple delimeters are found they are replaced by a single delimeters. Trailing seperators are preserved.

#### Type Definition

```reason
let normalize: string => string;
```

#### Usage

```reason
let normalizeMyPath = Path.normalize("./foo/bar/////baz//qux/.."); // "foo/bar/baz"
```

---

### `Path.parse(path)`

returns an record whose fields represent a significant elements of the `path`. The returned record will have the following properties:

#### Type Definition

```reason
type pathObject = {
  dir: option(string),
  root: option(string),
  base: option(string),
  name: option(string),
  ext: option(string)
};

let parse: string => pathObject;
```

#### Usage

```reason
let parseMyPath = Path.parse("/home/user/dir/file.name/")
/*
 {
  root: Some("/"),
  dir: Some("/home/user/dir"),
  base: Some("file.name"),
  ext: Some(".name"),
  name: Some("file")
  }
*/
```

---

### `Path.relative(from, to)`

returns the relative path `from` to `to`. If `from` and `to` each resolve to the same path after calling `resolve` on each, a zero-length string is returned. If a zero-length string is passed as from or to, the current working directory will be used instead of the zero-length strings.

#### Type Definition

```reason
let relative: (~from: string, ~_to: string) => unit;
```

#### Usage

**\*Path.relative needs to be implemented\***

Please open a pull request if you are interested in contributing,
no code is needed, we will help answer questions and push you
in the right direction.

Repo URL: https://github.com/kennetpostigo/lwt-node

```reason

```

---

### `Path.resolve(paths)`

returns a string that resolves a sequence of paths or path segments into an an absolute path. The given sequence is processed from right to ledt, with each subsequent path prepended until an absolute path is constructed.If after processing all given `path` segments an absolute path is not generated, the current working directory is used. The resulting path is normalized and trailing slashes are removed unless the path is resolved to the root directory. Zero-length `path` segments are ignored. If no path segments are passed, `resolve` will return the absolute path of the current working directory.

#### Type Definition

```reason
let resolve: list(string) => string;
```

#### Usage

```reason
let resolveMyPaths = Path.resolve(["/foo/bar", "/tmp/file/"]); // "/tmp/file/"
```

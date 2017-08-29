![reason-path](./../assets/reason-path.png)

### Operators

+ `Path.basename path ext`

  returns the last postion of a `path`, similar to the Unix `basename` command.

  ```reason
  type basename = path::string => ext::string? => string;
  ```

+ `Path.delimiter`

  returns the platform-specific delimiter, `:` for unix and `;` for windows.

+ `Path.dirname path`

  returns the directory name of a `path`, similar to the Unix `dirname` command.

  ```reason
  type dirname = path::string => string;
  ```

+ `Path.extname path`

  returns the extension of the `path` from the last occurence of the `.` charachter to end of string in the last portion of the path.

  ```reason
  type extname = path::string ;
  ```

+ `Path.format pathObject`

  returns a path string from an object. This is the opposite of `path.parse`. When providing properties to the `pathObject` remember that there are combinations where one property has priority over another:

    + `pathObject.root` is ignored if `pathObject.dir` is provided

    + `pathObject.ext` and `pathObject.name` are ignored if `pathObject.base` exists.

  ```reason
  type pathObject = {dir: string, root: string, base: string, name: string, ext: string};
  type format = pathObject::pathObject => string;
  ```

+ `Path.isAbsolute path`

  returns a boolean that determines if `path` is an absolute path. If the given `path` is a zero-length string, `false` will be returned.

  ```reason
  type isAbsolute = path::string => boolean;
  ```

+ `Path.join paths`

  returns a string containing all the `paths` segments joined togther delimited by the seperator. Zero-length `path` segments are ignored. If the joined path string is a zero-length string then "." will be returned. representing the current working directory.

  ```reason
  type join = paths::list string => string;
  ```

+ `Path.normalize path`

  returns a string of the normalized `path`, resolving `..` and `.` segments. When multiple delimiters are found they are replaced by a single delimiters. Trailing seperators are preserved.

  ```reason
  type normalize = path::string => string;
  ```

+ `Path.parse path`

  returns an record whose fields represent a significant elements of the `path`. The returned record will have the following properties:

  ```reason
  type pathObject = {dir: string, root: string, base: string, name: string, ext: string};
  type parse = path::string => pathObject;
  ```

+ `Path.relative from to`

  returns the relative path `from` to `to`. If `from` and `to` each resolve to the same path after calling `resolve` on each, a zero-length string is returned. If a zero-length string is passed as from or to, the current working directory will be used instead of the zero-length strings.

  ```reason
  type relative = from::string => to::string => string
  ```


+ `Path.resolve paths`

  returns a string that resolves a sequence of paths or path segments into an an absolute path. The given sequence is processed from right to ledt, with each subsequent path prepended until an absolute path is constructed.If after processing all given `path` segments an absolute path is not generated, the current working directory is used. The resulting path is normalized and trailing slashes are removed unless the path is resolved to the root directory. Zero-length `path` segments are ignored. If no path segments are passed, `resolve` will return the absolute path of the current working directory.

  ```reason
  type resolve = paths::list string => string
  ```

+ `Path.sep`
  Provides the platform-specific path segment separator. Either `/` on unix or `\` on windows.


### License
MIT
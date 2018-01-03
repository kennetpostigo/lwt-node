open ReasonNode;

let generateString = (~po: Path.pathObject) => {
  let dir = ref("None");
  let root = ref("None");
  let base = ref("None");
  let name = ref("None");
  let ext = ref("None");
  Path.(
    switch po.dir {
    | Some(x) => dir := "Some(\"" ++ x ++ "\")"
    | None => ()
    }
  );
  Path.(
    switch po.root {
    | Some(x) => root := "Some(\"" ++ x ++ "\")"
    | None => ()
    }
  );
  Path.(
    switch po.base {
    | Some(x) => base := "Some(\"" ++ x ++ "\")"
    | None => ()
    }
  );
  Path.(
    switch po.name {
    | Some(x) => name := "Some(\"" ++ x ++ "\")"
    | None => ()
    }
  );
  Path.(
    switch po.ext {
    | Some(x) => ext := "Some(\"" ++ x ++ "\")"
    | None => ()
    }
  );
  "{ root: "
  ++ root^
  ++ ", dir: "
  ++ dir^
  ++ ", base: "
  ++ base^
  ++ ", ext: "
  ++ ext^
  ++ ", name: "
  ++ name^
  ++ " }";
};

let basenameNoExt = () =>
  Alcotest.(check(string))(
    "Path.basename without ext arg",
    "quux.html",
    Path.basename("/foo/bar/baz/asdf/quux.html")
  );

let basenameExt = () =>
  Alcotest.(check(string))(
    "Path.basename with ext arg",
    "quux",
    Path.basename(~ext=".html", "/foo/bar/baz/asdf/quux.html")
  );

let delimeter = () =>
  Alcotest.(check(string))("Path.delimeter", ":", Path.delimeter);

let extname = () =>
  Alcotest.(check(string))(
    "Path.extname",
    ".html",
    Path.extname("foo/bar/lol.html")
  );

let extnameWithRelativePath = () =>
  Alcotest.(check(string))(
    "Path.extname with a relative path",
    ".html",
    Path.extname("./foo/bar/lol.html")
  );

let extnameMovingUpADirectory = () =>
  Alcotest.(check(string))(
    "Path.extname moving up a directory",
    ".html",
    Path.extname("./foo/bar/../lol.html")
  );

let formatWithDirBase = () =>
  Alcotest.(check(string))(
    "Path.format with dir and base",
    "/home/user/dir/file.txt",
    Path.(
      format({
        dir: Some("/home/user/dir"),
        root: Some("/ignored"),
        base: Some("file.txt"),
        name: Some("file"),
        ext: None
      })
    )
  );

let formatWithRootBase = () =>
  Alcotest.(check(string))(
    "Path.format with root and base",
    "/file.txt",
    Path.(
      format({
        dir: None,
        root: Some("/"),
        base: Some("file.txt"),
        name: None,
        ext: Some("ignored")
      })
    )
  );

let formatWithRootNameExt = () =>
  Alcotest.(check(string))(
    "Path.format with root, name, and ext",
    "/file.txt",
    Path.(
      format({
        dir: None,
        root: Some("/"),
        base: None,
        name: Some("file"),
        ext: Some(".txt")
      })
    )
  );

let isAbsolute = () =>
  Alcotest.(check(bool))(
    "Path.isAbsolute",
    true,
    Path.isAbsolute("/foo/bar/index.html")
  );

let isNotAbsolute = () =>
  Alcotest.(check(bool))(
    "Path.isNotAbsolute",
    false,
    Path.isAbsolute("./foo/bar/index.html")
  );

let join = () =>
  Alcotest.(check(string))(
    "Path.join",
    "/foo/bar/baz/asdf/quux",
    Path.join(["/foo", "bar", "baz/asdf", "quux"])
  );

let joinUpADirectory = () =>
  Alcotest.(check(string))(
    "Path.join up a directory",
    "/foo/bar/baz/asdf",
    Path.join(["/foo", "bar", "baz/asdf", "quux", ".."])
  ); /* Need to test unormalized strings Path.join */

let joinUnormalizedString = () =>
  Alcotest.(check(string))(
    "Path.join unormalized string",
    "/foo/bar",
    Path.join(["/foo", "bar", "baz/asdf//", "..", ".."])
  );

let normalizePath = () =>
  Alcotest.(check(string))(
    "Path.normalize unormalized string",
    "foo/bar/baz",
    Path.normalize("./foo/bar/////baz//qux/..")
  );

let resolvePath0 = () =>
  Alcotest.(check(string))(
    "Path.resolve 0",
    "/foo/bar/baz",
    Path.resolve(["/foo/bar", "./baz"])
  );

let resolvePath1 = () =>
  Alcotest.(check(string))(
    "Path.resolve 1",
    "/tmp/file/",
    Path.resolve(["/foo/bar", "/tmp/file/"])
  );

let resolvePath2 = () =>
  Alcotest.(check(string))(
    "Path.resolve 2",
    Sys.getcwd() ++ "/wwwroot/static_files/gif/image.gif",
    Path.resolve(["wwwroot", "static_files/png/", "../gif/image.gif"])
  );

let parsePath0 = () =>
  Alcotest.(check(string))(
    "Path.parse 0",
    "{ root: Some(\"/\"), dir: Some(\"/home/user\"), base: Some(\"dir\"), ext: None, name: Some(\"dir\") }",
    generateString(Path.parse("/home/user/dir/"))
  );

let parsePath1 = () =>
  Alcotest.(check(string))(
    "Path.parse 1",
    "{ root: None, dir: None, base: Some(\".\"), ext: None, name: Some(\".\") }",
    generateString(Path.parse("."))
  );

let parsePath2 = () =>
  Alcotest.(check(string))(
    "Path.parse 2",
    "{ root: Some(\"/\"), dir: Some(\"/home/user/dir\"), base: Some(\"file.name\"), ext: Some(\".name\"), name: Some(\"file\") }",
    generateString(Path.parse("/home/user/dir/file.name/"))
  );

let parsePath3 = () =>
  Alcotest.(check(string))(
    "Path.parse 3",
    "{ root: None, dir: None, base: Some(\"m\"), ext: None, name: Some(\"m\") }",
    generateString(Path.parse("m"))
  );

let parsePath4 = () =>
  Alcotest.(check(string))(
    "Path.parse 4",
    "{ root: None, dir: None, base: Some(\".\"), ext: None, name: Some(\".\") }",
    generateString(Path.parse("./"))
  );

let parsePath5 = () =>
  Alcotest.(check(string))(
    "Path.parse 5",
    "{ root: Some(\"/\"), dir: Some(\"/\"), base: None, ext: None, name: None }",
    generateString(Path.parse("/"))
  );

let parsePath6 = () =>
  Alcotest.(check(string))(
    "Path.parse 6",
    "{ root: None, dir: Some(\"home/user/..//\"), base: Some(\"file.name\"), ext: Some(\".name\"), name: Some(\"file\") }",
    generateString(Path.parse("home/user/..///file.name/"))
  );

let pathTestSet = [
  ("Path.basename without ext arg", `Slow, basenameNoExt),
  ("Path.basename with ext arg", `Slow, basenameExt),
  ("Path.delimeter", `Slow, delimeter),
  ("Path.extname", `Slow, extname),
  ("Path.extname with a relative path", `Slow, extnameWithRelativePath),
  ("Path.extname moving up a directory", `Slow, extnameMovingUpADirectory),
  ("Path.format with dir and base", `Slow, formatWithDirBase),
  ("Path.format with root and base", `Slow, formatWithRootBase),
  ("Path.format with name and ext", `Slow, formatWithRootNameExt),
  ("Path.isAbsolute with abolute path", `Slow, isAbsolute),
  ("Path.isAbsolute with relative path", `Slow, isNotAbsolute),
  ("Path.join", `Slow, join),
  ("Path.join up a directory", `Slow, joinUpADirectory),
  ("Path.join unormalized string", `Slow, joinUnormalizedString),
  ("Path.normalize unormalized string", `Slow, normalizePath),
  ("Path.resolve 0", `Slow, resolvePath0),
  ("Path.resolve 1", `Slow, resolvePath1),
  ("Path.resolve 2", `Slow, resolvePath2),
  ("Path.resolve 0", `Slow, parsePath0),
  ("Path.resolve 1", `Slow, parsePath1),
  ("Path.resolve 2", `Slow, parsePath2),
  ("Path.resolve 3", `Slow, parsePath3),
  ("Path.resolve 4", `Slow, parsePath4),
  ("Path.resolve 5", `Slow, parsePath5),
  ("Path.resolve 6", `Slow, parsePath6)
];
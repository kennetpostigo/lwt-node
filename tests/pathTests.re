open ReasonNode;

let basenameNoExt () =>
  Alcotest.(check string)
    "Path.basename without ext arg" "quux.html" (Path.basename "/foo/bar/baz/asdf/quux.html");

let basenameExt () =>
  Alcotest.(check string)
    "Path.basename with ext arg"
    "quux"
    (Path.basename ext::".html" path::"/foo/bar/baz/asdf/quux.html");

let delimeter () => Alcotest.(check string) "Path.delimeter" ":" Path.delimeter;

let extname () => Alcotest.(check string) "Path.extname" ".html" (Path.extname "foo/bar/lol.html");

let extnameWithRelativePath () =>
  Alcotest.(check string)
    "Path.extname with a relative path" ".html" (Path.extname "./foo/bar/lol.html");

let extnameMovingUpADirectory () =>
  Alcotest.(check string)
    "Path.extname moving up a directory" ".html" (Path.extname "./foo/bar/../lol.html");

let formatWithDirBase () =>
  Alcotest.(check string)
    "Path.format with dir and base"
    "/home/user/dir/file.txt"
    ({
      open Path;
      format {
        dir: Some "/home/user/dir",
        root: Some "/ignored",
        base: Some "file.txt",
        name: Some "file",
        ext: None
      }
    });

let formatWithRootBase () =>
  Alcotest.(check string)
    "Path.format with root and base"
    "/file.txt"
    ({
      open Path;
      format {
        dir: None,
        root: Some "/",
        base: Some "file.txt",
        name: None,
        ext: Some "ignored"
      }
    });

let formatWithRootNameExt () =>
  Alcotest.(check string)
    "Path.format with root, name, and ext"
    "/file.txt"
    ({
      open Path;
      format {dir: None, root: Some "/", base: None, name: Some "file", ext: Some ".txt"}
    });

let isAbsolute () =>
  Alcotest.(check bool) "Path.isAbsolute" true (Path.isAbsolute "/foo/bar/index.html");

let isNotAbsolute () =>
  Alcotest.(check bool) "Path.isNotAbsolute" false (Path.isAbsolute "./foo/bar/index.html");

let join () =>
  Alcotest.(check string)
    "Path.join" "/foo/bar/baz/asdf/quux" (Path.join ["/foo", "bar", "baz/asdf", "quux"]);

let joinUpADirectory () =>
  Alcotest.(check string)
    "Path.join up a directory"
    "/foo/bar/baz/asdf"
    (Path.join ["/foo", "bar", "baz/asdf", "quux", ".."]);

/* Need to test unormalized strings Path.join */
let joinUnormalizedString () =>
  Alcotest.(check string)
    "Path.join unormalized string"
    "/foo/bar"
    (Path.join ["/foo", "bar", "baz/asdf//", "..", ".."]);


let normalizePath () =>
  Alcotest.(check string)
    "Path.normalize unormalized string"
    "foo/bar/baz"
    (Path.normalize "./foo/bar/////baz//qux/..");

let resolvePath0 () =>
  Alcotest.(check string)
    "Path.resolve 0"
    "/foo/bar/baz"
    (Path.resolve ["/foo/bar", "./baz"]);

let resolvePath1 () =>
  Alcotest.(check string)
    "Path.resolve 1"
    "/tmp/file/"
    (Path.resolve ["/foo/bar", "/tmp/file/"]);

let resolvePath2 () =>
  Alcotest.(check string)
    "Path.resolve 2"
    ((Sys.getcwd ()) ^ "/wwwroot/static_files/gif/image.gif")
    (Path.resolve ["wwwroot", "static_files/png/", "../gif/image.gif"]);

/*
CASES
  - './'                        => { root: '', dir: '', base: '.', ext: '', name: '.' }
  - '/'                         => { root: '/', dir: '/', base: '', ext: '', name: '' }
  - 'home/user/..///file.name/' => { root: '', dir: 'home/user/..///', base: 'file.name', ext: '.name', name: 'file' }
*/

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
];

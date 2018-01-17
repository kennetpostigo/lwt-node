open LwtNode;

let resolveRelativePathNotRelative0 = () =>
  Alcotest.(check(string))(
    "RenodeUtils.resolveRelativePath not relative 0",
    "/foo",
    RenodeUtils.resolveRelativePaths("/foo", "")
  );

let resolveRelativePathNotRelative1 = () =>
  Alcotest.(check(string))(
    "RenodeUtils.resolveRelativePath not relative 1",
    "/foo/",
    RenodeUtils.resolveRelativePaths("/foo/", "")
  );

let resolveRelativePathRelative1 = () =>
  Alcotest.(check(string))(
    "RenodeUtils.resolveRelativePath with relative 1",
    "foo",
    RenodeUtils.resolveRelativePaths("./foo", "")
  );

let resolveRelativePathRelative2 = () =>
  Alcotest.(check(string))(
    "RenodeUtils.resolveRelativePath with relative 2",
    "foo/bar/baz",
    RenodeUtils.resolveRelativePaths("./foo/bar/baz", "")
  );

let resolveRelativePathRelative3 = () =>
  Alcotest.(check(string))(
    "RenodeUtils.resolveRelativePath with relative 3",
    "foo/bar/baz",
    RenodeUtils.resolveRelativePaths("foo/./bar/baz", "")
  );

let resolveRelativePathRelative4 = () =>
  Alcotest.(check(string))(
    "RenodeUtils.resolveRelativePath with relative 4",
    "foo/.bar/baz",
    RenodeUtils.resolveRelativePaths("foo/.bar/baz", "")
  );

let resolveRelativePathRelative5 = () =>
  Alcotest.(check(string))(
    "RenodeUtils.resolveRelativePath with relative 5",
    "foo/bar./baz",
    RenodeUtils.resolveRelativePaths("foo/bar./baz", "")
  );

let resolveRelativePathRelative6 = () =>
  Alcotest.(check(string))(
    "RenodeUtils.resolveRelativePath with relative 6",
    "foo/",
    RenodeUtils.resolveRelativePaths("./foo/", "")
  );

let resolveRelativePathRelative7 = () =>
  Alcotest.(check(string))(
    "RenodeUtils.resolveRelativePath with relative 7",
    "foo/bar/baz/",
    RenodeUtils.resolveRelativePaths("./foo/bar/baz/", "")
  );

let resolveRelativePathRelative8 = () =>
  Alcotest.(check(string))(
    "RenodeUtils.resolveRelativePath with relative 8",
    "foo/bar/baz/",
    RenodeUtils.resolveRelativePaths("foo/./bar/baz/", "")
  );

let resolveRelativePathRelative9 = () =>
  Alcotest.(check(string))(
    "RenodeUtils.resolveRelativePath with relative 9",
    "foo/.bar/baz/",
    RenodeUtils.resolveRelativePaths("foo/.bar/baz/", "")
  );

let resolveRelativePathRelative10 = () =>
  Alcotest.(check(string))(
    "RenodeUtils.resolveRelativePath with relative 10",
    "foo/bar./baz/",
    RenodeUtils.resolveRelativePaths("foo/bar./baz/", "")
  );

let removeCommonPathPath1 = () => 
  Alcotest.(check(string))(
    "RenodeUtils.removeCommonPath path1",
    "baz/index.html",
    {
      let (path1, _) = RenodeUtils.removeCommonPath("/foo/bar/baz/index.html", "/foo/bar/index.html");
      path1;
    }
  );

  let removeCommonPathPath2 = () => 
  Alcotest.(check(string))(
    "RenodeUtils.removeCommonPath path2",
    "index.html",
    {
      let (_, path2) = RenodeUtils.removeCommonPath("/foo/bar/baz/index.html", "/foo/bar/index.html");
      path2;
    }
  );

  let getRelativePath = () =>
  Alcotest.(check(string))(
    "RenodeUtils.getRelativePath",
    "../../../../aaa/index.html",
    RenodeUtils.getRelativePath("foo/bar/baz/bbb", "aaa/index.html", false)
  );

  let getRelativeFilePath = () =>
  Alcotest.(check(string))(
    "RenodeUtils.getRelativePath for small path",
    "../../../index.html",
    RenodeUtils.getRelativePath("foo/bar/baz/index.html", "index.html", true)
  );

  let handleDotDotNoDots0 = () =>
  Alcotest.(check(string))(
    "RenodeUtils.handleDotDot no dots 0",
    "foo/bar/baz",
    RenodeUtils.handleDotDot("foo/bar/baz", "")
  );

let handleDotDotNoDots1 = () =>
  Alcotest.(check(string))(
    "RenodeUtils.handleDotDot no dots 1",
    "/foo/bar/baz",
    RenodeUtils.handleDotDot("/foo/bar/baz", "")
  );

let handleDotDotNoDots2 = () =>
  Alcotest.(check(string))(
    "RenodeUtils.handleDotDot no dots 2",
    "foo/bar/baz/",
    RenodeUtils.handleDotDot("foo/bar/baz/", "")
  );

let handleDotDotNoDots3 = () =>
  Alcotest.(check(string))(
    "RenodeUtils.handleDotDot no dots 3",
    "/foo/bar/baz/",
    RenodeUtils.handleDotDot("/foo/bar/baz/", "")
  );

let handleDotDotSingleDots = () =>
  Alcotest.(check(string))(
    "RenodeUtils.handleDotDot single dots",
    "foo/.bar./baz",
    RenodeUtils.handleDotDot("foo/.bar./baz", "")
  );

let handleDotDotFolderDotsBeginning = () =>
  Alcotest.(check(string))(
    "RenodeUtils.handleDotDot folder dots beginning",
    "foo/..bar/baz",
    RenodeUtils.handleDotDot("foo/..bar/baz", "")
  );

let handleDotDotFolderDotsEnd = () =>
  Alcotest.(check(string))(
    "RenodeUtils.handleDotDot folder dots end",
    "foo/bar../baz",
    RenodeUtils.handleDotDot("foo/bar../baz", "")
  );

let handleDotDotUpADirectory = () =>
  Alcotest.(check(string))(
    "RenodeUtils.handleDotDot up a dir",
    "foo",
    RenodeUtils.handleDotDot("foo/bar/..", "")
  );

let handleDotDotCurrentDirectory = () =>
  Alcotest.(check(string))(
    "RenodeUtils.handleDotDot at current directory",
    "./",
    RenodeUtils.handleDotDot("foo/bar/../../", "")
  );

let handleDotDotAboveCurrentDirectory0 = () =>
  Alcotest.(check(string))(
    "RenodeUtils.handleDotDot above current directory 0",
    "../",
    RenodeUtils.handleDotDot("foo/bar/../../..", "")
  );

let handleDotDotAboveCurrentDirectory1 = () =>
  Alcotest.(check(string))(
    "RenodeUtils.handleDotDot above current directory 1",
    "../",
    RenodeUtils.handleDotDot("/foo/bar/../../..", "")
  );

let handleDotDotAboveCurrentDirectory2 = () =>
  Alcotest.(check(string))(
    "RenodeUtils.handleDotDot above current directory 2",
    "../",
    RenodeUtils.handleDotDot("foo/bar/../../../", "")
  );

let handleDotDotAboveCurrentDirectory3 = () =>
  Alcotest.(check(string))(
    "RenodeUtils.handleDotDot above current directory 3",
    "../",
    RenodeUtils.handleDotDot("/foo/bar/../../../", "")
  );

let handleDotDotAboveCDWithFolder0 = () =>
  Alcotest.(check(string))(
    "RenodeUtils.handleDotDot above current dir with folder 0",
    "../baz",
    RenodeUtils.handleDotDot("foo/bar/../../../baz", "")
  );

let handleDotDotAboveCDWithFolder1 = () =>
  Alcotest.(check(string))(
    "RenodeUtils.handleDotDot above current dir with folder 1",
    "../baz/qux",
    RenodeUtils.handleDotDot("foo/bar/../../../baz/qux", "")
  );

let handleDotDotAboveCDWithFolder2 = () =>
  Alcotest.(check(string))(
    "RenodeUtils.handleDotDot above current dir with folder 2",
    "../",
    RenodeUtils.handleDotDot("foo/bar/../../../baz/qux/../../", "")
  );

let handleDotDotAboveCDWithFolder3 = () =>
  Alcotest.(check(string))(
    "RenodeUtils.handleDotDot above current dir with folder 3",
    "../../",
    RenodeUtils.handleDotDot("foo/bar/../../../baz/qux/../../../", "")
  );

let handleDotDotAboveCDWithFolder4 = () =>
  Alcotest.(check(string))(
    "RenodeUtils.handleDotDot above current dir with folder 4",
    "../../../../baz",
    RenodeUtils.handleDotDot("foo/bar/../../../baz/qux/../../../../../baz", "")
  );

let handleDuplicateSlash0 = () =>
  Alcotest.(check(string))(
    "RenodeUtils.handleDuplicateSlash in path 0",
    "foo/bar/fo/",
    RenodeUtils.removeDuplicateForwardSlash("foo/bar//fo//", "")
  );

let handleDuplicateSlash1 = () =>
  Alcotest.(check(string))(
    "RenodeUtils.handleDuplicateSlash in path 1",
    "/foo/bar/fo/",
    RenodeUtils.removeDuplicateForwardSlash("//foo/bar////fo////", "")
  );

let handleDuplicateSlash2 = () =>
  Alcotest.(check(string))(
    "RenodeUtils.handleDuplicateSlash in path 2",
    "foo/bar/baz/qux/..",
    RenodeUtils.removeDuplicateForwardSlash("foo/bar//baz//qux/..", "")
  );

let handleDuplicateSlash3 = () =>
  Alcotest.(check(string))(
    "RenodeUtils.handleDuplicateSlash in path 3",
    "foo/bar/baz/qux/..",
    RenodeUtils.removeDuplicateForwardSlash("foo/bar/////baz//qux/..", "")
  );

let handleDuplicateSlash4 = () =>
  Alcotest.(check(string))(
    "RenodeUtils.handleDuplicateSlash in path 0",
    "/foo/bar/./baz/",
    RenodeUtils.removeDuplicateForwardSlash("/foo/bar/./baz/", "")
  ); /* ===========   TESTS BEING RAN  =========== */

let utilsTestSet = [
  (
    "RenodeUtils.resolveRelativePath not relative0",
    `Slow,
    resolveRelativePathNotRelative0
  ),
  (
    "RenodeUtils.resolveRelativePath not relative1",
    `Slow,
    resolveRelativePathNotRelative1
  ),
  (
    "RenodeUtils.resolveRelativePath with relative1",
    `Slow,
    resolveRelativePathRelative1
  ),
  (
    "RenodeUtils.resolveRelativePath with relative2",
    `Slow,
    resolveRelativePathRelative2
  ),
  (
    "RenodeUtils.resolveRelativePath with relative3",
    `Slow,
    resolveRelativePathRelative3
  ),
  (
    "RenodeUtils.resolveRelativePath with relative4",
    `Slow,
    resolveRelativePathRelative4
  ),
  (
    "RenodeUtils.resolveRelativePath with relative5",
    `Slow,
    resolveRelativePathRelative5
  ),
  (
    "RenodeUtils.resolveRelativePath with relative6",
    `Slow,
    resolveRelativePathRelative6
  ),
  (
    "RenodeUtils.resolveRelativePath with relative7",
    `Slow,
    resolveRelativePathRelative7
  ),
  (
    "RenodeUtils.resolveRelativePath with relative8",
    `Slow,
    resolveRelativePathRelative8
  ),
  (
    "RenodeUtils.resolveRelativePath with relative9",
    `Slow,
    resolveRelativePathRelative9
  ),
  (
    "RenodeUtils.resolveRelativePath with relative10",
    `Slow,
    resolveRelativePathRelative10
  ),
  ("RenodeUtils.getRelativePath relative paths for directory", `Slow, getRelativePath),
  ("RenodeUtils.getRelativePath relative paths for file", `Slow, getRelativeFilePath),
  ("RenodeUtils.removeCommonPath relative paths path one", `Slow, removeCommonPathPath1),
  ("RenodeUtils.removeCommonPath relative paths path two", `Slow, removeCommonPathPath2),
  ("RenodeUtils.handleDotDot no dots 0", `Slow, handleDotDotNoDots0),
  ("RenodeUtils.handleDotDot no dots 1", `Slow, handleDotDotNoDots1),
  ("RenodeUtils.handleDotDot no dots 2", `Slow, handleDotDotNoDots2),
  ("RenodeUtils.handleDotDot no dots 3", `Slow, handleDotDotNoDots3),
  ("RenodeUtils.handleDotDot single dots", `Slow, handleDotDotSingleDots),
  (
    "RenodeUtils.handleDotDot folder dots beginning",
    `Slow,
    handleDotDotFolderDotsBeginning
  ),
  (
    "RenodeUtils.handleDotDot folder dots end",
    `Slow,
    handleDotDotFolderDotsEnd
  ),
  ("RenodeUtils.handleDotDot up a dir", `Slow, handleDotDotUpADirectory),
  (
    "RenodeUtils.handleDotDot at current directory",
    `Slow,
    handleDotDotCurrentDirectory
  ),
  (
    "RenodeUtils.handleDotDot above current directory 0",
    `Slow,
    handleDotDotAboveCurrentDirectory0
  ),
  (
    "RenodeUtils.handleDotDot above current directory 1",
    `Slow,
    handleDotDotAboveCurrentDirectory1
  ),
  (
    "RenodeUtils.handleDotDot above current directory 2",
    `Slow,
    handleDotDotAboveCurrentDirectory2
  ),
  (
    "RenodeUtils.handleDotDot above current directory 3",
    `Slow,
    handleDotDotAboveCurrentDirectory3
  ),
  (
    "RenodeUtils.handleDotDot above current dir with folder 0",
    `Slow,
    handleDotDotAboveCDWithFolder0
  ),
  (
    "RenodeUtils.handleDotDot above current dir with folder 1",
    `Slow,
    handleDotDotAboveCDWithFolder1
  ),
  (
    "RenodeUtils.handleDotDot above current dir with folder 2",
    `Slow,
    handleDotDotAboveCDWithFolder2
  ),
  (
    "RenodeUtils.handleDotDot above current dir with folder 3",
    `Slow,
    handleDotDotAboveCDWithFolder3
  ),
  (
    "RenodeUtils.handleDotDot above current dir with folder 4",
    `Slow,
    handleDotDotAboveCDWithFolder4
  ),
  ("RenodeUtils.handleDuplicateSlash in path 0", `Slow, handleDuplicateSlash0),
  ("RenodeUtils.handleDuplicateSlash in path 1", `Slow, handleDuplicateSlash1),
  ("RenodeUtils.handleDuplicateSlash in path 2", `Slow, handleDuplicateSlash2),
  ("RenodeUtils.handleDuplicateSlash in path 3", `Slow, handleDuplicateSlash3),
  ("RenodeUtils.handleDuplicateSlash in path 4", `Slow, handleDuplicateSlash4)
];
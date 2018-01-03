let basename = (~ext="", ~path) => {
  let path = Filename.basename(path);
  let extLength = String.length(ext);
  let pathLength = String.length(path) - extLength;
  switch extLength {
  | 0 => path
  | _ => String.sub(path, 0, pathLength)
  };
};

let delimeter =
  switch Filename.dir_sep {
  | "\\" => ";"
  | _ => ":"
  };

let sep = Filename.dir_sep;

let dirname = (~path) => Filename.dirname(path);

let extname = (~path: string) => {
  let pathLength = String.length(path);
  let dot = String.rindex(path, '.');
  String.sub(path, dot, pathLength - dot);
};

type pathObject = {
  dir: option(string),
  root: option(string),
  base: option(string),
  name: option(string),
  ext: option(string)
};

let format = (~pathObject) =>
  switch pathObject {
  | {dir: Some(dir), root: Some(root), base: Some(base), _} =>
    dir ++ sep ++ base
  | {dir: None, root: Some(root), base: Some(base), _} => root ++ base
  | {dir: None, root: Some(root), base: None, name: Some(name), ext: Some(ext)} =>
    root ++ name ++ ext
  | _ => "Missing Necessary Information to construct a path string."
  };

let isAbsolute = (~path) => ! Filename.is_relative(path);

let normalize = (~path) =>
  RenodeUtils.handleDotDot(
    ~path=
      RenodeUtils.removeDuplicateForwardSlash(
        ~path=RenodeUtils.resolveRelativePaths(~path, ~newPath=""),
        ~newPath=""
      ),
    ~newPath=""
  );

let join = (~paths) => {
  let joinedPaths =
    List.fold_left(
      (acc, curr) => {
        let accLength = String.length(acc);
        accLength > 0 && (acc.[accLength - 1] == '/' || curr.[0] == '/') ?
          acc ++ curr : acc ++ sep ++ curr;
      },
      "",
      paths
    );
  normalize(~path=joinedPaths);
};

let resolve = (~paths) => {
  let keepJoining = ref(true);
  let rePath = ref("");
  let onPath = (path, index, e) =>
    e ?
      {
        keepJoining := false;
        rePath := path ++ sep ++ rePath^;
      } :
      (
        switch path {
        | ""
        | "./" => ()
        | "/" =>
          keepJoining := false;
          rePath := String.length(rePath^) == 0 ? path : path ++ sep ++ rePath^;
        | _ =>
          switch path.[0] {
          | '/' =>
            rePath :=
              String.length(rePath^) == 0 ? path : path ++ sep ++ rePath^;
            keepJoining := false;
          | _ =>
            rePath :=
              String.length(rePath^) == 0 ? path : path ++ sep ++ rePath^
          }
        }
      );
  RenodeUtils.iterPathUntil(~condition=keepJoining, ~list=paths, ~f=onPath);
  rePath := rePath^.[0] == '/' ? rePath^ : Sys.getcwd() ++ sep ++ rePath^;
  normalize(~path=rePath^);
};

let relative = (~from, ~_to) => ();

let parse = (~path) => {
  let root = path.[0] == '/' ? Some("/") : None;
  let dir = ref(None);
  let base = ref(None);
  let name = ref(None);
  let ext = ref(None);
  let endsInSlash =
    String.sub(path, String.length(path) - 1, 1) == "/" ? true : false;
  let p = endsInSlash ? String.sub(path, 0, String.length(path) - 1) : path;
  let hasSlash = String.contains(p, '/');
  let hasDot = String.contains(p, '.');
  let pathLength = String.length(p);
  hasSlash ?
    hasDot ?
      {
        dir :=
          pathLength == 1 ?
            None :
            Some(String.sub(p, 0, String.rindex_from(p, pathLength - 1, '/')));
        base :=
          Some(
            String.sub(
              p,
              String.rindex(p, '/') + 1,
              pathLength - (String.rindex(p, '/') + 1)
            )
          );
        name :=
          Some(
            String.sub(
              p,
              String.rindex(p, '/') + 1,
              pathLength - String.rindex(p, '.') - 1
            )
          );
        ext := Some(extname(p));
      } :
      {
        dir :=
          pathLength == 1 ?
            None :
            Some(String.sub(p, 0, String.rindex_from(p, pathLength - 1, '/')));
        base :=
          Some(
            String.sub(
              p,
              String.rindex(p, '/') + 1,
              pathLength - (String.rindex(p, '/') + 1)
            )
          );
        name :=
          Some(
            String.sub(
              path,
              String.rindex(p, '/') + 1,
              pathLength - (String.rindex(p, '/') + 1)
            )
          );
        ext := None;
      } :
    hasDot ?
      {
        let dotIndex = String.rindex(p, '.');
        dir := None;
        base := Some(p);
        ext := pathLength === 1 && p.[0] == '.' ? None : Some(extname(p));
        name := Some(String.sub(p, 0, pathLength - dotIndex));
      } :
      {
        dir := path == "/" ? Some(path) : None;
        base := p == "" ? None : Some(p);
        name := p == "" ? None : Some(p);
        ext := None;
      };
  {root, dir: dir^, base: base^, ext: ext^, name: name^};
};
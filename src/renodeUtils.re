let sep = Filename.dir_sep;

let charSep =
  switch sep {
  | "\\" => '\\'
  | _ => '/'
  };

let rec resolveRelativePaths = (~path, ~newPath) =>
  if (String.length(path) == 0) {
    newPath;
  } else {
    let contains = String.contains(path, charSep);
    contains ?
      {
        let index = String.index(path, charSep);
        index == 1 && String.sub(path, 0, 2) == "." ++ sep ?
          resolveRelativePaths(
            ~path=String.sub(path, 2, String.length(path) - 2),
            ~newPath
          ) :
          {
            let updatePath =
              String.sub(path, index + 1, String.length(path) - (index + 1));
            let updateNewPath = newPath ++ String.sub(path, 0, index + 1);
            resolveRelativePaths(~path=updatePath, ~newPath=updateNewPath);
          };
      } :
      resolveRelativePaths(~path="", ~newPath=newPath ++ path);
  };

let rec removeDuplicateForwardSlash = (~path, ~newPath) =>
  if (String.length(path) == 0) {
    newPath;
  } else {
    let slashIndex =
      String.contains(path, charSep) ?
        {
          let index = String.index(path, charSep);
          index + 1 == String.length(path) ?
            None : Some(String.index(path, charSep));
        } :
        None;
    switch slashIndex {
    | Some(x) =>
      path.[x] == path.[x + 1] ?
        {
          let validChunk = String.sub(path, 0, x + 1);
          let updatePath =
            String.sub(path, x + 2, String.length(path) - (x + 2));
          let updateNewPath =
            String.length(newPath) > 0
            && newPath.[String.length(newPath) - 1] == charSep
            && validChunk.[0] == charSep ?
              newPath
              ++ String.sub(validChunk, 0, String.length(validChunk) - 1) :
              newPath ++ validChunk;
          removeDuplicateForwardSlash(
            ~path=updatePath,
            ~newPath=updateNewPath
          );
        } :
        {
          let updatePath =
            String.sub(path, x + 1, String.length(path) - (x + 1));
          let updateNewPath =
            String.length(newPath) > 0
            && newPath.[String.length(newPath) - 1] == charSep
            && String.sub(path, 0, x + 1).[0] == charSep ?
              newPath ++ String.sub(path, 1, x) :
              newPath ++ String.sub(path, 0, x + 1);
          removeDuplicateForwardSlash(
            ~path=updatePath,
            ~newPath=updateNewPath
          );
        }
    | None =>
      switch path {
      | "" => newPath
      | _ => removeDuplicateForwardSlash(~path="", ~newPath=newPath ++ path)
      }
    };
  };

let rec handleDotDot = (~path, ~newPath) =>
  if (String.length(path) == 0) {
    newPath;
  } else {
    let firstSlash =
      String.contains(String.sub(path, 1, String.length(path) - 1), charSep) ?
        String.length(path) <= 1 ? 0 : String.index_from(path, 1, charSep) :
        String.length(path);
    let chunk = String.sub(path, 0, firstSlash);
    switch chunk {
    | "" => newPath
    | "\\.."
    | "/.." =>
      let updatePath =
        String.sub(path, firstSlash, String.length(path) - firstSlash);
      let updateNewPath =
        String.contains(newPath, charSep) ?
          String.sub(newPath, 0, String.rindex(newPath, charSep)) : "";
      switch updateNewPath {
      | "" =>
        switch newPath {
        | "\\.."
        | "/.."
        | ".." => handleDotDot(~path=updatePath, ~newPath=newPath ++ chunk)
        | _ => handleDotDot(~path=updatePath, ~newPath="./")
        }
      | "." => handleDotDot(~path=updatePath, ~newPath="../")
      | _ =>
        let finalSlashIndex = String.rindex(newPath, '/');
        let newPathEnd =
          String.sub(
            newPath,
            finalSlashIndex,
            String.length(newPath) - finalSlashIndex
          );
        switch newPathEnd {
        | "\\.."
        | "/.." => handleDotDot(~path=updatePath, ~newPath=newPath ++ chunk)
        | _ => handleDotDot(~path=updatePath, ~newPath=updateNewPath)
        };
      };
    | "\\"
    | "/" =>
      switch newPath {
      | ".\\"
      | "./"
      | "..\\"
      | "../" => newPath
      | _ =>
        let updatePath =
          String.sub(path, firstSlash, String.length(path) - firstSlash);
        handleDotDot(~path=updatePath, ~newPath=newPath ++ chunk);
      }
    | _ =>
      let updatePath =
        String.sub(path, firstSlash, String.length(path) - firstSlash);
      switch newPath {
      | "..\\"
      | "../" =>
        handleDotDot(
          ~path=updatePath,
          ~newPath=String.sub(newPath, 0, String.length(newPath) - 1) ++ chunk
        )
      | _ => handleDotDot(~path=updatePath, ~newPath=newPath ++ chunk)
      };
    };
  };

let iterPathUntil = (~condition, ~list, ~f) => {
  let arr = Array.of_list(list);
  let position = ref(Array.length(arr) - 1);
  while (condition^ && position^ > (-1)) {
    f(arr[position^], position, ! (position^ > (-1)));
    position := position^ - 1;
  };
};
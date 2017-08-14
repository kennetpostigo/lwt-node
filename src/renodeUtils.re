let rec resolveRelativePaths path::path newPath::newPath => {
  if (String.length path == 0) {
    newPath;
  } else {
    let contains = String.contains path '/';
    switch contains {
    | true => {
      let index = String.index path '/';
      switch (index == 1 && (String.sub path 0 2) == "./") {
      | true => resolveRelativePaths path::(String.sub path 2 (String.length path - 2)) newPath::newPath
      | false => {
          let updatePath = String.sub path (index + 1) (String.length path - (index + 1));
          let updateNewPath = newPath ^ (String.sub path 0 (index + 1));
          resolveRelativePaths path::updatePath newPath::updateNewPath;
        }
      }
    }
    | false => resolveRelativePaths path::"" newPath::(newPath ^ path);
    }
  }
};

let rec removeDuplicateForwardSlash path::path newPath::newPath => {
  if (String.length path == 0) {
    newPath;
  } else {
    let slashIndex = switch (String.contains path '/') {
    | true => {
        let index = String.index path '/';
        ((index + 1 )== String.length path )? None : Some (String.index path '/');
      }
    | false => None
    };
    switch slashIndex {
    | Some x => {
        switch (path.[x] == path.[(x + 1)]) {
        | true => {
            let validChunk = String.sub path 0 (x + 1);
            let updatePath = String.sub path (x + 2) (String.length path - (x + 2));
            let updateNewPath = switch (String.length newPath > 0 && newPath.[String.length newPath - 1] == '/' && validChunk.[0] == '/') {
            | true => newPath ^ (String.sub validChunk 0 (String.length validChunk - 1))
            | false => newPath ^ validChunk
            };
            removeDuplicateForwardSlash path::updatePath newPath::updateNewPath;
          }
        | false => {
            let updatePath = String.sub path (x + 1) (String.length path - (x + 1));
            let updateNewPath = switch (String.length newPath > 0 && newPath.[String.length newPath - 1] == '/' && (String.sub path 0 (x + 1)).[0] == '/') {
              | true => newPath ^ (String.sub path 1 x)
              | false => newPath ^ (String.sub path 0 (x + 1))
              };
            removeDuplicateForwardSlash path::updatePath newPath::updateNewPath;
          }
        }
      }
    | None => {
        switch path {
        | "" => newPath
        | _ => removeDuplicateForwardSlash path::"" newPath::(newPath ^ path)
        }
      }
    }
  }
};

let rec handleDotDot path::path newPath::newPath => {
  if (String.length path == 0) {
    newPath;
  } else {
    let firstSlash = switch (String.contains (String.sub path 1 (String.length path - 1)) '/') {
    | true => (String.length path <= 1) ? 0 : String.index_from path 1 '/'
    | false => String.length path
    };
    let chunk = String.sub path 0 firstSlash;
    switch chunk {
    | "" => newPath
    | "/.." => {
        let updatePath = String.sub path firstSlash (String.length path - firstSlash);
        let updateNewPath = switch (String.contains newPath '/') {
        | true => String.sub newPath 0 (String.rindex newPath '/')
        | false => ""
        };
        switch updateNewPath {
        | "" =>
            switch newPath {
            | "/.." | ".." => handleDotDot path::updatePath newPath::(newPath ^ chunk)
            | _ => handleDotDot path::updatePath newPath::"./"
            }
        | "." => handleDotDot path::updatePath newPath::"../"
        | _ => {
            let finalSlashIndex = String.rindex newPath '/';
            let newPathEnd = String.sub newPath finalSlashIndex (String.length newPath - finalSlashIndex);
            switch newPathEnd {
            | "/.." => handleDotDot path::updatePath newPath::(newPath ^ chunk)
            | _ => handleDotDot path::updatePath newPath::updateNewPath
            }
          }
        };
      }
    | "/" => {
        switch newPath {
        | "./" | "../" => newPath
        | _ =>
            let updatePath = String.sub path firstSlash (String.length path - firstSlash);
            handleDotDot path::updatePath newPath::(newPath ^ chunk);
          }
        }
    | _ => {
        let updatePath = String.sub path firstSlash (String.length path - firstSlash);
        switch newPath {
        | "../" => handleDotDot path::updatePath newPath::((String.sub newPath 0 (String.length newPath -1)) ^ chunk);
        | _ => handleDotDot path::updatePath newPath::(newPath ^ chunk);
        }
      }
    }
  }
};

let iterPathUntil condition::condition list::list f::f => {
  let arr = Array.of_list list;
  let position = ref (Array.length arr - 1);
  while (!condition && !position > -1) {
    f arr.(!position) position (not (!position > -1));
    position := (!position - 1);
  };
};

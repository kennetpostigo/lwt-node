open ReasonNode;

let generateString po::(po : Path.pathObject) expected path=> {
  let dir = ref "None";
  let root = ref "None";
  let base = ref "None";
  let name = ref "None";
  let ext = ref "None";

  Path.(switch po.dir {
  | Some x => dir := x
  | None => ()
  });

  Path.(switch po.root {
  | Some x => root := x
  | None => ()
  });

  Path.(switch po.base {
  | Some x => base := x
  | None => ()
  });

  Path.(switch po.name {
  | Some x => name := x
  | None => ()
  });

  Path.(switch po.ext {
  | Some x => ext := x
  | None => ()
  });
  print_string ("\n\nPATH: " ^ path ^ "\n");
  print_string ("EXPECTED: " ^ expected ^ "\n");
  print_string ("ACTUAL  : { root: " ^ !root ^ ", dir: " ^ !dir ^ ", base: " ^ !base ^ ", ext: " ^ !ext ^ ", name: " ^ !name ^ " }\n");
};


print_string "\n\n================================\n\n";

generateString (Path.parse "/home/user/dir/") "{ root: /, dir: /home/user, base: dir, ext: None, name: dir }" "/home/user/dir/";
generateString (Path.parse ".") "{ root: None, dir: None, base: '.', ext: None, name: '.' }" ".";
generateString (Path.parse "./") "{ root: None, dir: None, base: '.', ext: None, name: '.' }" "./";
generateString (Path.parse "/") "{ root: '/', dir: '/', base: None, ext: None, name: None }" "/";
generateString (Path.parse "/home/user/dir/file.name/") "{ root: '/', dir: '/home/user/dir',base: 'file.name', ext: '.name', name: 'file' }" "/home/user/dir/file.name/";
generateString (Path.parse "home/user/..///file.name/") "{ root: None, dir: 'home/user/..///', base: 'file.name', ext: '.name', name: 'file' }" "home/user/..///file.name/";
generateString (Path.parse "m") "{ root: None, dir: None, base: 'm', ext: None, name: 'm' }" "m";


Node.run {
  Fs.mkdir "testDirAsync0" 416  (Fs.(fun
    | Ok => print_string "\n\n====OK====\n\n"
    | Err e => print_string "\n\n====ERR====\n\n"
  ));
};

Fs.mkdirSync "testDirSync0" 416;

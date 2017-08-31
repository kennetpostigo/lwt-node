type fsErr =
| Ok
| Err Unix.error;

let access: path::string => mode::Lwt_unix.access_permission => callback::(fsErr => 'a) => unit;

let accesSync: path::string => mode::Unix.access_permission => unit;

let appendFile: file::'a => data::'b => optios::'c => callback::'d => unit;

let appendFileSync: file::'a => data::'b => optios::'c => unit;

let chmod: path::string => mode::Lwt_unix.file_perm => callback::(fsErr => 'a) => unit;

let chmodeSync: path::string => mode::Unix.file_perm => unit;

let chown: path::string => uid::int => gid::int => callback::(fsErr => 'a) => unit;

let chownSync: path::string => uid::int => gid::int => unit;

let close: fd::Lwt_unix.file_descr => callback::(fsErr=> 'a) => unit;

let closeSync: fd::Unix.file_descr => unit;

let createReadStream: path::string => options::'a => unit;

let createWriteStream: path::string => options::'a => unit;

let fchmod: fd::Lwt_unix.file_descr => mode::Lwt_unix.file_perm => callback::(fsErr => 'a) => unit;

let fchmodSync: fd::Unix.file_descr => mode::Lwt_unix.file_perm => unit;

let fchown: fd::Lwt_unix.file_descr => uid::int => gid::int => callback::(fsErr => 'a) => unit;

let fchownSync: fd::Unix.file_descr => uid::int => gid::int => unit;

let fdatasync: fd::Lwt_unix.file_descr => callback::(fsErr => 'a) => unit;

let fdatasyncSync: fd::Unix.file_descr => unit;

let fstat: fd::Lwt_unix.file_descr => callback::(fsErr => 'a) => unit;

let fstatSync: fd::Unix.file_descr => 'a;

let fsync: fd::Lwt_unix.file_descr => callback::(fsErr => 'a) => unit;

let fsyncSync: fd::Unix.file_descr => unit;

let ftruncate: fd::Lwt_unix.file_descr => len::int => callback::(fsErr => 'a) => unit;

let ftruncateSync: fd::Unix.file_descr => len::int => unit;

let futimes: fd::Lwt_unix.file_descr => atime::'a => mtime::'b => callback::(fsErr => 'a) => unit;

let futimesSync: fd::Unix.file_descr => atime::'a => mtime::'b => unit;

let lchmod: path::string => mode::'a => callback::(fsErr => 'b) => unit;

let lchmodSync: path::string => mode::'a => unit;

let lchown: path::string => uid::int => gid::int => callback::(fsErr => 'a) => unit;

let lchownSync: path::string => uid::int => gid::int => unit;

let link: existingPath::string => newPath::string => callback::(fsErr => 'a) => unit;

let linkSync: existingPath::string => newPath::string => unit;

let lstat: path::string => callback::(fsErr => 'a) => unit;

let lstatSync: path::string => 'a;

let mkdir: path::string => mode::Lwt_unix.file_perm => callback::(fsErr => 'a) => unit;

let mkdirSync: path::string => mode::Unix.file_perm => unit;

let mkdtemp: prefix::'a => options::'b => callback::(fsErr => 'c) => unit;

let mkdtempSync: prefix::'a => options::'b => unit;

let _open: path::string => flags::Lwt_unix.open_flag => mode::Lwt_unix.file_perm => callback::(fsErr => 'a) => unit;

let openSync: path::string => flags::Lwt_unix.open_flag => mode::Lwt_unix.file_perm => unit;

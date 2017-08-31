type fsErr =
| Ok
| Err Unix.error;

let access: path::string => mode::Lwt_unix.access_permission => callback::(fsErr => 'a) => unit;

let accessSync: path::string => mode::Unix.access_permission => unit;

let appendFile: file::'a => data::'b => options::'c => callback::'d => unit;

let appendFileSync: file::'a => data::'b => options::'c => unit;

let chmod: path::string => mode::Lwt_unix.file_perm => callback::(fsErr => 'a) => unit;

let chmodSync: path::string => mode::Unix.file_perm => unit;

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

let fstat: fd::Lwt_unix.file_descr => callback::(fsErr => option Lwt_unix.stats => 'a) => unit;

let fstatSync: fd::Unix.file_descr => Unix.stats;

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

let lstat: path::string => callback::(fsErr => option Lwt_unix.stats => 'a) => unit;

let lstatSync: path::string => Unix.stats;

let mkdir: path::string => mode::Lwt_unix.file_perm => callback::(fsErr => 'a) => unit;

let mkdirSync: path::string => mode::Unix.file_perm => unit;

let mkdtemp: prefix::'a => options::'b => callback::(fsErr => 'c) => unit;

let mkdtempSync: prefix::'a => options::'b => unit;

let _open: path::string => flags::list Lwt_unix.open_flag => mode::Lwt_unix.file_perm => callback::(fsErr => option Lwt_unix.file_descr => 'a) => unit;

let openSync: path::string => flags::list Unix.open_flag => mode::Unix.file_perm => Unix.file_descr;

let read: fd::Lwt_unix.file_descr => buffer::bytes => offset::int => length::int => callback::(fsErr => option int => 'a) => unit;

let readSync: fd::Unix.file_descr => buffer::bytes => offset::int => length::int => int;

let readdir: path::Lwt_unix.dir_handle => callback::(fsErr => option string => 'a) => unit;

let readdirSync: path::Unix.dir_handle => string;

let readFile: path::string => options::'a => callback::(fsErr => 'b) => unit;

let readFileSync: path::'a => options::'b => unit;

let readLink: path::string => callback::(fsErr => option string =>'a) => unit;

let readLinkSync: path::string => string;

let realpath: path::string => options::'a => callback::(fsErr => 'b) => unit;

let realpathSync: path::'a => options::'b => unit;

let rename: oldPath::string => newPath::string => callback::(fsErr => 'a) => unit;

let renameSync: oldPath::string => newPath::string => unit;

let rmdir: path::string => callback::(fsErr => 'a) => unit;

let rmdirSync: path::string => unit;

let stat: path::string => callback::(fsErr => option Lwt_unix.stats => 'a) => unit;

let statSync: path::string => Lwt_unix.stats;

let symlink: target::string => path::string => callback::(fsErr => 'a) => unit;

let symlinkSync: target::string => path::string => unit;

let truncate: path::string => len::int => callback::(fsErr => 'a) => unit;

let truncateSync: path::string => len::int => unit;

let unlink: path::string => callback::(fsErr => 'a) => unit;

let unlinkSync: path::string => unit;

let unwatchFile: filename::'a => listener::'b => unit;

let utimes: path::string => atime::float => mtime::float => callback::(fsErr => 'a) => unit;

let utimesSync: path::string => atime::float => mtime::float => unit;

let watch: filename::'a => options::'b => listener::'c => unit;

let watchFile: filename::'a => options::'b => listener::'c => unit;

let write: fd::Lwt_unix.file_descr => buffer::bytes => offset::int => length::int => callback::(fsErr => option int => 'a) => unit;

let writeSync: fd::Unix.file_descr => buffer::bytes => offset::int => length::int => int;

let writeString: fd::Lwt_unix.file_descr => string::string => offset::int => length::int => callback::(fsErr => option int => 'a) => unit;

let writeStringSync: fd::Unix.file_descr => string::string => offset::int => length::int => int;

let writeFile: file::'a => data::'b => options::'c => callback::(fsErr => 'd) => unit;

let writeFileSync: file::'a => data::'b => options::'c => unit;

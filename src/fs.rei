type fsErr =
| Ok
| Err Unix.error;

type async = Async_Constructor;
type sync = Sync_Constructor;

type fileDescr _ =
  | AsyncFileDescr Lwt_unix.file_descr :fileDescr async
  | SyncFileDescr Unix.file_descr :fileDescr sync;

type accessPerm _ =
  | AsyncAccessPerm Lwt_unix.access_permission :accessPerm async
  | SyncAccessPerm Unix.access_permission :accessPerm sync;

type filePerm _ =
  | AsyncFilePerm Lwt_unix.file_perm :filePerm async
  | SyncFilePerm Unix.file_perm :filePerm sync;

type stats _ =
  | AsyncStats Lwt_unix.stats :stats async
  | SyncStats Unix.stats :stats sync;

type dirHandle _ =
  | AsyncDirHandle Lwt_unix.dir_handle :dirHandle async
  | SyncDirHandle Unix.dir_handle :dirHandle sync;

type openFlag _ =
  | AsyncOpenFlag Lwt_unix.open_flag :openFlag async
  | SyncOpenFlag Unix.open_flag :openFlag sync;

let access: path::string => mode::(accessPerm async) => callback::(fsErr => 'a) => unit;

let accessSync: path::string => mode::(accessPerm sync) => unit;

let appendFile: file::'a => data::'b => options::'c => callback::'d => unit;

let appendFileSync: file::'a => data::'b => options::'c => unit;

let chmod: path::string => mode::(filePerm async) => callback::(fsErr => 'a) => unit;

let chmodSync: path::string => mode::(filePerm sync) => unit;

let chown: path::string => uid::int => gid::int => callback::(fsErr => 'a) => unit;

let chownSync: path::string => uid::int => gid::int => unit;

let close: fd::(fileDescr async) => callback::(fsErr=> 'a) => unit;

let closeSync: fd::(fileDescr sync) => unit;

let createReadStream: path::string => options::'a => unit;

let createWriteStream: path::string => options::'a => unit;

let fchmod: fd::(fileDescr async) => mode::(filePerm async) => callback::(fsErr => 'a) => unit;

let fchmodSync: fd::(fileDescr sync) => mode::(filePerm sync) => unit;

let fchown: fd::(fileDescr async) => uid::int => gid::int => callback::(fsErr => 'a) => unit;

let fchownSync: fd::(fileDescr sync) => uid::int => gid::int => unit;

let fdatasync: fd::(fileDescr async) => callback::(fsErr => 'a) => unit;

let fdatasyncSync: fd::(fileDescr sync) => unit;

let fstat: fd::(fileDescr async) => callback::(fsErr => option Lwt_unix.stats => 'a) => unit;

let fstatSync: fd::(fileDescr sync) => Unix.stats;

let fsync: fd::(fileDescr async) => callback::(fsErr => 'a) => unit;

let fsyncSync: fd::(fileDescr sync) => unit;

let ftruncate: fd::(fileDescr async) => len::int => callback::(fsErr => 'a) => unit;

let ftruncateSync: fd::(fileDescr sync) => len::int => unit;

let futimes: fd::(fileDescr async) => atime::'a => mtime::'b => callback::(fsErr => 'a) => unit;

let futimesSync: fd::(fileDescr sync) => atime::'a => mtime::'b => unit;

let lchmod: path::string => mode::'a => callback::(fsErr => 'b) => unit;

let lchmodSync: path::string => mode::'a => unit;

let lchown: path::string => uid::int => gid::int => callback::(fsErr => 'a) => unit;

let lchownSync: path::string => uid::int => gid::int => unit;

let link: existingPath::string => newPath::string => callback::(fsErr => 'a) => unit;

let linkSync: existingPath::string => newPath::string => unit;

let lstat: path::string => callback::(fsErr => option Lwt_unix.stats => 'a) => unit;

let lstatSync: path::string => Unix.stats;

let mkdir: path::string => mode::(filePerm async) => callback::(fsErr => 'a) => unit;

let mkdirSync: path::string => mode::(filePerm sync) => unit;

let mkdtemp: prefix::'a => options::'b => callback::(fsErr => 'c) => unit;

let mkdtempSync: prefix::'a => options::'b => unit;

let _open: path::string => flags::(list Lwt_unix.open_flag) => mode::(filePerm async) => callback::(fsErr => option (fileDescr async) => 'a) => unit;

let openSync: path::string => flags::(list Unix.open_flag) => mode::(filePerm sync) => Unix.file_descr;

let read: fd::(fileDescr async) => buffer::bytes => offset::int => length::int => callback::(fsErr => option int => 'a) => unit;

let readSync: fd::(fileDescr sync) => buffer::bytes => offset::int => length::int => int;

let readdir: path::(dirHandle async) => callback::(fsErr => option string => 'a) => unit;

let readdirSync: path::(dirHandle sync) => string;

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

let statSync: path::string => Unix.stats;

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

let write: fd::(fileDescr async) => buffer::bytes => offset::int => length::int => callback::(fsErr => option int => 'a) => unit;

let writeSync: fd::(fileDescr sync) => buffer::bytes => offset::int => length::int => int;

let writeString: fd::(fileDescr async) => string::string => offset::int => length::int => callback::(fsErr => option int => 'a) => unit;

let writeStringSync: fd::(fileDescr sync) => string::string => offset::int => length::int => int;

let writeFile: file::'a => data::'b => options::'c => callback::(fsErr => 'd) => unit;

let writeFileSync: file::'a => data::'b => options::'c => unit;

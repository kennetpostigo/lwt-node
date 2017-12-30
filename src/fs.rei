type fsErr =
  | Ok
  | Err(Unix.error);

type asyncFileDescr = Lwt_unix.file_descr;

type syncFileDescr = Unix.file_descr;

type asyncFilePerm = Lwt_unix.file_perm;

type syncFilePerm = Unix.file_perm;

type asyncAccessPerm = Lwt_unix.access_permission;

type syncAccessPerm = Unix.access_permission;

type asyncStats = Lwt_unix.stats;

type syncStats = Unix.stats;

type asyncDirHandle = Lwt_unix.dir_handle;

type syncDirHandle = Unix.dir_handle;

type asyncOpenFlag = Lwt_unix.open_flag;

type syncOpenFlag = Unix.open_flag;

let access:
  (~path: string, ~mode: asyncAccessPerm, ~callback: fsErr => 'a) => unit;

let accessSync: (~path: string, ~mode: syncAccessPerm) => unit;

let appendFile: (~file: 'a, ~data: 'b, ~options: 'c, ~callback: 'd) => unit;

let appendFileSync: (~file: 'a, ~data: 'b, ~options: 'c) => unit;

let chmod:
  (~path: string, ~mode: asyncFilePerm, ~callback: fsErr => 'a) => unit;

let chmodSync: (~path: string, ~mode: syncFilePerm) => unit;

let chown:
  (~path: string, ~uid: int, ~gid: int, ~callback: fsErr => 'a) => unit;

let chownSync: (~path: string, ~uid: int, ~gid: int) => unit;

let close: (~fd: asyncFileDescr, ~callback: fsErr => 'a) => unit;

let closeSync: (~fd: syncFileDescr) => unit;

let createReadStream: (~path: string, ~options: 'a) => unit;

let createWriteStream: (~path: string, ~options: 'a) => unit;

let fchmod:
  (~fd: asyncFileDescr, ~mode: asyncFilePerm, ~callback: fsErr => 'a) => unit;

let fchmodSync: (~fd: syncFileDescr, ~mode: syncFilePerm) => unit;

let fchown:
  (~fd: asyncFileDescr, ~uid: int, ~gid: int, ~callback: fsErr => 'a) => unit;

let fchownSync: (~fd: syncFileDescr, ~uid: int, ~gid: int) => unit;

let fdatasync: (~fd: asyncFileDescr, ~callback: fsErr => 'a) => unit;

let fdatasyncSync: (~fd: syncFileDescr) => unit;

let fstat:
  (~fd: asyncFileDescr, ~callback: (fsErr, option(asyncStats)) => 'a) => unit;

let fstatSync: (~fd: syncFileDescr) => syncStats;

let fsync: (~fd: asyncFileDescr, ~callback: fsErr => 'a) => unit;

let fsyncSync: (~fd: syncFileDescr) => unit;

let ftruncate:
  (~fd: asyncFileDescr, ~len: int, ~callback: fsErr => 'a) => unit;

let ftruncateSync: (~fd: syncFileDescr, ~len: int) => unit;

let futimes:
  (~fd: asyncFileDescr, ~atime: 'a, ~mtime: 'b, ~callback: fsErr => 'a) => unit;

let futimesSync: (~fd: syncFileDescr, ~atime: 'a, ~mtime: 'b) => unit;

let lchmod: (~path: string, ~mode: 'a, ~callback: fsErr => 'b) => unit;

let lchmodSync: (~path: string, ~mode: 'a) => unit;

let lchown:
  (~path: string, ~uid: int, ~gid: int, ~callback: fsErr => 'a) => unit;

let lchownSync: (~path: string, ~uid: int, ~gid: int) => unit;

let link:
  (~existingPath: string, ~newPath: string, ~callback: fsErr => 'a) => unit;

let linkSync: (~existingPath: string, ~newPath: string) => unit;

let lstat:
  (~path: string, ~callback: (fsErr, option(asyncStats)) => 'a) => unit;

let lstatSync: (~path: string) => syncStats;

let mkdir:
  (~path: string, ~mode: asyncFilePerm, ~callback: fsErr => 'a) => unit;

let mkdirSync: (~path: string, ~mode: syncFilePerm) => unit;

let mkdtemp: (~prefix: 'a, ~options: 'b, ~callback: fsErr => 'c) => unit;

let mkdtempSync: (~prefix: 'a, ~options: 'b) => unit;

let _open:
  (
    ~path: string,
    ~flags: list(asyncOpenFlag),
    ~mode: asyncFilePerm,
    ~callback: (fsErr, option(asyncFileDescr)) => 'a
  ) =>
  unit;

let openSync:
  (~path: string, ~flags: list(syncOpenFlag), ~mode: syncFilePerm) =>
  syncFileDescr;

let read:
  (
    ~fd: asyncFileDescr,
    ~buffer: bytes,
    ~offset: int,
    ~length: int,
    ~callback: (fsErr, option(int)) => 'a
  ) =>
  unit;

let readSync:
  (~fd: syncFileDescr, ~buffer: bytes, ~offset: int, ~length: int) => int;

let readdir:
  (~path: asyncDirHandle, ~callback: (fsErr, option(string)) => 'a) => unit;

let readdirSync: (~path: syncDirHandle) => string;

let readFile: (~path: string, ~options: 'a, ~callback: fsErr => 'b) => unit;

let readFileSync: (~path: 'a, ~options: 'b) => unit;

let readLink:
  (~path: string, ~callback: (fsErr, option(string)) => 'a) => unit;

let readLinkSync: (~path: string) => string;

let realpath: (~path: string, ~options: 'a, ~callback: fsErr => 'b) => unit;

let realpathSync: (~path: 'a, ~options: 'b) => unit;

let rename:
  (~oldPath: string, ~newPath: string, ~callback: fsErr => 'a) => unit;

let renameSync: (~oldPath: string, ~newPath: string) => unit;

let rmdir: (~path: string, ~callback: fsErr => 'a) => unit;

let rmdirSync: (~path: string) => unit;

let stat:
  (~path: string, ~callback: (fsErr, option(asyncStats)) => 'a) => unit;

let statSync: (~path: string) => syncStats;

let symlink: (~target: string, ~path: string, ~callback: fsErr => 'a) => unit;

let symlinkSync: (~target: string, ~path: string) => unit;

let truncate: (~path: string, ~len: int, ~callback: fsErr => 'a) => unit;

let truncateSync: (~path: string, ~len: int) => unit;

let unlink: (~path: string, ~callback: fsErr => 'a) => unit;

let unlinkSync: (~path: string) => unit;

let unwatchFile: (~filename: 'a, ~listener: 'b) => unit;

let utimes:
  (~path: string, ~atime: float, ~mtime: float, ~callback: fsErr => 'a) => unit;

let utimesSync: (~path: string, ~atime: float, ~mtime: float) => unit;

let watch: (~filename: 'a, ~options: 'b, ~listener: 'c) => unit;

let watchFile: (~filename: 'a, ~options: 'b, ~listener: 'c) => unit;

let write:
  (
    ~fd: asyncFileDescr,
    ~buffer: bytes,
    ~offset: int,
    ~length: int,
    ~callback: (fsErr, option(int)) => 'a
  ) =>
  unit;

let writeSync:
  (~fd: syncFileDescr, ~buffer: bytes, ~offset: int, ~length: int) => int;

let writeString:
  (
    ~fd: asyncFileDescr,
    ~string: string,
    ~offset: int,
    ~length: int,
    ~callback: (fsErr, option(int)) => 'a
  ) =>
  unit;

let writeStringSync:
  (~fd: syncFileDescr, ~string: string, ~offset: int, ~length: int) => int;

let writeFile:
  (~file: 'a, ~data: 'b, ~options: 'c, ~callback: fsErr => 'd) => unit;

let writeFileSync: (~file: 'a, ~data: 'b, ~options: 'c) => unit;
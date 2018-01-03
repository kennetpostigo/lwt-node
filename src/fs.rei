type asyncFileDescr = Lwt_unix.file_descr;

type syncFileDescr = Unix.file_descr;

type asyncFilePerm = Lwt_unix.file_perm;

type syncFilePerm = Unix.file_perm;

type accessPermission = Unix.access_permission = | R_OK | W_OK | X_OK | F_OK;

type asyncStats = Lwt_unix.stats;

type syncStats = Unix.stats;

type asyncDirHandle = Lwt_unix.dir_handle;

type syncDirHandle = Unix.dir_handle;

type asyncOpenFlag = Lwt_unix.open_flag;

type syncOpenFlag = Unix.open_flag;

let access: (~mode: accessPermission=?, string) => Node.t(unit);

let accessSync: (~mode: accessPermission=?, string) => unit;

[@ocaml.deprecated
  {|
    Fs.appendFile has yet to be implemented.
    Please open a Work-In-Progress pull request if you are interested in contributing.
    We will help answer questions and push you in the right direction.

    Repo URL: https://github.com/kennetpostigo/reason-node
  |}
]
let appendFile: (~file: 'a, ~data: 'b, ~options: 'c) => unit;

[@ocaml.deprecated
  {|
    Fs.appendFileSync has yet to be implemented.
    Please open a Work-In-Progress pull request if you are interested in contributing.
    We will help answer questions and push you in the right direction.

    Repo URL: https://github.com/kennetpostigo/reason-node
  |}
]
let appendFileSync: (~file: 'a, ~data: 'b, ~options: 'c) => unit;

let chmod: (~path: string, ~mode: asyncFilePerm) => Node.t(unit);

let chmodSync: (~path: string, ~mode: syncFilePerm) => unit;

let chown: (~path: string, ~uid: int, ~gid: int) => Node.t(unit);

let chownSync: (~path: string, ~uid: int, ~gid: int) => unit;

let close: asyncFileDescr => Node.t(unit);

let closeSync: syncFileDescr => unit;

[@ocaml.deprecated
  {|
    Fs.createReadStream has yet to be implemented.
    Please open a Work-In-Progress pull request if you are interested in contributing.
    We will help answer questions and push you in the right direction.

    Repo URL: https://github.com/kennetpostigo/reason-node
  |}
]
let createReadStream: (~path: string, ~options: 'a) => unit;

[@ocaml.deprecated
  {|
    Fs.createWriteStream has yet to be implemented.
    Please open a Work-In-Progress pull request if you are interested in contributing.
    We will help answer questions and push you in the right direction.

    Repo URL: https://github.com/kennetpostigo/reason-node
  |}
]
let createWriteStream: (~path: string, ~options: 'a) => unit;

let fchmod: (~fd: asyncFileDescr, ~mode: asyncFilePerm) => Node.t(unit);

let fchmodSync: (~fd: syncFileDescr, ~mode: syncFilePerm) => unit;

let fchown: (~fd: asyncFileDescr, ~uid: int, ~gid: int) => Node.t(unit);

let fchownSync: (~fd: syncFileDescr, ~uid: int, ~gid: int) => unit;

let fdatasync: asyncFileDescr => Node.t(unit);

[@ocaml.deprecated
  {|
    Fs.fdatasyncSync has yet to be implemented.
    Please open a Work-In-Progress pull request if you are interested in contributing.
    We will help answer questions and push you in the right direction.

    Repo URL: https://github.com/kennetpostigo/reason-node
  |}
]
let fdatasyncSync: syncFileDescr => unit;

let fstat: asyncFileDescr => Node.t(asyncStats);

let fstatSync: syncFileDescr => syncStats;

let fsync: asyncFileDescr => Node.t(unit);

[@ocaml.deprecated
  {|
    Fs.fsyncSync has yet to be implemented.
    Please open a Work-In-Progress pull request if you are interested in contributing.
    We will help answer questions and push you in the right direction.

    Repo URL: https://github.com/kennetpostigo/reason-node
  |}
]
let fsyncSync: syncFileDescr => unit;

let ftruncate: (~len: int=?, Lwt_unix.file_descr) => Node.t(unit);

let ftruncateSync: (~len: int=?, Unix.file_descr) => unit;

[@ocaml.deprecated
  {|
    Fs.futimes has yet to be implemented.
    Please open a Work-In-Progress pull request if you are interested in contributing.
    We will help answer questions and push you in the right direction.

    Repo URL: https://github.com/kennetpostigo/reason-node
  |}
]
let futimes: (~fd: asyncFileDescr, ~atime: 'a, ~mtime: 'b) => unit;

[@ocaml.deprecated
  {|
    Fs.futimesSync has yet to be implemented.
    Please open a Work-In-Progress pull request if you are interested in contributing.
    We will help answer questions and push you in the right direction.

    Repo URL: https://github.com/kennetpostigo/reason-node
  |}
]
let futimesSync: (~fd: syncFileDescr, ~atime: 'a, ~mtime: 'b) => unit;

[@ocaml.deprecated
  {|
    Fs.lchmod has yet to be implemented.
    Please open a Work-In-Progress pull request if you are interested in contributing.
    We will help answer questions and push you in the right direction.

    Repo URL: https://github.com/kennetpostigo/reason-node
  |}
]
let lchmod: (~path: string, ~mode: 'a) => unit;

[@ocaml.deprecated
  {|
    Fs.lchmodSync has yet to be implemented.
    Please open a Work-In-Progress pull request if you are interested in contributing.
    We will help answer questions and push you in the right direction.

    Repo URL: https://github.com/kennetpostigo/reason-node
  |}
]
let lchmodSync: (~path: string, ~mode: 'a) => unit;

[@ocaml.deprecated
  {|
    Fs.lchown has yet to be implemented.
    Please open a Work-In-Progress pull request if you are interested in contributing.
    We will help answer questions and push you in the right direction.

    Repo URL: https://github.com/kennetpostigo/reason-node
  |}
]
let lchown: (~path: string, ~uid: int, ~gid: int) => unit;

[@ocaml.deprecated
  {|
    Fs.lchownSync has yet to be implemented.
    Please open a Work-In-Progress pull request if you are interested in contributing.
    We will help answer questions and push you in the right direction.

    Repo URL: https://github.com/kennetpostigo/reason-node
  |}
]
let lchownSync: (~path: string, ~uid: int, ~gid: int) => unit;

let link: (~existingPath: string, ~newPath: string) => Node.t(unit);

let linkSync: (~existingPath: string, ~newPath: string) => unit;

let lstat: string => Node.t(asyncStats);

let lstatSync: string => syncStats;

let mkdir: (~mode: Lwt_unix.file_perm=?, string) => Node.t(unit);

let mkdirSync: (~mode: syncFilePerm=?, string) => unit;

[@ocaml.deprecated
  {|
    Fs.mkdTemp has yet to be implemented.
    Please open a Work-In-Progress pull request if you are interested in contributing.
    We will help answer questions and push you in the right direction.

    Repo URL: https://github.com/kennetpostigo/reason-node
  |}
]
let mkdtemp: (~prefix: 'a, ~options: 'b) => unit;

[@ocaml.deprecated
  {|
    Fs.mkdTempSync has yet to be implemented.
    Please open a Work-In-Progress pull request if you are interested in contributing.
    We will help answer questions and push you in the right direction.

    Repo URL: https://github.com/kennetpostigo/reason-node
  |}
]
let mkdtempSync: (~prefix: 'a, ~options: 'b) => unit;

let _open:
  (~flags: list(asyncOpenFlag), ~mode: asyncFilePerm=?, string) =>
  Node.t(asyncFileDescr);

let openSync:
  (~flags: list(syncOpenFlag), ~mode: syncFilePerm=?, string) => syncFileDescr;

let read:
  (~fd: asyncFileDescr, ~buffer: bytes, ~offset: int, ~length: int) =>
  Node.t(int);

let readSync:
  (~fd: syncFileDescr, ~buffer: bytes, ~offset: int, ~length: int) => int;

let readdir: asyncDirHandle => Node.t(string);

let readdirSync: syncDirHandle => string;

[@ocaml.deprecated
  {|
    Fs.readFile has yet to be implemented.
    Please open a Work-In-Progress pull request if you are interested in contributing.
    We will help answer questions and push you in the right direction.

    Repo URL: https://github.com/kennetpostigo/reason-node
  |}
]
let readFile: (~path: string, ~options: 'a) => unit;

[@ocaml.deprecated
  {|
    Fs.readFileSync has yet to be implemented.
    Please open a Work-In-Progress pull request if you are interested in contributing.
    We will help answer questions and push you in the right direction.

    Repo URL: https://github.com/kennetpostigo/reason-node
  |}
]
let readFileSync: (~path: 'a, ~options: 'b) => unit;

let readLink: string => Node.t(string);

let readLinkSync: string => string;

[@ocaml.deprecated
  {|
    Fs.realpath has yet to be implemented.
    Please open a Work-In-Progress pull request if you are interested in contributing.
    We will help answer questions and push you in the right direction.

    Repo URL: https://github.com/kennetpostigo/reason-node
  |}
]
let realpath: (~path: string, ~options: 'a) => unit;

[@ocaml.deprecated
  {|
    Fs.realpathSync has yet to be implemented.
    Please open a Work-In-Progress pull request if you are interested in contributing.
    We will help answer questions and push you in the right direction.

    Repo URL: https://github.com/kennetpostigo/reason-node
  |}
]
let realpathSync: (~path: 'a, ~options: 'b) => unit;

let rename: (~oldPath: string, ~newPath: string) => Node.t(unit);

let renameSync: (~oldPath: string, ~newPath: string) => unit;

let rmdir: string => Node.t(unit);

let rmdirSync: string => unit;

let stat: string => Node.t(asyncStats);

let statSync: string => syncStats;

let symlink: (~target: string, ~path: string) => Node.t(unit);

let symlinkSync: (~target: string, ~path: string) => unit;

let truncate: (~path: string, ~len: int) => Node.t(unit);

let truncateSync: (~path: string, ~len: int) => unit;

let unlink: string => Node.t(unit);

let unlinkSync: string => unit;

[@ocaml.deprecated
  {|
    Fs.unwatchFile has yet to be implemented.
    Please open a Work-In-Progress pull request if you are interested in contributing.
    We will help answer questions and push you in the right direction.

    Repo URL: https://github.com/kennetpostigo/reason-node
  |}
]
let unwatchFile: (~filename: 'a, ~listener: 'b) => unit;

let utimes: (~path: string, ~atime: float, ~mtime: float) => Node.t(unit);

let utimesSync: (~path: string, ~atime: float, ~mtime: float) => unit;

[@ocaml.deprecated
  {|
    Fs.watch has yet to be implemented.
    Please open a Work-In-Progress pull request if you are interested in contributing.
    We will help answer questions and push you in the right direction.

    Repo URL: https://github.com/kennetpostigo/reason-node
  |}
]
let watch: (~filename: 'a, ~options: 'b, ~listener: 'c) => unit;

[@ocaml.deprecated
  {|
    Fs.watchFile has yet to be implemented.
    Please open a Work-In-Progress pull request if you are interested in contributing.
    We will help answer questions and push you in the right direction.

    Repo URL: https://github.com/kennetpostigo/reason-node
  |}
]
let watchFile: (~filename: 'a, ~options: 'b, ~listener: 'c) => unit;

let write:
  (~fd: asyncFileDescr, ~buffer: bytes, ~offset: int, ~length: int) =>
  Node.t(int);

let writeSync:
  (~fd: syncFileDescr, ~buffer: bytes, ~offset: int, ~length: int) => int;

let writeString:
  (~fd: asyncFileDescr, ~string: string, ~offset: int, ~length: int) =>
  Node.t(int);

let writeStringSync:
  (~fd: syncFileDescr, ~string: string, ~offset: int, ~length: int) => int;

[@ocaml.deprecated
  {|
    Fs.writeFile has yet to be implemented.
    Please open a Work-In-Progress pull request if you are interested in contributing.
    We will help answer questions and push you in the right direction.

    Repo URL: https://github.com/kennetpostigo/reason-node
  |}
]
let writeFile: (~file: 'a, ~data: 'b, ~options: 'c) => unit;

[@ocaml.deprecated
  {|
    Fs.writeFileSync has yet to be implemented.
    Please open a Work-In-Progress pull request if you are interested in contributing.
    We will help answer questions and push you in the right direction.

    Repo URL: https://github.com/kennetpostigo/reason-node
  |}
]
let writeFileSync: (~file: 'a, ~data: 'b, ~options: 'c) => unit;
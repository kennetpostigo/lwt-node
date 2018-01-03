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

let access = (~mode=F_OK, path) => Lwt_unix.access(path, [mode]);

let accessSync = (~mode=F_OK, path) => Unix.access(path, [mode]);

let appendFile = (~file, ~data, ~options) => ();

let appendFileSync = (~file, ~data, ~options) => ();

let chmod = (~path, ~mode) => Lwt_unix.chmod(path, mode);

let chmodSync = (~path, ~mode) => Unix.chmod(path, mode);

let chown = (~path, ~uid, ~gid) => Lwt_unix.chown(path, uid, gid);

let chownSync = (~path, ~uid, ~gid) => Unix.chown(path, uid, gid);

let close = fd => Lwt_unix.close(fd);

let closeSync = fd => Unix.close(fd);

let createReadStream = (~path, ~options) => ();

let createWriteStream = (~path, ~options) => ();

let fchmod = (~fd, ~mode) => Lwt_unix.fchmod(fd, mode);

let fchmodSync = (~fd, ~mode) => Unix.fchmod(fd, mode);

let fchown = (~fd, ~uid, ~gid) => Lwt_unix.fchown(fd, uid, gid);

let fchownSync = (~fd, ~uid, ~gid) => Unix.fchown(fd, uid, gid);

let fdatasync = fd => Lwt_unix.fdatasync(fd);

let fdatasyncSync = fd => ();

let fstat = fd => Lwt_unix.fstat(fd);

let fstatSync = fd => Unix.fstat(fd);

let fsync = fd => Lwt_unix.fsync(fd);

let fsyncSync = fd => ();

let ftruncate = (~len=0, fd) => Lwt_unix.ftruncate(fd, len);

let ftruncateSync = (~len=0, fd) => Unix.ftruncate(fd, len);

let futimes = (~fd, ~atime, ~mtime) => ();

let futimesSync = (~fd, ~atime, ~mtime) => ();

let lchmod = (~path, ~mode) => ();

let lchmodSync = (~path, ~mode) => ();

let lchown = (~path, ~uid, ~gid) => ();

let lchownSync = (~path, ~uid, ~gid) => ();

let link = (~existingPath, ~newPath) => Lwt_unix.link(existingPath, newPath);

let linkSync = (~existingPath, ~newPath) => Unix.link(existingPath, newPath);

let lstat = path => Lwt_unix.lstat(path);

let lstatSync = path => Unix.lstat(path);

let mkdir = (~mode=511, path) => Lwt_unix.mkdir(path, mode);

let mkdirSync = (~mode=511, path) => Unix.mkdir(path, mode);

let mkdtemp = (~prefix, ~options) => ();

let mkdtempSync = (~prefix, ~options) => ();

let _open = (~flags, ~mode=438, path) => Lwt_unix.openfile(path, flags, mode);

let openSync = (~flags, ~mode=438, path) => Unix.openfile(path, flags, mode);

let read = (~fd, ~buffer, ~offset, ~length) =>
  Lwt_unix.read(fd, buffer, offset, length);

let readSync = (~fd, ~buffer, ~offset, ~length) =>
  Unix.read(fd, buffer, offset, length);

let readdir = path => Lwt_unix.readdir(path);

let readdirSync = path => Unix.readdir(path);

let readFile = (~path, ~options) => ();

let readFileSync = (~path, ~options) => ();

let readLink = path => Lwt_unix.readlink(path);

let readLinkSync = path => Unix.readlink(path);

let realpath = (~path, ~options) => ();

let realpathSync = (~path, ~options) => ();

let rename = (~oldPath, ~newPath) => Lwt_unix.rename(oldPath, newPath);

let renameSync = (~oldPath, ~newPath) => Unix.rename(oldPath, newPath);

let rmdir = path => Lwt_unix.rmdir(path);

let rmdirSync = path => Unix.rmdir(path);

let stat = path => Lwt_unix.stat(path);

let statSync = path => Unix.stat(path);

let symlink = (~target, ~path) => Lwt_unix.symlink(target, path);

let symlinkSync = (~target, ~path) => Unix.symlink(target, path);

let truncate = (~len=0, path) => Lwt_unix.truncate(path, len);

let truncateSync = (~len=0, path) => Unix.truncate(path, len);

let unlink = path => Lwt_unix.unlink(path);

let unlinkSync = path => Unix.unlink(path);

let unwatchFile = (~filename, ~listener) => ();

let utimes = (~path, ~atime, ~mtime) => Lwt_unix.utimes(path, atime, mtime);

let utimesSync = (~path, ~atime, ~mtime) => Unix.utimes(path, atime, mtime);

let watch = (~filename, ~options, ~listener) => ();

let watchFile = (~filename, ~options, ~listener) => ();

let write = (~fd, ~buffer, ~offset, ~length) =>
  Lwt_unix.write(fd, buffer, offset, length);

let writeSync = (~fd, ~buffer, ~offset, ~length) =>
  Unix.write(fd, buffer, offset, length);

let writeString = (~fd, ~string, ~offset, ~length) =>
  Lwt_unix.write_string(fd, string, offset, length);

let writeStringSync = (~fd, ~string, ~offset, ~length) =>
  Unix.write_substring(fd, string, offset, length);

let writeFile = (~file, ~data, ~options) => ();

let writeFileSync = (~file, ~data, ~options) => ();
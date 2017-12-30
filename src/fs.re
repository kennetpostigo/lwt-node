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

let access = (~path, ~mode, ~callback) =>
  Lwt.on_any(
    Lwt_unix.access(path, [mode]),
    (_) => {
      callback(Ok);
      ();
    },
    fun
    | Unix.Unix_error(e, _, _) => {
        callback(Err(e));
        ();
      }
    | exn => ()
  );

let accessSync = (~path, ~mode) => Unix.access(path, [mode]);

let appendFile = (~file, ~data, ~options, ~callback) => ();

let appendFileSync = (~file, ~data, ~options) => ();

let chmod = (~path, ~mode, ~callback) =>
  Lwt.on_any(
    Lwt_unix.chmod(path, mode),
    (_) => {
      callback(Ok);
      ();
    },
    fun
    | Unix.Unix_error(e, _, _) => {
        callback(Err(e));
        ();
      }
    | exn => ()
  );

let chmodSync = (~path, ~mode) => Unix.chmod(path, mode);

let chown = (~path, ~uid, ~gid, ~callback) =>
  Lwt.on_any(
    Lwt_unix.chown(path, uid, gid),
    (_) => {
      callback(Ok);
      ();
    },
    fun
    | Unix.Unix_error(e, _, _) => {
        callback(Err(e));
        ();
      }
    | exn => ()
  );

let chownSync = (~path, ~uid, ~gid) => Unix.chown(path, uid, gid);

let close = (~fd, ~callback) =>
  Lwt.on_any(
    Lwt_unix.close(fd),
    (_) => {
      callback(Ok);
      ();
    },
    fun
    | Unix.Unix_error(e, _, _) => {
        callback(Err(e));
        ();
      }
    | exn => ()
  );

let closeSync = (~fd) => Unix.close(fd);

let createReadStream = (~path, ~options) => ();

let createWriteStream = (~path, ~options) => ();

let fchmod = (~fd, ~mode, ~callback) =>
  Lwt.on_any(
    Lwt_unix.fchmod(fd, mode),
    (_) => {
      callback(Ok);
      ();
    },
    fun
    | Unix.Unix_error(e, _, _) => {
        callback(Err(e));
        ();
      }
    | exn => ()
  );

let fchmodSync = (~fd, ~mode) => Unix.fchmod(fd, mode);

let fchown = (~fd, ~uid, ~gid, ~callback) =>
  Lwt.on_any(
    Lwt_unix.fchown(fd, uid, gid),
    (_) => {
      callback(Ok);
      ();
    },
    fun
    | Unix.Unix_error(e, _, _) => {
        callback(Err(e));
        ();
      }
    | exn => ()
  );

let fchownSync = (~fd, ~uid, ~gid) => Unix.fchown(fd, uid, gid);

let fdatasync = (~fd, ~callback) =>
  Lwt.on_any(
    Lwt_unix.fdatasync(fd),
    (_) => {
      callback(Ok);
      ();
    },
    fun
    | Unix.Unix_error(e, _, _) => {
        callback(Err(e));
        ();
      }
    | exn => ()
  );

let fdatasyncSync = (~fd) => ();

let fstat = (~fd, ~callback) =>
  Lwt.on_any(
    Lwt_unix.fstat(fd),
    stats => {
      callback(Ok, Some(stats));
      ();
    },
    fun
    | Unix.Unix_error(e, _, _) => {
        callback(Err(e), None);
        ();
      }
    | exn => ()
  );

let fstatSync = (~fd) => Unix.fstat(fd);

let fsync = (~fd, ~callback) =>
  Lwt.on_any(
    Lwt_unix.fsync(fd),
    (_) => {
      callback(Ok);
      ();
    },
    fun
    | Unix.Unix_error(error_code, _, _) => {
        callback(Err(error_code));
        ();
      }
    | exn => ()
  );

let fsyncSync = (~fd) => ();

let ftruncate = (~fd, ~len, ~callback) =>
  Lwt.on_any(
    Lwt_unix.ftruncate(fd, len),
    (_) => {
      callback(Ok);
      ();
    },
    fun
    | Unix.Unix_error(error_code, _, _) => {
        callback(Err(error_code));
        ();
      }
    | exn => ()
  );

let ftruncateSync = (~fd, ~len) => Unix.ftruncate(fd, len);

let futimes = (~fd, ~atime, ~mtime, ~callback) => ();

let futimesSync = (~fd, ~atime, ~mtime) => ();

let lchmod = (~path, ~mode, ~callback) => ();

let lchmodSync = (~path, ~mode) => ();

let lchown = (~path, ~uid, ~gid, ~callback) => ();

let lchownSync = (~path, ~uid, ~gid) => ();

let link = (~existingPath, ~newPath, ~callback) =>
  Lwt.on_any(
    Lwt_unix.link(existingPath, newPath),
    (_) => {
      callback(Ok);
      ();
    },
    fun
    | Unix.Unix_error(error_code, _, _) => {
        callback(Err(error_code));
        ();
      }
    | exn => ()
  );

let linkSync = (~existingPath, ~newPath) => Unix.link(existingPath, newPath);

let lstat = (~path, ~callback) =>
  Lwt.on_any(
    Lwt_unix.lstat(path),
    stats => {
      callback(Ok, Some(stats));
      ();
    },
    fun
    | Unix.Unix_error(e, _, _) => {
        callback(Err(e), None);
        ();
      }
    | exn => ()
  );

let lstatSync = (~path) => Unix.lstat(path);

let mkdir = (~path, ~mode, ~callback) =>
  Lwt.on_any(
    Lwt_unix.mkdir(path, mode),
    (_) => {
      callback(Ok);
      ();
    },
    fun
    | Unix.Unix_error(e, _, _) => {
        callback(Err(e));
        ();
      }
    | exn => ()
  );

let mkdirSync = (~path, ~mode) => Unix.mkdir(path, mode);

let mkdtemp = (~prefix, ~options, ~callback) => ();

let mkdtempSync = (~prefix, ~options) => ();

let _open = (~path, ~flags, ~mode, ~callback) =>
  Lwt.on_any(
    Lwt_unix.openfile(path, flags, mode),
    fd => {
      callback(Ok, Some(fd));
      ();
    },
    fun
    | Unix.Unix_error(e, _, _) => {
        callback(Err(e), None);
        ();
      }
    | exn => ()
  );

let openSync = (~path, ~flags, ~mode) => Unix.openfile(path, flags, mode);

let read = (~fd, ~buffer, ~offset, ~length, ~callback) =>
  Lwt.on_any(
    Lwt_unix.read(fd, buffer, offset, length),
    buff => {
      callback(Ok, Some(buff));
      ();
    },
    fun
    | Unix.Unix_error(e, _, _) => {
        callback(Err(e), None);
        ();
      }
    | exn => ()
  );

let readSync = (~fd, ~buffer, ~offset, ~length) =>
  Unix.read(fd, buffer, offset, length);

let readdir = (~path, ~callback) =>
  Lwt.on_any(
    Lwt_unix.readdir(path),
    nextEntry => {
      callback(Ok, Some(nextEntry));
      ();
    },
    fun
    | Unix.Unix_error(error_code, _, _) => {
        callback(Err(error_code), None);
        ();
      }
    | exn => ()
  );

let readdirSync = (~path) => Unix.readdir(path);

let readFile = (~path, ~options, ~callback) => ();

let readFileSync = (~path, ~options) => ();

let readLink = (~path, ~callback) =>
  Lwt.on_any(
    Lwt_unix.readlink(path),
    contents => {
      callback(Ok, Some(contents));
      ();
    },
    fun
    | Unix.Unix_error(error_code, _, _) => {
        callback(Err(error_code), None);
        ();
      }
    | exn => ()
  );

let readLinkSync = (~path) => Unix.readlink(path);

let realpath = (~path, ~options, ~callback) => ();

let realpathSync = (~path, ~options) => ();

let rename = (~oldPath, ~newPath, ~callback) =>
  Lwt.on_any(
    Lwt_unix.rename(oldPath, newPath),
    (_) => {
      callback(Ok);
      ();
    },
    fun
    | Unix.Unix_error(error_code, _, _) => {
        callback(Err(error_code));
        ();
      }
    | exn => ()
  );

let renameSync = (~oldPath, ~newPath) => Unix.rename(oldPath, newPath);

let rmdir = (~path, ~callback) =>
  Lwt.on_any(
    Lwt_unix.rmdir(path),
    (_) => {
      callback(Ok);
      ();
    },
    fun
    | Unix.Unix_error(error_code, _, _) => {
        callback(Err(error_code));
        ();
      }
    | exn => ()
  );

let rmdirSync = (~path) => Unix.rmdir(path);

let stat = (~path, ~callback) =>
  Lwt.on_any(
    Lwt_unix.stat(path),
    stats => {
      callback(Ok, Some(stats));
      ();
    },
    fun
    | Unix.Unix_error(error_code, _, _) => {
        callback(Err(error_code), None);
        ();
      }
    | exn => ()
  );

let statSync = (~path) => Unix.stat(path);

let symlink = (~target, ~path, ~callback) =>
  Lwt.on_any(
    Lwt_unix.symlink(target, path),
    (_) => {
      callback(Ok);
      ();
    },
    fun
    | Unix.Unix_error(error_code, _, _) => {
        callback(Err(error_code));
        ();
      }
    | exn => ()
  );

let symlinkSync = (~target, ~path) => Unix.symlink(target, path);

let truncate = (~path, ~len, ~callback) =>
  Lwt.on_any(
    Lwt_unix.truncate(path, len),
    (_) => {
      callback(Ok);
      ();
    },
    fun
    | Unix.Unix_error(error_code, _, _) => {
        callback(Err(error_code));
        ();
      }
    | exn => ()
  );

let truncateSync = (~path, ~len) => Unix.truncate(path, len);

let unlink = (~path, ~callback) =>
  Lwt.on_any(
    Lwt_unix.unlink(path),
    (_) => {
      callback(Ok);
      ();
    },
    fun
    | Unix.Unix_error(error_code, _, _) => {
        callback(Err(error_code));
        ();
      }
    | exn => ()
  );

let unlinkSync = (~path) => Unix.unlink(path);

let unwatchFile = (~filename, ~listener) => ();

let utimes = (~path, ~atime, ~mtime, ~callback) =>
  Lwt.on_any(
    Lwt_unix.utimes(path, atime, mtime),
    (_) => {
      callback(Ok);
      ();
    },
    fun
    | Unix.Unix_error(error_code, _, _) => {
        callback(Err(error_code));
        ();
      }
    | exn => ()
  );

let utimesSync = (~path, ~atime, ~mtime) => Unix.utimes(path, atime, mtime);

let watch = (~filename, ~options, ~listener) => ();

let watchFile = (~filename, ~options, ~listener) => ();

let write = (~fd, ~buffer, ~offset, ~length, ~callback) =>
  Lwt.on_any(
    Lwt_unix.write(fd, buffer, offset, length),
    buff => {
      callback(Ok, Some(buff));
      ();
    },
    fun
    | Unix.Unix_error(error_code, _, _) => {
        callback(Err(error_code), None);
        ();
      }
    | exn => ()
  );

let writeSync = (~fd, ~buffer, ~offset, ~length) =>
  Unix.write(fd, buffer, offset, length);

let writeString = (~fd, ~string, ~offset, ~length, ~callback) =>
  Lwt.on_any(
    Lwt_unix.write_string(fd, string, offset, length),
    str => {
      callback(Ok, Some(str));
      ();
    },
    fun
    | Unix.Unix_error(error_code, _, _) => {
        callback(Err(error_code), None);
        ();
      }
    | exn => ()
  );

let writeStringSync = (~fd, ~string, ~offset, ~length) =>
  Unix.write_substring(fd, string, offset, length);

let writeFile = (~file, ~data, ~options, ~callback) => ();

let writeFileSync = (~file, ~data, ~options) => ();
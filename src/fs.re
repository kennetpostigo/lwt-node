type fsErr =
| Ok
| Err Unix.error;

let access path::path mode::mode callback::callback => {
  Lwt.on_any
    (Lwt_unix.access path [mode])
    (fun _ => {
      callback Ok;
      ()
    })
    (fun
      | Unix.Unix_error e _ _ => {
          (callback (Err e));
         ();
        }
      | exn => ()
    );
};

let accessSync path::path mode::mode => Unix.access path [mode];

let appendFile file::file data::data options::options callback::callback => ();

let appendFileSync file::file data::data options::options => ();

let chmod path::path mode::mode callback::callback => {
  Lwt.on_any
    (Lwt_unix.chmod path mode)
    (fun _ => {
      callback Ok;
     ();
    })
    (fun
      | Unix.Unix_error e _ _ => {
          callback (Err e);
         ();
        }
      | exn => ()
    );
};

let chmodSync path::path mode::mode => Unix.chmod path mode;

let chown path::path uid::uid gid::gid callback::callback => {
  Lwt.on_any
    (Lwt_unix.chown path uid gid)
    (fun _ => {
      callback Ok;
     ();
    })
    (fun
      | Unix.Unix_error e _ _ => {
          (callback (Err e));
         ();
        }
      | exn => ()
    );
};

let chownSync path::path uid::uid gid::gid => Unix.chown path uid gid;

let close fd::fd callback::callback => {
  Lwt.on_any
    (Lwt_unix.close fd)
    (fun _ => {
      callback Ok;
     ();
    })
    (fun
      | Unix.Unix_error e _ _ => {
          callback (Err e);
         ();
        }
      | exn => ()
    );
};

let closeSync fd::fd => Unix.close fd;

let createReadStream path::path options::options => ();

let createWriteStream path::path options::options => ();

let fchmod fd::fd mode::mode callback::callback => {
  Lwt.on_any
    (Lwt_unix.fchmod fd mode)
    (fun _ => {
      callback Ok;
     ();
    })
    (fun
      | Unix.Unix_error e _ _ => {
          callback (Err e);
         ();
        }
      | exn => ()
    );
};

let fchmodSync fd::fd mode::mode => Unix.fchmod fd mode;

let fchown fd::fd uid::uid gid::gid callback::callback => {
  Lwt.on_any
    (Lwt_unix.fchown fd uid gid)
    (fun _ => {
      callback Ok;
     ();
    })
    (fun
      | Unix.Unix_error e _ _ => {
          callback (Err e);
         ();
        }
      | exn => ()
    );
};

let fchownSync fd::fd uid::uid gid::gid => Unix.fchown fd uid gid;

let fdatasync fd::fd callback::callback => {
  Lwt.on_any
    (Lwt_unix.fdatasync fd)
    (fun _ => {
      callback Ok;
     ();
    })
    (fun
      | Unix.Unix_error e _ _ => {
          callback (Err e);
         ();
        }
      | exn => ()
    );
};

let fdatasyncSync fd::fd => ();

let fstat fd::fd callback::callback => {
  Lwt.on_any
    (Lwt_unix.fstat fd)
    (fun stats => {
      callback Ok (Some stats);
      ();
    })
    (fun
      | Unix.Unix_error e _ _ => {
          callback (Err e) None;
          ();
        }
      | exn => ()
    );
};

let fstatSync fd::fd => Unix.fstat fd;

let fsync fd::fd callback::callback => {
  Lwt.on_any
    (Lwt_unix.fsync fd)
    (fun _ => {
      callback Ok;
      ();
    })
    (fun
      | Unix.Unix_error error_code _ _ => {
          callback (Err error_code);
          ();
        }
      | exn => ()
    );
};

let fsyncSync fd::fd => ();

let ftruncate fd::fd len::len callback::callback => {
  Lwt.on_any
    (Lwt_unix.ftruncate fd len)
    (fun _ => {
      callback Ok;
      ();
    })
    (fun
      | Unix.Unix_error error_code _ _ => {
          callback (Err error_code);
          ();
        }
      | exn => ()
    );
};

let ftruncateSync fd::fd len::len => Unix.ftruncate fd len;

let futimes fd::fd atime::atime mtime::mtime callback::callback => ();

let futimesSync fd::fd atime::atime mtime::mtime => ();

let lchmod path::path mode::mode callback::callback => ();

let lchmodSync path::path mode::mode => ();

let lchown path::path uid::uid gid::gid callback::callback => ();

let lchownSync path::path uid::uid gid::gid => ();

let link existingPath::existingPath newPath::newPath callback::callback => {
  Lwt.on_any
    (Lwt_unix.link existingPath newPath)
    (fun _ => {
      callback Ok;
      ();
    })
    (fun
      | Unix.Unix_error error_code _ _ => {
          callback (Err error_code);
          ();
        }
      | exn => ()
    );
};

let linkSync existingPath::existingPath newPath::newPath => Unix.link existingPath newPath;

let lstat path::path callback::callback => {
  Lwt.on_any
    (Lwt_unix.lstat path)
    (fun stats => {
      callback Ok (Some stats);
      ();
    })
    (fun
      | Unix.Unix_error e _ _ => {
          callback (Err e) None;
          ();
        }
      | exn => ()
    );
};

let lstatSync path::path => Unix.lstat path;

let mkdir path::path mode::mode callback::callback => {
  Lwt.on_any
    (Lwt_unix.mkdir path mode)
    (fun _ => {
      callback Ok;
     ();
    })
    (fun
      | Unix.Unix_error e _ _ => {
          callback (Err e);
          ();
        }
      | exn => ()
    );
};

let mkdirSync path::path mode::mode => Unix.mkdir path mode;

let mkdtemp prefix::prefix options::options callback::callback => ();

let mkdtempSync prefix::prefix options::options => ();

let _open path::path flags::flags mode::mode callback::callback => {
  Lwt.on_any
    (Lwt_unix.openfile path flags mode)
    (fun fd => {
      callback Ok (Some fd);
      ();
    })
    (fun
      | Unix.Unix_error e _ _ => {
          callback (Err e) None;
          ();
        }
      | exn => ()
    );
};

let openSync path::path flags::flags mode::mode => Unix.openfile path flags mode;

let read fd::fd buffer::buffer offset::offset length::length callback::callback => {
  Lwt.on_any
    (Lwt_unix.read fd buffer offset length)
    (fun buff => {
      callback Ok (Some buff);
      ();
    })
    (fun
      | Unix.Unix_error e _ _ => {
          callback (Err e) None;
          ();
        }
      | exn => ()
    );
};

let readSync fd::fd buffer::buffer offset::offset length::length => Unix.read fd buffer offset length;

let readdir path::path callback::callback => {
  Lwt.on_any
    (Lwt_unix.readdir path)
    (fun nextEntry => {
      callback Ok (Some nextEntry);
      ();
    })
    (fun
      | Unix.Unix_error error_code _ _ => {
          callback (Err error_code) None;
          ();
        }
      | exn => ()
    );
};

let readdirSync path::path => Unix.readdir path;

let readFile path::path options::options callback::callback => ();

let readFileSync path::path options::options => ();

let readLink path::path callback::callback => {
  Lwt.on_any
    (Lwt_unix.readlink path)
    (fun contents => {
      callback Ok (Some contents);
      ();
    })
    (fun
      | Unix.Unix_error error_code _ _ => {
          callback (Err error_code) None;
          ();
        }
      | exn => ()
    );
};

let readLinkSync path::path => Unix.readlink path;

let realpath path::path options::options callback::callback => ();

let realpathSync path::path options::options => ();

let rename oldPath::oldPath newPath::newPath callback::callback => {
  Lwt.on_any
    (Lwt_unix.rename oldPath newPath)
    (fun _ => {
      callback Ok;
      ();
    })
    (fun
      | Unix.Unix_error error_code _ _ => {
          callback (Err error_code);
          ();
        }
      | exn => ()
    );
};

let renameSync oldPath::oldPath newPath::newPath => Unix.rename oldPath newPath;

let rmdir path::path callback::callback => {
  Lwt.on_any
    (Lwt_unix.rmdir path)
    (fun _ => {
      callback Ok;
      ();
    })
    (fun
      | Unix.Unix_error error_code _ _ => {
          callback (Err error_code);
          ();
        }
      | exn => ()
    );
};

let rmdirSync path::path => Unix.rmdir path;

let stat path::path callback::callback => {
  Lwt.on_any
    (Lwt_unix.stat path)
    (fun stats => {
      callback Ok (Some stats);
      ();
    })
    (fun
      | Unix.Unix_error error_code _ _ => {
          callback (Err error_code) None;
          ();
        }
      | exn => ()
    );
};

let statSync path::path => Unix.stat path;

let symlink target::target path::path callback::callback => {
  Lwt.on_any
    (Lwt_unix.symlink target path)
    (fun _ => {
      callback Ok;
      ();
    })
    (fun
      | Unix.Unix_error error_code _ _ => {
          callback (Err error_code);
          ();
        }
      | exn => ()
    );
};

let symlinkSync target::target path::path => Unix.symlink target path;

let truncate path::path len::len callback::callback => {
  Lwt.on_any
    (Lwt_unix.truncate path len)
    (fun _ => {
      callback Ok;
      ();
    })
    (fun
      | Unix.Unix_error error_code _ _ => {
          callback (Err error_code);
          ();
        }
      | exn => ()
    );
};

let truncateSync path::path len::len => Unix.truncate path len;

let unlink path::path callback::callback => {
  Lwt.on_any
    (Lwt_unix.unlink path)
    (fun _ => {
      callback Ok;
      ();
    })
    (fun
      | Unix.Unix_error error_code _ _ => {
          callback (Err error_code);
          ();
        }
      | exn => ()
    );
};

let unlinkSync path::path => Unix.unlink path;

let unwatchFile filename::filename listener::listener => ();

let utimes path::path atime::atime mtime::mtime callback::callback => {
  Lwt.on_any
    (Lwt_unix.utimes path atime mtime)
    (fun _ => {
      callback Ok;
     ();
    })
    (fun
      | Unix.Unix_error error_code _ _ => {
          callback (Err error_code);
         ();
        }
      | exn => ()
    );
};

let utimesSync path::path atime::atime mtime::mtime => Unix.utimes path atime mtime;

let watch filename::filename options::options listener::listener => ();

let watchFile filename::filename options::options listener::listener => ();

let write fd::fd buffer::buffer offset::offset length::length callback::callback => {
  Lwt.on_any
    (Lwt_unix.write fd buffer offset length)
    (fun buff => {
      callback Ok (Some buff);
     ();
    })
    (fun
      | Unix.Unix_error error_code _ _ => {
          callback (Err error_code) None;
         ();
        }
      | exn => ()
    );
};

let writeSync fd::fd buffer::buffer offset::offset length::length => Unix.write fd buffer offset length;


let writeString fd::fd string::string offset::offset length::length callback::callback => {
  Lwt.on_any
    (Lwt_unix.write_string fd string offset length)
    (fun str => {
      callback Ok (Some str);
     ();
    })
    (fun
      | Unix.Unix_error error_code _ _ => {
          callback (Err error_code) None;
         ();
        }
      | exn => ()
    );
};

let writeStringSync fd::fd string::string offset::offset length::length => Unix.write_substring fd string offset length;

let writeFile file::file data::data options::options callback::callback => ();

let writeFileSync file::file data::data options::options => ();

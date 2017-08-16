type err =
  | Ok
  | Err Unix.error
  ;

let access path mode callback => {
  Lwt.try_bind
    (fun () => Lwt_unix.access path [mode])
    (fun () => callback Ok)
    (fun
      | Unix.Unix_error error_code _ _ => {
          callback (Err error_code);
          Lwt.return ();
        }
      | exn => Lwt.fail exn
    );
};

let accessSync path mode => Unix.access path [mode];

let appendFile file data options callback => {
  /* let dataLength = String.length data;
  Lwt_unix.write_string file data  */
};

let appendFileSync file data options => {

};

let chmod path mode callback => {
  Lwt.try_bind
    (fun () => Lwt_unix.chmod path mode)
    (fun () => callback Ok)
    (fun
      | Unix.Unix_error error_code _ _ => {
          callback (Err error_code);
          Lwt.return ();
        }
      | exn => Lwt.fail exn
    );
};

let chmodSync path mode => Unix.chmod path mode;

let chown path uid gid callback => {
  Lwt.try_bind
    (fun () => Lwt_unix.chown path uid gid)
    (fun () => callback Ok)
    (fun
      | Unix.Unix_error error_code _ _ => {
          callback (Err error_code);
          Lwt.return ();
        }
      | exn => Lwt.fail exn
    );
};

let chownSync path uid gid => Unix.chown path uid gid;

let close fd callback => ();

let closeSync fd => ();

let createReadStream path options => ();

let createWriteStream path options => ();

let fchmod fd mode callback => {
  Lwt.try_bind
    (fun () => Lwt_unix.fchmod fd mode)
    (fun () => callback Ok)
    (fun
      | Unix.Unix_error error_code _ _ => {
          callback (Err error_code);
          Lwt.return ();
        }
      | exn => Lwt.fail exn
    );
};

let fchmodSync fd mode => Unix.fchmod fd mode;

let fchown fd uid gid callback => {
  Lwt.try_bind
    (fun () => Lwt_unix.fchown fd uid gid)
    (fun () => callback Ok)
    (fun
      | Unix.Unix_error error_code _ _ => {
          callback (Err error_code);
          Lwt.return ();
        }
      | exn => Lwt.fail exn
    );
};

let fchownSync fd uid gid => Unix.fchown fd uid gid;

let fdatasync fd callback => ();

let fdatasyncSync fd => ();

let fstat fd callback => ();

let fstatSync fd => ();

let fsync fd callback => ();

let fsyncSync fd => ();

let ftruncate fd len callback => {
  Lwt.try_bind
    (fun () => Lwt_unix.ftruncate fd len)
    (fun () => callback Ok)
    (fun
      | Unix.Unix_error error_code _ _ => {
          callback (Err error_code);
          Lwt.return ();
        }
      | exn => Lwt.fail exn
    );
};

let ftruncateSync fd len => Unix.ftruncate fd len;

let futimes fd atime mtime callack => {
  /* Lwt.try_bind
    (fun () => Lwt_unix.utimes fd atim mtime)
    (fun () => callback Ok)
    (fun
      | Unix.Unix_error error_code _ _ => {
          callback (Err error_code);
          Lwt.return ();
        }
      | exn => Lwt.fail exn
    ); */
};

let futimesSync fd atime mtime => /*Unix.utimes fd atime mtime*/ ();

let lchmod path mode callback => ();

let lchmodSync path mode => ();

let lchown path uid gid callack => ();

let lchownSync path uid gid => ();

let link existingPath newPath callback => {
  Lwt.try_bind
    (fun () => Lwt_unix.link existingPath newPath)
    (fun () => callback Ok)
    (fun
      | Unix.Unix_error error_code _ _ => {
          callback (Err error_code);
          Lwt.return ();
        }
      | exn => Lwt.fail exn
    );
};

let linkSync existingPath newPath => Unix.link existingPath newPath;

let lstat path callback => {
  Lwt.try_bind
    (fun () => Lwt_unix.lstat path)
    (fun stats => callback Ok stats)
    (fun
      | Unix.Unix_error error_code _ _ => {
          callback (Err error_code);
          Lwt.return ();
        }
      | exn => Lwt.fail exn
    );
};

let lstatSync path => Unix.lstat path;

let mkdir path mode callback => {
  Lwt.try_bind
    (fun () => Lwt_unix.mkdir path mode)
    (fun () => callback Ok)
    (fun
      | Unix.Unix_error error_code _ _ => {
          callback (Err error_code);
          Lwt.return ();
        }
      | exn => Lwt.fail exn
    );
};

let mkdirSync path mode => Unix.mkdir path mode;

let mkdtemp prefix options callback => ();

let mkdtempSync prefix options => ();

let _open path flags mode callback => {
  Lwt.try_bind
    (fun () => Lwt_unix.openfile path flags mode)
    (fun fd => (callback Ok fd))
    (fun
      | Unix.Unix_error error_code _ _ => {
          callback (Err error_code);
          Lwt.return ();
        }
      | exn => Lwt.fail exn
    );
};

let openSync path flags mode => Unix.openfile path flags mode;

let read fd buffer offset length position callback => ();

let readSync fd buffer offset length position => ();

let readdir path options callback => ();

let readdirSync path options => ();

let readFile path options callback => ();

let readFileSync path options => ();

let readLink path options callback => ();

let readLinkSync path options => ();

let realpath path options callback => ();

let realpathSynch path options => ();

let rename oldPath newPath callback => ();

let renameSync oldPath newPath => ();

let rmdir path callback => ();

let rmdirSync path => ();

let stat path callback => ();

let statSync path => ();

let symlink target path _type callback => ();

let symlinkSync target path _type => ();

let truncate path len callback => ();

let truncateSync path len => ();

let unlink path callback => ();

let unlinkSync path => ();

let unwatchFile filename listener => ();

let utimes path atime mtime callback => ();

let utimesSync path atime mtime => ();

let watch filename options listener => ();

let watchFile filename options listener => ();

let write fd string position encoding callback => ();

let writeFile file data options callbback => ();

let writeFileSync file data options => ();

let writeSync fd string position encoding => ();

let access path mode callback => {
  Lwt.catch
    (fun () => Lwt_unix.access path [mode])
    (fun
      | Unix.Unix_error error_code _ _ => {
          callback error_code;
          Lwt.return ()
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
  Lwt.catch
    (fun () => Lwt_unix.chmod path mode)
    (fun
      | Unix.Unix_error error_code _ _ => {
          callback error_code;
          Lwt.return ()
        }
      | exn => Lwt.fail exn
    );
};

let chmodSync path mode => Unix.chmod path mode;

let chown path uid gid callback => {
  Lwt.catch
    (fun () => Lwt_unix.chown path uid gid)
    (fun
      | Unix.Unix_error error_code _ _ => {
          callback error_code;
          Lwt.return ()
        }
      | exn => Lwt.fail exn
    );
};

let chownSync path uid gid => Unix.chown path uid gid;

let createReadStream path options => ();

let createWriteStream path options => ();

let exists path callback => ();

let existsSync path => ();

let fchmod fd mode callback => ();

let fchmodSync fd mode => ();

let fchown fd uid gid callback => ();

let fchownSync fd uid gid => ();

let fdatasync fd callback => ();

let fdatasyncSync fd => ();

let fstat fd callback => ();

let fstatSync fd => ();

let fsync fd callback => ();

let fsyncSync fd => ();

let ftruncate fd len callback => ();

let ftruncateSync fd len => ();

let futimes fd atime mtime callack => ();

let futimesSync fd atime mtime => ();

let lchmod path mode callback => ();

let lchmodSync path mode => ();

let lchown path uid gid callack => ();

let lchownSync path uid gid => ();

let link existingPath newPath callback => ();

let linkSync existingPath newPath => ();

let lstat path callback => ();

let lstatSync path => ();

let mkdir path mode callback => ();

let mkdirSync path mode => ();

let mkdtemp prefix options callback => ();

let mkdtempSync prefix options => ();

let _open path flags mode callback => ();

let openSync path flags mode => ();

let read fd buffer offset length position callbback => ();

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

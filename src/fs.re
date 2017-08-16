let access path mode callback => {
  Lwt.catch
    (fun () => Lwt_unix.access path [mode])
    (
      fun
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
    (
      fun
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
    (
      fun
      | Unix.Unix_error error_code _ _ => {
          callback error_code;
          Lwt.return ()
        }
      | exn => Lwt.fail exn
    );
};

let chownSync path uid gid => Unix.chown path uid gid;

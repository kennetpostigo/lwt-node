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

let accessSync path mode => {
  Unix.access path [mode];
};

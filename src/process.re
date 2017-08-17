/* let abort => ();

let arch = ();

let argv = Sys.argv;

let channel = ();

let chdir directory => {
  Lwt.try_bind
    (fun () => Lwt_unix.chdir directory)
    (fun () => {
      callback Ok;
      Lwt.return ();
    })
    (fun
      | Unix.Unix_error e _ _ => {
          (callback (Err e));
          Lwt.return ();
        }
      | exn => Lwt.fail exn
    );
}

let config = ();

let connected = ();

let cpuUsage previousValue => ();

let cwd => {
  Lwt.try_bind
    (fun () => Lwt_unix.getcwd ())
    (fun cwd => {
      callback Ok cwd;
      Lwt.return ();
    })
    (fun
      | Unix.Unix_error e _ _ => {
          (callback (Err e));
          Lwt.return ();
        }
      | exn => Lwt.fail exn
    );
}

let disconnect = ();

let emitWarning = ();

let env = (); */

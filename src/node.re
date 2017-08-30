/* let (until_done, signal_done) = Lwt.wait ();

let stop () => Lwt.wakeup_later signal_done ();

let run a => Lwt_main.run {
  a;
  until_done;
}; */

let run a => Lwt_main.run {
  a;
  Lwt.return ();
}

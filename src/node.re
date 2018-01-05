type t('a) = Lwt.t('a);

let andThen = Lwt.bind;

let catch = Lwt.catch;

let resolved = Lwt.return;

let fail = Lwt.fail;

let cancel = Lwt.cancel;

let (until_done, signal_done) = Lwt.wait();

let run = app => Lwt_main.run(until_done);

let stop = () => Lwt.wakeup_later(signal_done, ());
let (until_done, signal_done) = Lwt.wait();

type t('a) = Lwt.t('a);

let run = () => Lwt_main.run(until_done);

let stop = () => Lwt.wakeup_later(signal_done, ());
type t('a) = Lwt.t('a);

let andThen: (Lwt.t('a), 'a => Lwt.t('b)) => Lwt.t('b);

let catch: (unit => Lwt.t('a), exn => Lwt.t('a)) => Lwt.t('a);

let run: unit => unit;

let stop: unit => unit;
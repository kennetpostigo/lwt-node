type t('a) = Lwt.t('a);

let andThen: (t('a), 'a => t('b)) => t('b);

let catch: (unit => t('a), exn => t('a)) => t('a);

let resolved: 'a => t('a);

let fail: exn => t('a);

let cancel: t('a) => unit;

let run: 'a => unit;

let stop: unit => unit;
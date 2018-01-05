---
id: node
title: Node
sidebar_label: Node
---

### `Node.run`

Starts the event loop for async/sync operations.

#### Type definition

```reason
let run: unit => unit;
```

#### Usage

```reason
open ReasonNode;

Node.run({
  let%lwt myDir = Fs.mkdir("myDir");
  let%lwt myDir2 = Fs.mkdir("myDir2");
  Node.resolved();
});
```

---

### `Node.stop`

Stops the running event loop

#### Type definition

```reason
let stop: unit => unit;
```

#### Usage

```reason

```

---

### `Node.andThen`

Handle promise value

#### Type definition

```reason
let andThen: (t('a), 'a => t('b)) => t('b);
```

#### Usage

```reason

```

---

### `Node.catch`

Catch a promise that throws an exception

#### Type definition

```reason
let catch: (unit => t('a), exn => t('a)) => t('a);
```

#### Usage

```reason

```

---

### `Node.resolved`

Creates a resolved promise

#### Type definition

```reason
let resolved: 'a => t('a);
```

#### Usage

```reason

```

---

### `Node.fail`

Creates a rejected promise

#### Type definition

```reason
let fail: exn => t('a);
```

#### Usage

```reason

```

---

### `Node.cancel`

Canel a promise

#### Type definition

```reason
let cancel: t('a) => unit;
```

#### Usage

```reason

```

---

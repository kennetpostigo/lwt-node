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

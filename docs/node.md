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

Node.run(
  {
    Fs.mkdir(
      "myDir",
      511,
      Fs.(
        fun
        | Ok => {
            let x = 3 * 9;
            prerr_endline("\n\n" ++ string_of_int(x) ++ "\n\n");
          }
        | Err(e) => prerr_endline("\n\n====ERR====\n\n")
      )
    );
  }
);
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
open ReasonNode;

Node.run(
  {
    Fs.mkdir(
      "myDir",
      511,
      Fs.(
        fun
        | Ok => {
            let x = 3 * 9;
            prerr_endline("\n\n" ++ string_of_int(x) ++ "\n\n");
          }
        | Err(e) => prerr_endline("\n\n====ERR====\n\n")
      )
    );

    Node.stop();
  }
);
```

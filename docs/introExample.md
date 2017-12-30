---
id: introExample
title: Intro Example
sidebar_label: Intro Example
---

Here is a small overview of the `reason-node` API before we start. No worries if some of these are unfamiliar; the docs cover all of them.

```reason
open ReasonNode

Node.run(
  Fs.mkdir(
    "myDir", Fs.(
      fun
      | Ok => prerr_endline("Dir Created!"))
      | Err(e) => prerr_endline("Something went wrong")
    )
  )
);
```

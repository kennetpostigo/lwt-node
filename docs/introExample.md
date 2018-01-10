---
id: introExample
title: Intro Example
sidebar_label: Intro Example
---

Here is a small overview of the `lwt-node` API before we start. No worries if some of these are unfamiliar; the docs cover all of them.

```reason
open LwtNode;

Node.run({
  let%lwt myDir = Fs.mkdir("myDir");
  let%lwt myDir2 = Fs.mkdir("myDir2");
  Node.resolved();
});
```

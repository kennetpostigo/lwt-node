---
id: installation
title: Installation
sidebar_label: Installation
---

Install the library into your project with esy:

```bash
esy add reason-node
```

In order to use `reason-node` you must have reason installed on your machine.

## Install Options

If you don't have reason installed on your machine you have 2 options:

**1.** Sandboxed and project based installations that share build artifacts and builds, for lightning fast installations and incremental builds. Install [esy](https://github.com/esy/esy#install) via yarn/npm:

```bash
yarn global add esy
npm install --global esy
```

**2.** Setup global installation + editor setup through [reason-cli/opam](https://reasonml.github.io/guide/editor-tools/global-installation/)

## `Recommendation`

It is recommended to use esy when working on and building native apps and projects.

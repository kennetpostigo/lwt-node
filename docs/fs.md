---
id: fs
title: Fs
sidebar_label: Fs
---

### `Fs.access(path, mode, callback)`

#### Type Definition

```reason
let access: (~path: string, ~mode: asyncAccessPerm, ~callback: fsErr => 'a) => unit;
```

#### Usage

```reason

```

---

### `Fs.accessSync(path, mode)`

#### Type Definition

```reason
let accessSync: (~path: string, ~mode: syncAccessPerm) => unit;
```

#### Usage

```reason

```

---

### `Fs.appendFile(file, data, options, callback)`

#### Type Definition

```reason
let appendFile: (~file: 'a, ~data: 'b, ~options: 'c, ~callback: 'd) => unit;
```

#### Usage

**\*Fs.appendFile needs to be implemented\***

Please open a pull request if you are interested in contributing,
no code is needed, we will help answer questions and push you
in the right direction.

Repo URL: https://github.com/kennetpostigo/reason-node

```reason

```

---

### `Fs.appendFileSync(file, data, options)`

#### Type Definition

```reason
let appendFileSync: (~file: 'a, ~data: 'b, ~options: 'c) => unit;
```

#### Usage

**\*Fs.appendFileSync needs to be implemented\***

Please open a pull request if you are interested in contributing,
no code is needed, we will help answer questions and push you
in the right direction.

Repo URL: https://github.com/kennetpostigo/reason-node

```reason

```

---

### `Fs.chmod(path, mode, callback)`

#### Type Definition

```reason
let chmod: (~path: string, ~mode: asyncFilePerm, ~callback: fsErr => 'a) => unit;
```

#### Usage

```reason

```

---

### `Fs.chmodSync(path, mode)`

#### Type Definition

```reason
let chmodSync: (~path: string, ~mode: syncFilePerm) => unit;
```

#### Usage

```reason

```

---

### `Fs.chown(path, uid, gid, callback)`

#### Type Definition

```reason
let chown: (~path: string, ~uid: int, ~gid: int, ~callback: fsErr => 'a) => unit;
```

#### Usage

```reason

```

---

### `Fs.chownSync(path, uid, gid)`

#### Type Definition

```reason
let chownSync: (~path: string, ~uid: int, ~gid: int) => unit;
```

#### Usage

```reason

```

---

### `Fs.close(fd, callback)`

#### Type Definition

```reason
let close: (~fd: asyncFileDescr, ~callback: fsErr => 'a) => unit;
```

#### Usage

```reason

```

---

### `Fs.closeSync(fd)`

#### Type Definition

```reason
let closeSync: (~fd: syncFileDescr) => unit;
```

#### Usage

```reason

```

---

### `Fs.createReadStream(path, options)`

#### Type Definition

```reason

```

#### Usage

**\*Fs.createReadStream needs to be implemented\***

Please open a pull request if you are interested in contributing,
no code is needed, we will help answer questions and push you
in the right direction.

Repo URL: https://github.com/kennetpostigo/reason-node

```reason

```

---

### `Fs.createWriteStream(path, options)`

#### Type Definition

```reason

```

#### Usage

**\*Fs.createWriteStream needs to be implemented\***

Please open a pull request if you are interested in contributing,
no code is needed, we will help answer questions and push you
in the right direction.

Repo URL: https://github.com/kennetpostigo/reason-node

```reason

```

---

<!-- ### `Fs.exists(path, callback)` ### `Fs.existsSync(path)` -->

### `Fs.fchmod(fd, mode, callback)`

#### Type Definition

```reason
let fchmod: (~fd: asyncFileDescr, ~mode: asyncFilePerm, ~callback: fsErr => 'a) => unit;
```

#### Usage

```reason

```

---

### `Fs.fchmodSync(fd, mode)`

#### Type Definition

```reason
let fchmodSync: (~fd: syncFileDescr, ~mode: syncFilePerm) => unit;
```

#### Usage

```reason

```

---

### `Fs.fchown(fd, uid, gid, callback)`

#### Type Definition

```reason
let fchown: (~fd: asyncFileDescr, ~uid: int, ~gid: int, ~callback: fsErr => 'a) => unit;
```

#### Usage

```reason

```

---

### `Fs.fchownSync(fd, uid, gid)`

#### Type Definition

```reason
let fchownSync: (~fd: syncFileDescr, ~uid: int, ~gid: int) => unit;
```

#### Usage

```reason

```

---

### `Fs.fdatasync(fd, callback)`

#### Type Definition

```reason
let fdatasync: (~fd: asyncFileDescr, ~callback: fsErr => 'a) => unit;
```

#### Usage

```reason

```

---

### `Fs.fdatasyncSync(fd)`

#### Type Definition

```reason

```

#### Usage

**\*Fs.fdatasyncSync needs to be implemented\***

Please open a pull request if you are interested in contributing,
no code is needed, we will help answer questions and push you
in the right direction.

Repo URL: https://github.com/kennetpostigo/reason-node

```reason

```

---

### `Fs.fstat(fd, callback)`

#### Type Definition

```reason
let fstat: (~fd: asyncFileDescr, ~callback: (fsErr, option(asyncStats)) => 'a) => unit;
```

#### Usage

```reason

```

---

### `Fs.fstatSync(fd)`

#### Type Definition

```reason
let fstatSync: (~fd: syncFileDescr) => syncStats;
```

#### Usage

```reason

```

---

### `Fs.fsync(fd, callback)`

#### Type Definition

```reason
let fsync: (~fd: asyncFileDescr, ~callback: fsErr => 'a) => unit;
```

#### Usage

```reason

```

---

### `Fs.fsyncSync(fd)`

#### Type Definition

```reason

```

#### Usage

**\*Fs.fsyncSync needs to be implemented\***

Please open a pull request if you are interested in contributing,
no code is needed, we will help answer questions and push you
in the right direction.

Repo URL: https://github.com/kennetpostigo/reason-node

```reason

```

---

### `Fs.ftruncate(fd, len, callback)`

#### Type Definition

```reason
let ftruncate: (~fd: asyncFileDescr, ~len: int, ~callback: fsErr => 'a) => unit;
```

#### Usage

```reason

```

---

### `Fs.ftruncateSync(fd, len)`

#### Type Definition

```reason
let ftruncateSync: (~fd: syncFileDescr, ~len: int) => unit;
```

#### Usage

```reason

```

---

### `Fs.futimes(fd, atime, mtime, callback)`

#### Type Definition

```reason

```

#### Usage

**\*Fs.futimes needs to be implemented\***

Please open a pull request if you are interested in contributing,
no code is needed, we will help answer questions and push you
in the right direction.

Repo URL: https://github.com/kennetpostigo/reason-node

```reason

```

---

### `Fs.futimesSync(fd, atime, mtime)`

#### Type Definition

```reason

```

#### Usage

**\*Fs.futimesSync needs to be implemented\***

Please open a pull request if you are interested in contributing,
no code is needed, we will help answer questions and push you
in the right direction.

Repo URL: https://github.com/kennetpostigo/reason-node

```reason

```

---

### `Fs.lchmod(path, mode, callback)`

#### Type Definition

```reason

```

#### Usage

**\*Fs.lchmod needs to be implemented\***

Please open a pull request if you are interested in contributing,
no code is needed, we will help answer questions and push you
in the right direction.

Repo URL: https://github.com/kennetpostigo/reason-node

```reason

```

---

### `Fs.lchmodSync path mode`

#### Type Definition

```reason

```

#### Usage

**\*Fs.lchmodSync needs to be implemented\***

Please open a pull request if you are interested in contributing,
no code is needed, we will help answer questions and push you
in the right direction.

Repo URL: https://github.com/kennetpostigo/reason-node

```reason

```

---

### `Fs.lchown path uid gid callback`

#### Type Definition

```reason

```

#### Usage

**\*Fs.lchown needs to be implemented\***

Please open a pull request if you are interested in contributing,
no code is needed, we will help answer questions and push you
in the right direction.

Repo URL: https://github.com/kennetpostigo/reason-node

```reason

```

---

### `Fs.lchownSync(path, uid, gid`)

#### Type Definition

```reason

```

#### Usage

**\*Fs.lchownSync needs to be implemented\***

Please open a pull request if you are interested in contributing,
no code is needed, we will help answer questions and push you
in the right direction.

Repo URL: https://github.com/kennetpostigo/reason-node

```reason

```

---

### `Fs.link(existingPath, newPath, callback)`

#### Type Definition

```reason
let link: (~existingPath: string, ~newPath: string, ~callback: fsErr => 'a) => unit;
```

#### Usage

```reason

```

---

### `Fs.linkSync(existingPath, newPath)`

#### Type Definition

```reason
let linkSync: (~existingPath: string, ~newPath: string) => unit;
```

#### Usage

```reason

```

---

### `Fs.lstat(path, callback)`

#### Type Definition

```reason
let lstat: (~path: string, ~callback: (fsErr, option(asyncStats)) => 'a) => unit;
```

#### Usage

```reason

```

---

### `Fs.lstatSync(path)`

#### Type Definition

```reason
let lstatSync: (~path: string) => unit;
```

#### Usage

```reason

```

---

### `Fs.mkdir(path, mode, callback)`

#### Type Definition

```reason
let mkdir: (~path: string, ~mode: asyncFilePerm, ~callback: fsErr => 'a) => unit;
```

#### Usage

```reason

```

---

### `Fs.mkdirSync(path, mode)`

#### Type Definition

```reason
let mkdirSync: (~path: string, ~mode: syncFilePerm) => unit;
```

#### Usage

```reason

```

---

### `Fs.mkdtemp(prefix, options, callback)`

#### Type Definition

```reason

```

#### Usage

**\*Fs.mkdtemp needs to be implemented\***

Please open a pull request if you are interested in contributing,
no code is needed, we will help answer questions and push you
in the right direction.

Repo URL: https://github.com/kennetpostigo/reason-node

```reason

```

---

### `Fs.mkdtempSync(prefix, options)`

#### Type Definition

```reason

```

#### Usage

**\*Fs.mkdtempSync needs to be implemented\***

Please open a pull request if you are interested in contributing,
no code is needed, we will help answer questions and push you
in the right direction.

Repo URL: https://github.com/kennetpostigo/reason-node

```reason

```

---

### `Fs._open(path, flags, mode, callback)`

#### Type Definition

```reason
let _open:
  (
    ~path: string,
    ~flags: list(asyncOpenFlag),
    ~mode: asyncFilePerm,
    ~callback: (fsErr, option(asyncFileDescr)) => 'a
  ) =>
  unit;
```

#### Usage

```reason

```

---

### `Fs.openSync(path, flags, mode)`

#### Type Definition

```reason
let openSync: (~path: string, ~flags: list(syncOpenFlag), ~mode: syncFilePerm) => syncFileDescr;
```

#### Usage

```reason

```

---

### `Fs.read(fd, buffer, offset, length, position, callback)`

#### Type Definition

```reason
let read:
  (
    ~fd: asyncFileDescr,
    ~buffer: bytes,
    ~offset: int,
    ~length: int,
    ~callback: (fsErr, option(int)) => 'a
  ) =>
  unit;
```

#### Usage

```reason

```

---

### `Fs.readSync(fd, buffer, offset, length, position)`

#### Type Definition

```reason
let readSync: (~fd: syncFileDescr, ~buffer: bytes, ~offset: int, ~length: int) => int;
```

#### Usage

```reason

```

---

### `Fs.readdir(path, options, callback)`

#### Type Definition

```reason
let readdir: (~path: asyncDirHandle, ~callback: (fsErr, option(string)) => 'a) => unit;
```

#### Usage

```reason

```

---

### `Fs.readdirSync(path, options)`

#### Type Definition

```reason
let readdirSync: (~path: syncDirHandle) => string;
```

#### Usage

```reason

```

---

### `Fs.readFile(file, options, callback)`

#### Type Definition

```reason

```

#### Usage

**\*Fs.readFile needs to be implemented\***

Please open a pull request if you are interested in contributing,
no code is needed, we will help answer questions and push you
in the right direction.

Repo URL: https://github.com/kennetpostigo/reason-node

```reason

```

---

### `Fs.readFileSync(path, options)`

#### Type Definition

```reason

```

#### Usage

**\*Fs.readFileSync needs to be implemented\***

Please open a pull request if you are interested in contributing,
no code is needed, we will help answer questions and push you
in the right direction.

Repo URL: https://github.com/kennetpostigo/reason-node

```reason

```

---

### `Fs.readlink(path, options, callback)`

#### Type Definition

```reason
let readLink: (~path: string, ~callback: (fsErr, option(string)) => 'a) => unit;
```

#### Usage

```reason

```

---

### `Fs.readlinkSync(path, options)`

#### Type Definition

```reason
let readLinkSync: (~path: string) => string;
```

#### Usage

```reason

```

---

### `Fs.realpath(path, options, callback)`

#### Type Definition

```reason

```

#### Usage

**\*Fs.realpath needs to be implemented\***

Please open a pull request if you are interested in contributing,
no code is needed, we will help answer questions and push you
in the right direction.

Repo URL: https://github.com/kennetpostigo/reason-node

```reason

```

---

### `Fs.realpathSync(path, options)`

#### Type Definition

```reason

```

#### Usage

**\*Fs.realpathSync needs to be implemented\***

Please open a pull request if you are interested in contributing,
no code is needed, we will help answer questions and push you
in the right direction.

Repo URL: https://github.com/kennetpostigo/reason-node

```reason

```

---

### `Fs.rename(oldPath, newPath, callback)`

#### Type Definition

```reason
let rename: (~oldPath: string, ~newPath: string, ~callback: fsErr => 'a) => unit;
```

#### Usage

```reason

```

---

### `Fs.renameSync(oldPath, newPath)`

#### Type Definition

```reason
let renameSync: (~oldPath: string, ~newPath: string) => unit;
```

#### Usage

```reason

```

---

### `Fs.rmdir(path, callback)`

#### Type Definition

```reason
let rmdir: (~path: string, ~callback: fsErr => 'a) => unit;
```

#### Usage

```reason

```

---

### `Fs.rmdirSync(path)`

#### Type Definition

```reason
let rmdirSync: (~path: string) => unit;
```

#### Usage

```reason

```

---

### `Fs.stat(path, callback)`

#### Type Definition

```reason
let stat: (~path: string, ~callback: (fsErr, option(asyncStats)) => 'a) => unit;
```

#### Usage

```reason

```

---

### `Fs.statSync(path)`

#### Type Definition

```reason
let statSync: (~path: string) => syncStats;
```

#### Usage

```reason

```

---

### `Fs.symlink(target, path, type, callback)`

#### Type Definition

```reason
let symlink: (~target: string, ~path: string, ~callback: fsErr => 'a) => unit;
```

#### Usage

```reason

```

---

### `Fs.symlinkSync(target, path, type)`

#### Type Definition

```reason
let symlinkSync: (~target: string, ~path: string) => unit;
```

#### Usage

```reason

```

---

### `Fs.truncate(path, len, callback)`

#### Type Definition

```reason
let truncate: (~path: string, ~len: int, ~callback: fsErr => 'a) => unit;
```

#### Usage

```reason

```

---

### `Fs.truncateSync(path,len)`

#### Type Definition

```reason
let truncateSync: (~path: string, ~len: int) => unit;
```

#### Usage

```reason

```

---

### `Fs.unlink(path, callback)`

#### Type Definition

```reason
let unlink: (~path: string, ~callback: fsErr => 'a) => unit;
```

#### Usage

```reason

```

---

### `Fs.unlinkSync(path)`

#### Type Definition

```reason
let unlinkSync: (~path: string) => unit;
```

#### Usage

```reason

```

---

### `Fs.unwatchFile(filename, listener)`

#### Type Definition

```reason

```

#### Usage

**\*Fs.unwatchFile needs to be implemented\***

Please open a pull request if you are interested in contributing,
no code is needed, we will help answer questions and push you
in the right direction.

Repo URL: https://github.com/kennetpostigo/reason-node

```reason

```

---

### `Fs.utimes(path, atime, mtime, callback)`

#### Type Definition

```reason
let utimes:
  (
    ~path: string,
    ~atime: float,
    ~mtime: float,
    ~callback: fsErr => 'a
  ) =>
  unit;
```

#### Usage

```reason

```

---

### `Fs.utimesSync(path atime mtime)`

#### Type Definition

```reason
let utimesSync: (~path: string, ~atime: float, ~mtime: float) => unit;
```

#### Usage

```reason

```

---

### `Fs.watch(filename, options, listener)`

#### Type Definition

```reason

```

#### Usage

**\*Fs.watch needs to be implemented\***

Please open a pull request if you are interested in contributing,
no code is needed, we will help answer questions and push you
in the right direction.

Repo URL: https://github.com/kennetpostigo/reason-node

```reason

```

---

### `Fs.watchFile(filename, options, listener)`

#### Type Definition

```reason

```

#### Usage

**\*Fs.watchFile needs to be implemented\***

Please open a pull request if you are interested in contributing,
no code is needed, we will help answer questions and push you
in the right direction.

Repo URL: https://github.com/kennetpostigo/reason-node

```reason

```

---

### `Fs.write(fd, buffer, offset, length, callback)`

#### Type Definition

```reason
let write:
  (
    ~fd: asyncFileDescr,
    ~buffer: bytes,
    ~offset: int,
    ~length: int,
    ~callback: (fsErr, option(int)) => 'a
  ) =>
  unit;
```

#### Usage

```reason

```

---

### `Fs.writeSync(fd, buffer, offset, length)`

#### Type Definition

```reason
let writeSync: (~fd: syncFileDescr, ~buffer: bytes, ~offset: int, ~length: int) => int;
```

#### Usage

```reason

```

---

### `Fs.writeString(fd, string, offset, length, callback)`

#### Type Definition

```reason
let writeString:
  (
    ~fd: asyncFileDescr,
    ~string: string,
    ~offset: int,
    ~length: int,
    ~callback: (fsErr, option(int)) => 'a
  ) =>
  unit;
```

#### Usage

```reason

```

---

### `Fs.writeStringSync(fd, string, offset, length)`

#### Type Definition

```reason
let writeStringSync: (~fd: syncFileDescr, ~string: string, ~offset: int, ~length: int) => int;
```

#### Usage

```reason

```

---

### `Fs.writeFile(file, data, options, callback)`

#### Type Definition

```reason

```

#### Usage

**\*Fs.writeFile needs to be implemented\***

Please open a pull request if you are interested in contributing,
no code is needed, we will help answer questions and push you
in the right direction.

Repo URL: https://github.com/kennetpostigo/reason-node

```reason

```

---

### `Fs.writeFileSync(file, data, options)`

#### Type Definition

```reason

```

#### Usage

**\*Fs.writeFileSync needs to be implemented\***

Please open a pull request if you are interested in contributing,
no code is needed, we will help answer questions and push you
in the right direction.

Repo URL: https://github.com/kennetpostigo/reason-node

```reason

```

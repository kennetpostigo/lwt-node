---
id: fs
title: Fs
sidebar_label: Fs
---

### `Fs.access(mode, path)`

#### Type Definition

```reason
let access: (~mode: accessPermission=?, string) => Node.t(unit);
```

#### Usage

```reason

```

---

### `Fs.accessSync(mode, path)`

#### Type Definition

```reason
let accessSync: (~mode: accessPermission=?, string) => unit;
```

#### Usage

```reason

```

---

### `Fs.appendFile(file, data, options)`

#### Type Definition

```reason
let appendFile: (~file: 'a, ~data: 'b, ~options: 'c) => unit;
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

### `Fs.chmod(path, mode)`

#### Type Definition

```reason
let chmod: (~path: string, ~mode: asyncFilePerm) => Node.t(unit);
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

### `Fs.chown(path, uid, gid)`

#### Type Definition

```reason
let chown: (~path: string, ~uid: int, ~gid: int) => Node.t(unit);
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

### `Fs.close(fd)`

#### Type Definition

```reason
let close: asyncFileDescr => Node.t(unit);
```

#### Usage

```reason

```

---

### `Fs.closeSync(fd)`

#### Type Definition

```reason
let closeSync: syncFileDescr => unit;
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

### `Fs.fchmod(fd, mode)`

#### Type Definition

```reason
let fchmod: (~fd: asyncFileDescr, ~mode: asyncFilePerm) => Node.t(unit);
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

### `Fs.fchown(fd, uid, gid)`

#### Type Definition

```reason
let fchown: (~fd: asyncFileDescr, ~uid: int, ~gid: int) => Node.t(unit);
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

### `Fs.fdatasync(fd)`

#### Type Definition

```reason
let fdatasync: asyncFileDescr => Node.t(unit);
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

### `Fs.fstat(fd)`

#### Type Definition

```reason
let fstat: asyncFileDescr => Node.t(asyncStats);
```

#### Usage

```reason

```

---

### `Fs.fstatSync(fd)`

#### Type Definition

```reason
let fstatSync: syncFileDescr => syncStats;
```

#### Usage

```reason

```

---

### `Fs.fsync(fd)`

#### Type Definition

```reason
let fsync: asyncFileDescr => Node.t(unit);
```

#### Usage

```reason

```

---

### `Fs.fsyncSync(fd)`

#### Type Definition

```reason
let fsyncSync: syncFileDescr => unit;
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

### `Fs.ftruncate(len, fd)`

#### Type Definition

```reason
let ftruncate: (~len: int=?, Lwt_unix.file_descr) => Node.t(unit);
```

#### Usage

```reason

```

---

### `Fs.ftruncateSync(len, fd)`

#### Type Definition

```reason
let ftruncateSync: (~len: int=?, Unix.file_descr) => unit;
```

#### Usage

```reason

```

---

### `Fs.futimes(fd, atime, mtime)`

#### Type Definition

```reason
let futimes: (~fd: asyncFileDescr, ~atime: 'a, ~mtime: 'b) => unit;
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
let futimesSync: (~fd: syncFileDescr, ~atime: 'a, ~mtime: 'b) => unit;
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

### `Fs.lchmod(path, mode)`

#### Type Definition

```reason
let lchmod: (~path: string, ~mode: 'a) => unit;
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

### `Fs.lchmodSync(path, mode)`

#### Type Definition

```reason
let lchmodSync: (~path: string, ~mode: 'a) => unit;
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

### `Fs.lchown(path, uid, gid)`

#### Type Definition

```reason
let lchown: (~path: string, ~uid: int, ~gid: int) => unit;
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
let lchownSync: (~path: string, ~uid: int, ~gid: int) => unit;
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

### `Fs.link(existingPath, newPath)`

#### Type Definition

```reason
let link: (~existingPath: string, ~newPath: string) => Node.t(unit);
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

### `Fs.lstat(path)`

#### Type Definition

```reason
let lstat: string => Node.t(asyncStats);
```

#### Usage

```reason

```

---

### `Fs.lstatSync(path)`

#### Type Definition

```reason
let lstatSync: string => syncStats;
```

#### Usage

```reason

```

---

### `Fs.mkdir(mode, path)`

#### Type Definition

```reason
let mkdir: (~mode: Lwt_unix.file_perm=?, string) => Node.t(unit);
```

#### Usage

```reason

```

---

### `Fs.mkdirSync(mode, path)`

#### Type Definition

```reason
let mkdirSync: (~mode: syncFilePerm=?, string) => unit;
```

#### Usage

```reason

```

---

### `Fs.mkdtemp(prefix, options)`

#### Type Definition

```reason
let mkdtemp: (~prefix: 'a, ~options: 'b) => unit;
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
let mkdtempSync: (~prefix: 'a, ~options: 'b) => unit;
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

### `Fs._open(flags, mode, path)`

#### Type Definition

```reason
let _open:
  (~flags: list(asyncOpenFlag), ~mode: asyncFilePerm=?, string) =>
  Node.t(asyncFileDescr);
```

#### Usage

```reason

```

---

### `Fs.openSync(flags, mode, path)`

#### Type Definition

```reason
let openSync:
  (~flags: list(syncOpenFlag), ~mode: syncFilePerm=?, string) => syncFileDescr;
```

#### Usage

```reason

```

---

### `Fs.read(fd, buffer, offset, length)`

#### Type Definition

```reason
let read:
  (~fd: asyncFileDescr, ~buffer: bytes, ~offset: int, ~length: int) =>
  Node.t(int);
```

#### Usage

```reason

```

---

### `Fs.readSync(fd, buffer, offset, length)`

#### Type Definition

```reason
let readSync:
  (~fd: syncFileDescr, ~buffer: bytes, ~offset: int, ~length: int) => int;
```

#### Usage

```reason

```

---

### `Fs.readdir(path)`

#### Type Definition

```reason
let readdir: asyncDirHandle => Node.t(string);
```

#### Usage

```reason

```

---

### `Fs.readdirSync(path)`

#### Type Definition

```reason
let readdirSync: syncDirHandle => string;
```

#### Usage

```reason

```

---

### `Fs.readFile(file, options)`

#### Type Definition

```reason
let readFile: (~path: string, ~options: 'a) => unit;
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
let readFileSync: (~path: 'a, ~options: 'b) => unit;
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

### `Fs.readlink(path)`

#### Type Definition

```reason
let readLink: string => Node.t(string);
```

#### Usage

```reason

```

---

### `Fs.readlinkSync(path)`

#### Type Definition

```reason
let readLinkSync: string => string;
```

#### Usage

```reason

```

---

### `Fs.realpath(path, options)`

#### Type Definition

```reason
let realpath: (~path: string, ~options: 'a) => unit;
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
let realpathSync: (~path: 'a, ~options: 'b) => unit;
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

### `Fs.rename(oldPath, newPath)`

#### Type Definition

```reason
let rename: (~oldPath: string, ~newPath: string) => Node.t(unit);
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

### `Fs.rmdir(path)`

#### Type Definition

```reason
let rmdir: string => Node.t(unit);
```

#### Usage

```reason

```

---

### `Fs.rmdirSync(path)`

#### Type Definition

```reason
let rmdirSync: string => unit;
```

#### Usage

```reason

```

---

### `Fs.stat(path)`

#### Type Definition

```reason
let stat: string => Node.t(asyncStats);
```

#### Usage

```reason

```

---

### `Fs.statSync(path)`

#### Type Definition

```reason
let statSync: string => syncStats;
```

#### Usage

```reason

```

---

### `Fs.symlink(target, path)`

#### Type Definition

```reason
let symlink: (~target: string, ~path: string) => Node.t(unit);
```

#### Usage

```reason

```

---

### `Fs.symlinkSync(target, path)`

#### Type Definition

```reason
let symlinkSync: (~target: string, ~path: string) => unit;
```

#### Usage

```reason

```

---

### `Fs.truncate(path, len)`

#### Type Definition

```reason
let truncate: (~path: string, ~len: int) => Node.t(unit);
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

### `Fs.unlink(path)`

#### Type Definition

```reason
let unlink: string => Node.t(unit);
```

#### Usage

```reason

```

---

### `Fs.unlinkSync(path)`

#### Type Definition

```reason
let unlinkSync: string => unit;
```

#### Usage

```reason

```

---

### `Fs.unwatchFile(filename, listener)`

#### Type Definition

```reason
let unwatchFile: (~filename: 'a, ~listener: 'b) => unit;
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

### `Fs.utimes(path, atime, mtime)`

#### Type Definition

```reason
let utimes: (~path: string, ~atime: float, ~mtime: float) => Node.t(unit);
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
let watch: (~filename: 'a, ~options: 'b, ~listener: 'c) => unit;
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
let watchFile: (~filename: 'a, ~options: 'b, ~listener: 'c) => unit;
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

### `Fs.write(fd, buffer, offset, length)`

#### Type Definition

```reason
let write:
  (~fd: asyncFileDescr, ~buffer: bytes, ~offset: int, ~length: int) =>
  Node.t(int);
```

#### Usage

```reason

```

---

### `Fs.writeSync(fd, buffer, offset, length)`

#### Type Definition

```reason
let writeSync:
  (~fd: syncFileDescr, ~buffer: bytes, ~offset: int, ~length: int) => int;
```

#### Usage

```reason

```

---

### `Fs.writeString(fd, string, offset, length)`

#### Type Definition

```reason
let writeString:
  (~fd: asyncFileDescr, ~string: string, ~offset: int, ~length: int) =>
  Node.t(int);
```

#### Usage

```reason

```

---

### `Fs.writeStringSync(fd, string, offset, length)`

#### Type Definition

```reason
let writeStringSync:
  (~fd: syncFileDescr, ~string: string, ~offset: int, ~length: int) => int;
```

#### Usage

```reason

```

---

### `Fs.writeFile(file, data, options)`

#### Type Definition

```reason
let writeFile: (~file: 'a, ~data: 'b, ~options: 'c) => unit;
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
let writeFileSync: (~file: 'a, ~data: 'b, ~options: 'c) => unit;
```

#### Usage

**\*Fs.writeFileSync needs to be implemented\***

Please open a pull request if you are interested in contributing,
no code is needed, we will help answer questions and push you
in the right direction.

Repo URL: https://github.com/kennetpostigo/reason-node

```reason

```

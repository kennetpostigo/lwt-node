import React from "react";
// import { Navdrawer } from "rad-navdrawer";
import { Link } from "react-router-dom";
import "./styles/NavDrawer.css";

function Navbar(props) {
  return (
    <div className="nav-drawer">
      <div className="section">
        <Link
          onClick={() => {
            let el = document.getElementById("basename");
            el.scrollIntoView();
          }}
          className="module"
          to="/api/fs"
        >
          Fs
        </Link>
        <Link
          onClick={() => {
            let el = document.getElementById("basename");
            el.scrollIntoView();
          }}
          to="/api/fs/access"
        >
          access
        </Link>
        <Link
          onClick={() => {
            let el = document.getElementById("basename");
            el.scrollIntoView();
          }}
          to="/api/fs/accessSync"
        >
          accessSync
        </Link>
        <Link
          onClick={() => {
            let el = document.getElementById("basename");
            el.scrollIntoView();
          }}
          to="/api/fs/appendFile"
        >
          appendFile
        </Link>
        <Link
          onClick={() => {
            let el = document.getElementById("basename");
            el.scrollIntoView();
          }}
          to="/api/fs/appendFileSync"
        >
          appendFileSync
        </Link>
        <Link
          onClick={() => {
            let el = document.getElementById("basename");
            el.scrollIntoView();
          }}
          to="/api/fs/chmod"
        >
          chmod
        </Link>
        <Link
          onClick={() => {
            let el = document.getElementById("basename");
            el.scrollIntoView();
          }}
          to="/api/fs/chmodSync"
        >
          chmodSync
        </Link>
        <Link
          onClick={() => {
            let el = document.getElementById("basename");
            el.scrollIntoView();
          }}
          to="/api/fs/chown"
        >
          chown
        </Link>
        <Link
          onClick={() => {
            let el = document.getElementById("basename");
            el.scrollIntoView();
          }}
          to="/api/fs/chownSync"
        >
          chownSync
        </Link>
        <Link
          onClick={() => {
            let el = document.getElementById("basename");
            el.scrollIntoView();
          }}
          to="/api/fs/close"
        >
          close
        </Link>
        <Link
          onClick={() => {
            let el = document.getElementById("basename");
            el.scrollIntoView();
          }}
          to="/api/fs/closeSync"
        >
          closeSync
        </Link>
        <Link
          onClick={() => {
            let el = document.getElementById("basename");
            el.scrollIntoView();
          }}
          to="/api/fs/createReadStream"
        >
          createReadStream
        </Link>
        <Link
          onClick={() => {
            let el = document.getElementById("basename");
            el.scrollIntoView();
          }}
          to="/api/fs/createWriteStream"
        >
          createWriteStream
        </Link>
        <Link
          onClick={() => {
            let el = document.getElementById("basename");
            el.scrollIntoView();
          }}
          to="/api/fs/fchmod"
        >
          fchmod
        </Link>
        <Link
          onClick={() => {
            let el = document.getElementById("basename");
            el.scrollIntoView();
          }}
          to="/api/fs/fchmodSync"
        >
          fchmodSync
        </Link>
        <Link
          onClick={() => {
            let el = document.getElementById("basename");
            el.scrollIntoView();
          }}
          to="/api/fs/fchown"
        >
          fchown
        </Link>
        <Link
          onClick={() => {
            let el = document.getElementById("basename");
            el.scrollIntoView();
          }}
          to="/api/fs/fchownSync"
        >
          fchownSync
        </Link>
        <Link
          onClick={() => {
            let el = document.getElementById("basename");
            el.scrollIntoView();
          }}
          to="/api/fs/fdatasync"
        >
          fdatasync
        </Link>
        <Link
          onClick={() => {
            let el = document.getElementById("basename");
            el.scrollIntoView();
          }}
          to="/api/fs/fdatasyncSync"
        >
          fdatasyncSync
        </Link>
        <Link
          onClick={() => {
            let el = document.getElementById("basename");
            el.scrollIntoView();
          }}
          to="/api/fs/fstat"
        >
          fstat
        </Link>
        <Link
          onClick={() => {
            let el = document.getElementById("basename");
            el.scrollIntoView();
          }}
          to="/api/fs/fstatSync"
        >
          fstatSync
        </Link>
        <Link
          onClick={() => {
            let el = document.getElementById("basename");
            el.scrollIntoView();
          }}
          to="/api/fs/fsync"
        >
          fsync
        </Link>
        <Link
          onClick={() => {
            let el = document.getElementById("basename");
            el.scrollIntoView();
          }}
          to="/api/fs/fsyncSync"
        >
          fsyncSync
        </Link>
        <Link
          onClick={() => {
            let el = document.getElementById("basename");
            el.scrollIntoView();
          }}
          to="/api/fs/ftruncate"
        >
          ftruncate
        </Link>
        <Link
          onClick={() => {
            let el = document.getElementById("basename");
            el.scrollIntoView();
          }}
          to="/api/fs/ftruncateSync"
        >
          ftruncateSync
        </Link>
        <Link
          onClick={() => {
            let el = document.getElementById("basename");
            el.scrollIntoView();
          }}
          to="/api/fs/futimes"
        >
          futimes
        </Link>
        <Link
          onClick={() => {
            let el = document.getElementById("basename");
            el.scrollIntoView();
          }}
          to="/api/fs/futimesSync"
        >
          futimesSync
        </Link>
        <Link
          onClick={() => {
            let el = document.getElementById("basename");
            el.scrollIntoView();
          }}
          to="/api/fs/lchmod"
        >
          lchmod
        </Link>
        <Link
          onClick={() => {
            let el = document.getElementById("basename");
            el.scrollIntoView();
          }}
          to="/api/fs/lchmodSync"
        >
          lchmodSync
        </Link>
        <Link
          onClick={() => {
            let el = document.getElementById("basename");
            el.scrollIntoView();
          }}
          to="/api/fs/lchown"
        >
          lchown
        </Link>
        <Link
          onClick={() => {
            let el = document.getElementById("basename");
            el.scrollIntoView();
          }}
          to="/api/fs/lchownSync"
        >
          lchownSync
        </Link>
        <Link
          onClick={() => {
            let el = document.getElementById("basename");
            el.scrollIntoView();
          }}
          to="/api/fs/link"
        >
          link
        </Link>
        <Link
          onClick={() => {
            let el = document.getElementById("basename");
            el.scrollIntoView();
          }}
          to="/api/fs/linkSync"
        >
          linkSync
        </Link>
        <Link
          onClick={() => {
            let el = document.getElementById("basename");
            el.scrollIntoView();
          }}
          to="/api/fs/lstat"
        >
          lstat
        </Link>
        <Link
          onClick={() => {
            let el = document.getElementById("basename");
            el.scrollIntoView();
          }}
          to="/api/fs/lstatSync"
        >
          lstatSync
        </Link>
        <Link
          onClick={() => {
            let el = document.getElementById("basename");
            el.scrollIntoView();
          }}
          to="/api/fs/mkdir"
        >
          mkdir
        </Link>
        <Link
          onClick={() => {
            let el = document.getElementById("basename");
            el.scrollIntoView();
          }}
          to="/api/fs/mkdirSync"
        >
          mkdirSync
        </Link>
        <Link
          onClick={() => {
            let el = document.getElementById("basename");
            el.scrollIntoView();
          }}
          to="/api/fs/mkdtemp"
        >
          mkdtemp
        </Link>
        <Link
          onClick={() => {
            let el = document.getElementById("basename");
            el.scrollIntoView();
          }}
          to="/api/fs/mkdtempSync"
        >
          mkdtempSync
        </Link>
        <Link
          onClick={() => {
            let el = document.getElementById("basename");
            el.scrollIntoView();
          }}
          to="/api/fs/_open"
        >
          _open
        </Link>
        <Link
          onClick={() => {
            let el = document.getElementById("basename");
            el.scrollIntoView();
          }}
          to="/api/fs/openSync"
        >
          openSync
        </Link>
        <Link
          onClick={() => {
            let el = document.getElementById("basename");
            el.scrollIntoView();
          }}
          to="/api/fs/read"
        >
          read
        </Link>
        <Link
          onClick={() => {
            let el = document.getElementById("basename");
            el.scrollIntoView();
          }}
          to="/api/fs/readSync"
        >
          readSync
        </Link>
        <Link
          onClick={() => {
            let el = document.getElementById("basename");
            el.scrollIntoView();
          }}
          to="/api/fs/readdir"
        >
          readdir
        </Link>
        <Link
          onClick={() => {
            let el = document.getElementById("basename");
            el.scrollIntoView();
          }}
          to="/api/fs/readdirSync"
        >
          readdirSync
        </Link>
        <Link
          onClick={() => {
            let el = document.getElementById("basename");
            el.scrollIntoView();
          }}
          to="/api/fs/readFile"
        >
          readFile
        </Link>
        <Link
          onClick={() => {
            let el = document.getElementById("basename");
            el.scrollIntoView();
          }}
          to="/api/fs/readFileSync"
        >
          readFileSync
        </Link>
        <Link
          onClick={() => {
            let el = document.getElementById("basename");
            el.scrollIntoView();
          }}
          to="/api/fs/readLink"
        >
          readLink
        </Link>
        <Link
          onClick={() => {
            let el = document.getElementById("basename");
            el.scrollIntoView();
          }}
          to="/api/fs/readLinkSync"
        >
          readLinkSync
        </Link>
        <Link
          onClick={() => {
            let el = document.getElementById("basename");
            el.scrollIntoView();
          }}
          to="/api/fs/realpath"
        >
          realpath
        </Link>
        <Link
          onClick={() => {
            let el = document.getElementById("basename");
            el.scrollIntoView();
          }}
          to="/api/fs/realpathSync"
        >
          realpathSync
        </Link>
        <Link
          onClick={() => {
            let el = document.getElementById("basename");
            el.scrollIntoView();
          }}
          to="/api/fs/rename"
        >
          rename
        </Link>
        <Link
          onClick={() => {
            let el = document.getElementById("basename");
            el.scrollIntoView();
          }}
          to="/api/fs/renameSync"
        >
          renameSync
        </Link>
        <Link
          onClick={() => {
            let el = document.getElementById("basename");
            el.scrollIntoView();
          }}
          to="/api/fs/rmdir"
        >
          rmdir
        </Link>
        <Link
          onClick={() => {
            let el = document.getElementById("basename");
            el.scrollIntoView();
          }}
          to="/api/fs/rmdirSync"
        >
          rmdirSync
        </Link>
        <Link
          onClick={() => {
            let el = document.getElementById("basename");
            el.scrollIntoView();
          }}
          to="/api/fs/stat"
        >
          stat
        </Link>
        <Link
          onClick={() => {
            let el = document.getElementById("basename");
            el.scrollIntoView();
          }}
          to="/api/fs/statSync"
        >
          statSync
        </Link>
        <Link
          onClick={() => {
            let el = document.getElementById("basename");
            el.scrollIntoView();
          }}
          to="/api/fs/symlink"
        >
          symlink
        </Link>
        <Link
          onClick={() => {
            let el = document.getElementById("basename");
            el.scrollIntoView();
          }}
          to="/api/fs/symlinkSync"
        >
          symlinkSync
        </Link>
        <Link
          onClick={() => {
            let el = document.getElementById("basename");
            el.scrollIntoView();
          }}
          to="/api/fs/truncate"
        >
          truncate
        </Link>
        <Link
          onClick={() => {
            let el = document.getElementById("basename");
            el.scrollIntoView();
          }}
          to="/api/path/truncateSync"
        >
          truncateSync
        </Link>
        <Link
          onClick={() => {
            let el = document.getElementById("basename");
            el.scrollIntoView();
          }}
          to="/api/path/unlink"
        >
          unlink
        </Link>
        <Link
          onClick={() => {
            let el = document.getElementById("basename");
            el.scrollIntoView();
          }}
          to="/api/path/unlinkSync"
        >
          unlinkSync
        </Link>
        <Link
          onClick={() => {
            let el = document.getElementById("basename");
            el.scrollIntoView();
          }}
          to="/api/path/unwatchFile"
        >
          unwatchFile
        </Link>
        <Link
          onClick={() => {
            let el = document.getElementById("basename");
            el.scrollIntoView();
          }}
          to="/api/path/utimes"
        >
          utimes
        </Link>
        <Link
          onClick={() => {
            let el = document.getElementById("basename");
            el.scrollIntoView();
          }}
          to="/api/path/utimesSync"
        >
          utimesSync
        </Link>
        <Link
          onClick={() => {
            let el = document.getElementById("basename");
            el.scrollIntoView();
          }}
          to="/api/path/watch"
        >
          watch
        </Link>
        <Link
          onClick={() => {
            let el = document.getElementById("basename");
            el.scrollIntoView();
          }}
          to="/api/path/watchFile"
        >
          watchFile
        </Link>
        <Link
          onClick={() => {
            let el = document.getElementById("basename");
            el.scrollIntoView();
          }}
          to="/api/path/write"
        >
          write
        </Link>
        <Link
          onClick={() => {
            let el = document.getElementById("basename");
            el.scrollIntoView();
          }}
          to="/api/path/writeSync"
        >
          writeSync
        </Link>
        <Link
          onClick={() => {
            let el = document.getElementById("basename");
            el.scrollIntoView();
          }}
          to="/api/path/writeString"
        >
          writeString
        </Link>
        <Link
          onClick={() => {
            let el = document.getElementById("basename");
            el.scrollIntoView();
          }}
          to="/api/path/writeStringSync"
        >
          writeStringSync
        </Link>
        <Link
          onClick={() => {
            let el = document.getElementById("basename");
            el.scrollIntoView();
          }}
          to="/api/path/writeFile"
        >
          writeFile
        </Link>
        <Link
          onClick={() => {
            let el = document.getElementById("basename");
            el.scrollIntoView();
          }}
          to="/api/path/writeFileSync"
        >
          writeFileSync
        </Link>
      </div>
      <div className="section">
        <Link
          onClick={() => {
            let el = document.getElementById("Path");
            el.scrollIntoView();
          }}
          className="module"
          to="/api/path"
        >
          Path
        </Link>
        <Link
          onClick={() => {
            let el = document.getElementById("basename");
            el.scrollIntoView();
          }}
          to="/api/path/basename"
        >
          basename
        </Link>
        <Link
          onClick={() => {
            let el = document.getElementById("delimeter");
            el.scrollIntoView();
          }}
          to="/api/path/delimeter"
        >
          delimeter
        </Link>
        <Link
          onClick={() => {
            let el = document.getElementById("dirname");
            el.scrollIntoView();
          }}
          to="/api/path/dirname"
        >
          dirname
        </Link>
        <Link
          onClick={() => {
            let el = document.getElementById("extname");
            el.scrollIntoView();
          }}
          to="/api/path/extname"
        >
          extname
        </Link>
        <Link
          onClick={() => {
            let el = document.getElementById("format");
            el.scrollIntoView();
          }}
          to="/api/path/format"
        >
          format
        </Link>
        <Link
          onClick={() => {
            let el = document.getElementById("isAbsolute");
            el.focus();
            el.scrollIntoView();
          }}
          to="/api/path/isAbsolute"
        >
          isAbsolute
        </Link>
        <Link
          onClick={() => {
            let el = document.getElementById("join");
            el.scrollIntoView();
          }}
          to="/api/path/join"
        >
          join
        </Link>
        <Link
          onClick={() => {
            let el = document.getElementById("normalize");
            el.scrollIntoView();
          }}
          to="/api/path/normalize"
        >
          normalize
        </Link>
        <Link
          onClick={() => {
            let el = document.getElementById("parse");
            console.log(el);
            el.scrollIntoView();
          }}
          to="/api/path/parse"
        >
          parse
        </Link>
        <Link
          onClick={() => {
            let el = document.getElementById("relative");
            el.scrollIntoView();
          }}
          to="/api/path/relative"
        >
          relative
        </Link>
        <Link
          onClick={() => {
            let el = document.getElementById("resolve");
            el.scrollIntoView();
          }}
          to="/api/path/resolve"
        >
          resolve
        </Link>
        <Link
          onClick={() => {
            let el = document.getElementById("sep");
            el.scrollIntoView();
          }}
          to="/api/path/sep"
        >
          sep
        </Link>
      </div>
    </div>
  );
}

export default Navbar;

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
          to="/api/path#access"
        >
          access
        </Link>
        <Link
          onClick={() => {
            let el = document.getElementById("basename");
            el.scrollIntoView();
          }}
          to="/api/path#accessSync"
        >
          accessSync
        </Link>
        <Link
          onClick={() => {
            let el = document.getElementById("basename");
            el.scrollIntoView();
          }}
          to="/api/path#appendFile"
        >
          appendFile
        </Link>
        <Link
          onClick={() => {
            let el = document.getElementById("basename");
            el.scrollIntoView();
          }}
          to="/api/path#appendFileSync"
        >
          appendFileSync
        </Link>
        <Link
          onClick={() => {
            let el = document.getElementById("basename");
            el.scrollIntoView();
          }}
          to="/api/path#chmod"
        >
          chmod
        </Link>
        <Link
          onClick={() => {
            let el = document.getElementById("basename");
            el.scrollIntoView();
          }}
          to="/api/path#chmodSync"
        >
          chmodSync
        </Link>
        <Link
          onClick={() => {
            let el = document.getElementById("basename");
            el.scrollIntoView();
          }}
          to="/api/path#chown"
        >
          chown
        </Link>
        <Link
          onClick={() => {
            let el = document.getElementById("basename");
            el.scrollIntoView();
          }}
          to="/api/path#chownSync"
        >
          chownSync
        </Link>
        <Link
          onClick={() => {
            let el = document.getElementById("basename");
            el.scrollIntoView();
          }}
          to="/api/path#close"
        >
          close
        </Link>
        <Link
          onClick={() => {
            let el = document.getElementById("basename");
            el.scrollIntoView();
          }}
          to="/api/path#closeSync"
        >
          closeSync
        </Link>
        <Link
          onClick={() => {
            let el = document.getElementById("basename");
            el.scrollIntoView();
          }}
          to="/api/path#createReadStream"
        >
          createReadStream
        </Link>
        <Link
          onClick={() => {
            let el = document.getElementById("basename");
            el.scrollIntoView();
          }}
          to="/api/path#createWriteStream"
        >
          createWriteStream
        </Link>
        <Link
          onClick={() => {
            let el = document.getElementById("basename");
            el.scrollIntoView();
          }}
          to="/api/path#fchmod"
        >
          fchmod
        </Link>
        <Link
          onClick={() => {
            let el = document.getElementById("basename");
            el.scrollIntoView();
          }}
          to="/api/path#fchmodSync"
        >
          fchmodSync
        </Link>
        <Link
          onClick={() => {
            let el = document.getElementById("basename");
            el.scrollIntoView();
          }}
          to="/api/path#fchown"
        >
          fchown
        </Link>
        <Link
          onClick={() => {
            let el = document.getElementById("basename");
            el.scrollIntoView();
          }}
          to="/api/path#fchownSync"
        >
          fchownSync
        </Link>
        <Link
          onClick={() => {
            let el = document.getElementById("basename");
            el.scrollIntoView();
          }}
          to="/api/path#fdatasync"
        >
          fdatasync
        </Link>
        <Link
          onClick={() => {
            let el = document.getElementById("basename");
            el.scrollIntoView();
          }}
          to="/api/path#fdatasyncSync"
        >
          fdatasyncSync
        </Link>
        <Link
          onClick={() => {
            let el = document.getElementById("basename");
            el.scrollIntoView();
          }}
          to="/api/path#fstat"
        >
          fstat
        </Link>
        <Link
          onClick={() => {
            let el = document.getElementById("basename");
            el.scrollIntoView();
          }}
          to="/api/path#fstatSync"
        >
          fstatSync
        </Link>
        <Link
          onClick={() => {
            let el = document.getElementById("basename");
            el.scrollIntoView();
          }}
          to="/api/path#fsync"
        >
          fsync
        </Link>
        <Link
          onClick={() => {
            let el = document.getElementById("basename");
            el.scrollIntoView();
          }}
          to="/api/path#fsyncSync"
        >
          fsyncSync
        </Link>
        <Link
          onClick={() => {
            let el = document.getElementById("basename");
            el.scrollIntoView();
          }}
          to="/api/path#ftruncate"
        >
          ftruncate
        </Link>
        <Link
          onClick={() => {
            let el = document.getElementById("basename");
            el.scrollIntoView();
          }}
          to="/api/path#ftruncateSync"
        >
          ftruncateSync
        </Link>
        <Link
          onClick={() => {
            let el = document.getElementById("basename");
            el.scrollIntoView();
          }}
          to="/api/path#futimes"
        >
          futimes
        </Link>
        <Link
          onClick={() => {
            let el = document.getElementById("basename");
            el.scrollIntoView();
          }}
          to="/api/path#futimesSync"
        >
          futimesSync
        </Link>
        <Link
          onClick={() => {
            let el = document.getElementById("basename");
            el.scrollIntoView();
          }}
          to="/api/path#lchmod"
        >
          lchmod
        </Link>
        <Link
          onClick={() => {
            let el = document.getElementById("basename");
            el.scrollIntoView();
          }}
          to="/api/path#lchmodSync"
        >
          lchmodSync
        </Link>
        <Link
          onClick={() => {
            let el = document.getElementById("basename");
            el.scrollIntoView();
          }}
          to="/api/path#lchown"
        >
          lchown
        </Link>
        <Link
          onClick={() => {
            let el = document.getElementById("basename");
            el.scrollIntoView();
          }}
          to="/api/path#lchownSync"
        >
          lchownSync
        </Link>
        <Link
          onClick={() => {
            let el = document.getElementById("basename");
            el.scrollIntoView();
          }}
          to="/api/path#link"
        >
          link
        </Link>
        <Link
          onClick={() => {
            let el = document.getElementById("basename");
            el.scrollIntoView();
          }}
          to="/api/path#linkSync"
        >
          linkSync
        </Link>
        <Link
          onClick={() => {
            let el = document.getElementById("basename");
            el.scrollIntoView();
          }}
          to="/api/path#lstat"
        >
          lstat
        </Link>
        <Link
          onClick={() => {
            let el = document.getElementById("basename");
            el.scrollIntoView();
          }}
          to="/api/path#lstatSync"
        >
          lstatSync
        </Link>
        <Link
          onClick={() => {
            let el = document.getElementById("basename");
            el.scrollIntoView();
          }}
          to="/api/path#mkdir"
        >
          mkdir
        </Link>
        <Link
          onClick={() => {
            let el = document.getElementById("basename");
            el.scrollIntoView();
          }}
          to="/api/path#mkdirSync"
        >
          mkdirSync
        </Link>
        <Link
          onClick={() => {
            let el = document.getElementById("basename");
            el.scrollIntoView();
          }}
          to="/api/path#mkdtemp"
        >
          mkdtemp
        </Link>
        <Link
          onClick={() => {
            let el = document.getElementById("basename");
            el.scrollIntoView();
          }}
          to="/api/path#mkdtempSync"
        >
          mkdtempSync
        </Link>
        <Link
          onClick={() => {
            let el = document.getElementById("basename");
            el.scrollIntoView();
          }}
          to="/api/path#_open"
        >
          _open
        </Link>
        <Link
          onClick={() => {
            let el = document.getElementById("basename");
            el.scrollIntoView();
          }}
          to="/api/path#openSync"
        >
          openSync
        </Link>
        <Link
          onClick={() => {
            let el = document.getElementById("basename");
            el.scrollIntoView();
          }}
          to="/api/path#read"
        >
          read
        </Link>
        <Link
          onClick={() => {
            let el = document.getElementById("basename");
            el.scrollIntoView();
          }}
          to="/api/path#readSync"
        >
          readSync
        </Link>
        <Link
          onClick={() => {
            let el = document.getElementById("basename");
            el.scrollIntoView();
          }}
          to="/api/path#readdir"
        >
          readdir
        </Link>
        <Link
          onClick={() => {
            let el = document.getElementById("basename");
            el.scrollIntoView();
          }}
          to="/api/path#readdirSync"
        >
          readdirSync
        </Link>
        <Link
          onClick={() => {
            let el = document.getElementById("basename");
            el.scrollIntoView();
          }}
          to="/api/path#readFile"
        >
          readFile
        </Link>
        <Link
          onClick={() => {
            let el = document.getElementById("basename");
            el.scrollIntoView();
          }}
          to="/api/path#readFileSync"
        >
          readFileSync
        </Link>
        <Link
          onClick={() => {
            let el = document.getElementById("basename");
            el.scrollIntoView();
          }}
          to="/api/path#readLink"
        >
          readLink
        </Link>
        <Link
          onClick={() => {
            let el = document.getElementById("basename");
            el.scrollIntoView();
          }}
          to="/api/path#readLinkSync"
        >
          readLinkSync
        </Link>
        <Link
          onClick={() => {
            let el = document.getElementById("basename");
            el.scrollIntoView();
          }}
          to="/api/path#realpath"
        >
          realpath
        </Link>
        <Link
          onClick={() => {
            let el = document.getElementById("basename");
            el.scrollIntoView();
          }}
          to="/api/path#realpathSync"
        >
          realpathSync
        </Link>
        <Link
          onClick={() => {
            let el = document.getElementById("basename");
            el.scrollIntoView();
          }}
          to="/api/path#rename"
        >
          rename
        </Link>
        <Link
          onClick={() => {
            let el = document.getElementById("basename");
            el.scrollIntoView();
          }}
          to="/api/path#renameSync"
        >
          renameSync
        </Link>
        <Link
          onClick={() => {
            let el = document.getElementById("basename");
            el.scrollIntoView();
          }}
          to="/api/path#rmdir"
        >
          rmdir
        </Link>
        <Link
          onClick={() => {
            let el = document.getElementById("basename");
            el.scrollIntoView();
          }}
          to="/api/path#rmdirSync"
        >
          rmdirSync
        </Link>
        <Link
          onClick={() => {
            let el = document.getElementById("basename");
            el.scrollIntoView();
          }}
          to="/api/path#stat"
        >
          stat
        </Link>
        <Link
          onClick={() => {
            let el = document.getElementById("basename");
            el.scrollIntoView();
          }}
          to="/api/path#statSync"
        >
          statSync
        </Link>
        <Link
          onClick={() => {
            let el = document.getElementById("basename");
            el.scrollIntoView();
          }}
          to="/api/path#symlink"
        >
          symlink
        </Link>
        <Link
          onClick={() => {
            let el = document.getElementById("basename");
            el.scrollIntoView();
          }}
          to="/api/path#symlinkSync"
        >
          symlinkSync
        </Link>
        <Link
          onClick={() => {
            let el = document.getElementById("basename");
            el.scrollIntoView();
          }}
          to="/api/path#truncate"
        >
          truncate
        </Link>
        <Link
          onClick={() => {
            let el = document.getElementById("basename");
            el.scrollIntoView();
          }}
          to="/api/path#truncateSync"
        >
          truncateSync
        </Link>
        <Link
          onClick={() => {
            let el = document.getElementById("basename");
            el.scrollIntoView();
          }}
          to="/api/path#unlink"
        >
          unlink
        </Link>
        <Link
          onClick={() => {
            let el = document.getElementById("basename");
            el.scrollIntoView();
          }}
          to="/api/path#unlinkSync"
        >
          unlinkSync
        </Link>
        <Link
          onClick={() => {
            let el = document.getElementById("basename");
            el.scrollIntoView();
          }}
          to="/api/path#unwatchFile"
        >
          unwatchFile
        </Link>
        <Link
          onClick={() => {
            let el = document.getElementById("basename");
            el.scrollIntoView();
          }}
          to="/api/path#utimes"
        >
          utimes
        </Link>
        <Link
          onClick={() => {
            let el = document.getElementById("basename");
            el.scrollIntoView();
          }}
          to="/api/path#utimesSync"
        >
          utimesSync
        </Link>
        <Link
          onClick={() => {
            let el = document.getElementById("basename");
            el.scrollIntoView();
          }}
          to="/api/path#watch"
        >
          watch
        </Link>
        <Link
          onClick={() => {
            let el = document.getElementById("basename");
            el.scrollIntoView();
          }}
          to="/api/path#watchFile"
        >
          watchFile
        </Link>
        <Link
          onClick={() => {
            let el = document.getElementById("basename");
            el.scrollIntoView();
          }}
          to="/api/path#write"
        >
          write
        </Link>
        <Link
          onClick={() => {
            let el = document.getElementById("basename");
            el.scrollIntoView();
          }}
          to="/api/path#writeSync"
        >
          writeSync
        </Link>
        <Link
          onClick={() => {
            let el = document.getElementById("basename");
            el.scrollIntoView();
          }}
          to="/api/path#writeString"
        >
          writeString
        </Link>
        <Link
          onClick={() => {
            let el = document.getElementById("basename");
            el.scrollIntoView();
          }}
          to="/api/path#writeStringSync"
        >
          writeStringSync
        </Link>
        <Link
          onClick={() => {
            let el = document.getElementById("basename");
            el.scrollIntoView();
          }}
          to="/api/path#writeFile"
        >
          writeFile
        </Link>
        <Link
          onClick={() => {
            let el = document.getElementById("basename");
            el.scrollIntoView();
          }}
          to="/api/path#writeFileSync"
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
          to="/api/path#basename"
        >
          basename
        </Link>
        <Link
          onClick={() => {
            let el = document.getElementById("delimeter");
            el.scrollIntoView();
          }}
          to="/api/path#delimeter"
        >
          delimeter
        </Link>
        <Link
          onClick={() => {
            let el = document.getElementById("dirname");
            el.scrollIntoView();
          }}
          to="/api/path#dirname"
        >
          dirname
        </Link>
        <Link
          onClick={() => {
            let el = document.getElementById("extname");
            el.scrollIntoView();
          }}
          to="/api/path#extname"
        >
          extname
        </Link>
        <Link
          onClick={() => {
            let el = document.getElementById("format");
            el.scrollIntoView();
          }}
          to="/api/path#format"
        >
          format
        </Link>
        <Link
          onClick={() => {
            let el = document.getElementById("isAbsolute");
            el.scrollIntoView();
          }}
          to="/api/path#isAbsolute"
        >
          isAbsolute
        </Link>
        <Link
          onClick={() => {
            let el = document.getElementById("join");
            el.scrollIntoView();
          }}
          to="/api/path#join"
        >
          join
        </Link>
        <Link
          onClick={() => {
            let el = document.getElementById("normalize");
            el.scrollIntoView();
          }}
          to="/api/path#normalize"
        >
          normalize
        </Link>
        <Link
          onClick={() => {
            let el = document.getElementById("parse");
            el.scrollIntoView();
          }}
          to="/api/path#parse"
        >
          parse
        </Link>
        <Link
          onClick={() => {
            let el = document.getElementById("relative");
            el.scrollIntoView();
          }}
          to="/api/path#relative"
        >
          relative
        </Link>
        <Link
          onClick={() => {
            let el = document.getElementById("resolve");
            el.scrollIntoView();
          }}
          to="/api/path#resolve"
        >
          resolve
        </Link>
        <Link
          onClick={() => {
            let el = document.getElementById("sep");
            el.scrollIntoView();
          }}
          to="/api/path#sep"
        >
          sep
        </Link>
      </div>
    </div>
  );
}

export default Navbar;

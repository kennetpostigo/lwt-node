![reason-node](website/static/img/readme.png)

<p style="margin-top: 20px;" align="center">
  <a href="http://npm.im/reason-node">
    <img src="https://img.shields.io/npm/v/reason-node.svg?style=flat-square"/>
  </a>
  <a href="http://npm-stat.com/charts.html?package=reason-node">
    <img src="https://img.shields.io/npm/dm/reason-node.svg?style=flat-square"/>
  </a>
  <a href="http://opensource.org/licenses/MIT">
    <img src="https://img.shields.io/npm/l/reason-node.svg?style=flat-square" />
  </a>
</p>
<!-- [![Build Status](https://travis-ci.org/kennetpostigo/reason-node.svg?branch=master)](https://travis-ci.org/kennetpostigo/reason-node) -->

reason-node, a [reason](https://github.com/facebook/reason) implemention of the [node.js](https://github.com/nodejs/node) API.

## Install

Install the library into your project with esy:

```bash
esy add reason-node
```

In order to use `reason-node` you must have reason installed on your machine.

### Install Options

If you don't have reason installed on your machine you have 2 options:

**1.** Sandboxed and project based installations that share build artifacts and builds, for lightning fast installations and incremental builds. Install [esy](https://github.com/esy/esy#install) via yarn/npm:

```bash
yarn global add esy
npm install --global esy
```

**2.** Setup global installation + editor setup through [reason-cli/opam](https://reasonml.github.io/guide/editor-tools/global-installation/)

### Recommendation

It is recommended to use esy when working on and building native apps and projects.

## Usage

See https://github.com/kennetpostigo/reason-node-starter

## Documentation

See https://kennetpostigo.github.io/reason-node

## Contributing

See [Contributing.md](https://github.com/kennetpostigo/reason-node/blob/master/CONTRIBUTING.md)

Missing or yet to be implemented API's are documented with compile-time warnings, are noted in the documentation and are listed in [Future.md](https://github.com/kennetpostigo/reason-node/blob/master/Future.md). If you'd like to help contribute, please open a pull-request, no code needed! We'll try to help steer you in the right direction!

**building**

1. Clone the project
2. Run `esy install`
3. Run `esy build`

## License

MIT

![reason-node](website/static/img/readme.png)

<p style="margin-top: 20px;" align="center">
  <a href="http://npm.im/reason-node">
    <img src="https://img.shields.io/npm/v/reason-node.svg?style=flat-square"/>
  </a>
    <a href="https://travis-ci.org/kennetpostigo/reason-node">
    <img src="https://travis-ci.org/kennetpostigo/reason-node.svg?branch=master"/>
  </a>
  <a href="http://npm-stat.com/charts.html?package=reason-node">
    <img src="https://img.shields.io/npm/dm/reason-node.svg?style=flat-square"/>
  </a>
  <a href="http://opensource.org/licenses/MIT">
    <img src="https://img.shields.io/npm/l/reason-node.svg?style=flat-square" />
  </a>
</p>

reason-node, a [reason](https://github.com/facebook/reason) implemention of the [node.js](https://github.com/nodejs/node) API.

## Install

First you need to install [esy](https://github.com/esy/), Sandboxed and project based installations that share build artifacts and builds, for lightning fast installations and incremental builds:

```bash
yarn global add esy

# OR with npm

npm install --global esy
```

Then go ahead and add reason-node to your project with esy:

```bash
esy add reason-node
```

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

**testing**

```
esy make test
```

**Running commands**
If you want to run commands that work directly on the project, you must always prefex them with
`esy x` in order to run the command in the sandboxed environment.

## License

MIT

![lwt-node-native](website/static/img/readme.png)

<p style="margin-top: 20px;" align="center">
  <a href="http://npm.im/lwt-node-native">
    <img src="https://img.shields.io/npm/v/lwt-node-native.svg?style=flat-square"/>
  </a>
    <a href="https://travis-ci.org/kennetpostigo/lwt-node-native">
    <img src="https://travis-ci.org/kennetpostigo/lwt-node-native.svg?branch=master"/>
  </a>
  <a href="http://npm-stat.com/charts.html?package=lwt-node-native">
    <img src="https://img.shields.io/npm/dm/lwt-node-native.svg?style=flat-square"/>
  </a>
  <a href="http://opensource.org/licenses/MIT">
    <img src="https://img.shields.io/npm/l/lwt-node-native.svg?style=flat-square" />
  </a>
</p>

lwt-node-native, a [reason](https://github.com/facebook/reason) implemention of the [node.js](https://github.com/nodejs/node) API.

## Install

First you need to install [esy](https://github.com/esy/), Sandboxed and project based installations that share build artifacts and builds, for lightning fast installations and incremental builds:

```bash
yarn global add esy

# OR with npm

npm install --global esy
```

Then go ahead and add lwt-node-native to your project with esy:

```bash
esy add lwt-node-native
```

## Usage

See https://github.com/kennetpostigo/lwt-node-native-starter

## Documentation

See https://kennetpostigo.github.io/lwt-node-native

## Contributing

See [Contributing.md](https://github.com/kennetpostigo/lwt-node-native/blob/master/CONTRIBUTING.md)

Missing or yet to be implemented API's are documented with compile-time warnings, are noted in the documentation and are listed in [Future.md](https://github.com/kennetpostigo/lwt-node-native/blob/master/Future.md). If you'd like to help contribute, please open a pull-request, no code needed! We'll try to help steer you in the right direction!

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

## Attribution

lwt-node-native would not be possible without all the hard work from the maintainers
and contributors of of lwt. lwt-node-native is powered by lwt and the ocaml standard lib.
Lwt provides a battle tested promise implementation and async operators. If you love lwt-node-native
I recommend showing love to the [lwt project](https://github.com/ocsigen/lwt).

## License

MIT

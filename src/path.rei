let basename: (~ext: string=?, ~path: string) => string;

let delimeter: string;

let sep: string;

let dirname: (~path: string) => string;

let extname: (~path: string) => string;

type pathObject = {
  dir: option(string),
  root: option(string),
  base: option(string),
  name: option(string),
  ext: option(string)
};

let format: (~pathObject: pathObject) => string;

let isAbsolute: (~path: string) => bool;

let join: (~paths: list(string)) => string;

let normalize: (~path: string) => string;

let parse: (~path: string) => pathObject;

[@ocaml.deprecated
  {|
    Path.relative has yet to be implemented.
    Please open a pull request if you are interested in contributing,
    no code is needed, we will help answer questions and push you
    in the right direction.

    Repo URL: https://github.com/kennetpostigo/reason-node
  |}
]
let relative: (~from: string, ~_to: string) => unit;

let resolve: (~paths: list(string)) => string;
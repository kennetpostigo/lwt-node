let basename: (~ext: string=?, string) => string;

let delimeter: string;

let sep: string;

let dirname: string => string;

let extname: string => string;

type pathObject = {
  dir: option(string),
  root: option(string),
  base: option(string),
  name: option(string),
  ext: option(string)
};

let format: pathObject => string;

let isAbsolute: string => bool;

let join: list(string) => string;

let normalize: string => string;

let parse: string => pathObject;

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

let resolve: list(string) => string;
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

let relative: (~from: string, ~_to: string) => string;

let relativeFilePath: (~from: string, ~_to: string) => string;

let resolve: list(string) => string;
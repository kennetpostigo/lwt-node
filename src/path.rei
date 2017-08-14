let basename : ext::string? => path::string => string;

let delimeter : string;

let sep : string;

let dirname : path::string => string;

let extname : path::string => string;

type pathObject = {
  dir: option string,
  root: option string,
  base: option string,
  name: option string,
  ext: option string
};

let format : pathObject::pathObject => string;

let isAbsolute : path::string => bool;

let join : paths::list string => string;

let normalize : path::string => string;

let parse : path::string => pathObject;

/*let relative : from::string => to::string => string; */

let resolve : paths::list string => string;

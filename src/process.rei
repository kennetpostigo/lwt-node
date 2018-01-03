[@ocaml.deprecated
  {|
    Process.abort has yet to be implemented.
    Please open a pull request if you are interested in contributing,
    no code is needed, we will help answer questions and push you
    in the right direction.

    Repo URL: https://github.com/kennetpostigo/reason-node
  |}
]
let abort: unit;

[@ocaml.deprecated
  {|
    Process.arch has yet to be implemented.
    Please open a pull request if you are interested in contributing,
    no code is needed, we will help answer questions and push you
    in the right direction.

    Repo URL: https://github.com/kennetpostigo/reason-node
  |}
]
let arch: unit;

let argv: array(string);

let argv0: string;

[@ocaml.deprecated
  {|
    Process.channel has yet to be implemented.
    Please open a pull request if you are interested in contributing,
    no code is needed, we will help answer questions and push you
    in the right direction.

    Repo URL: https://github.com/kennetpostigo/reason-node
  |}
]
let channel: unit;

let chdir: string => unit;

[@ocaml.deprecated
  {|
    Process.config has yet to be implemented.
    Please open a pull request if you are interested in contributing,
    no code is needed, we will help answer questions and push you
    in the right direction.

    Repo URL: https://github.com/kennetpostigo/reason-node
  |}
]
let config: unit;

[@ocaml.deprecated
  {|
    Process.connected has yet to be implemented.
    Please open a pull request if you are interested in contributing,
    no code is needed, we will help answer questions and push you
    in the right direction.

    Repo URL: https://github.com/kennetpostigo/reason-node
  |}
]
let connected: unit;

[@ocaml.deprecated
  {|
    Process.cpuUsage has yet to be implemented.
    Please open a pull request if you are interested in contributing,
    no code is needed, we will help answer questions and push you
    in the right direction.

    Repo URL: https://github.com/kennetpostigo/reason-node
  |}
]
let cpuUsage: 'a => unit;

let cwd: string;

[@ocaml.deprecated
  {|
    Process.disconnect has yet to be implemented.
    Please open a pull request if you are interested in contributing,
    no code is needed, we will help answer questions and push you
    in the right direction.

    Repo URL: https://github.com/kennetpostigo/reason-node
  |}
]
let disconnect: unit;

[@ocaml.deprecated
  {|
    Process.emitWarning has yet to be implemented.
    Please open a pull request if you are interested in contributing,
    no code is needed, we will help answer questions and push you
    in the right direction.

    Repo URL: https://github.com/kennetpostigo/reason-node
  |}
]
let emitWarning: unit;

[@ocaml.deprecated
  {|
    Process.env has yet to be implemented.
    Please open a pull request if you are interested in contributing,
    no code is needed, we will help answer questions and push you
    in the right direction.

    Repo URL: https://github.com/kennetpostigo/reason-node
  |}
]
let env: unit;

[@ocaml.deprecated
  {|
    Process.execArgv has yet to be implemented.
    Please open a pull request if you are interested in contributing,
    no code is needed, we will help answer questions and push you
    in the right direction.

    Repo URL: https://github.com/kennetpostigo/reason-node
  |}
]
let execArgv: unit;

[@ocaml.deprecated
  {|
    Process.execPath has yet to be implemented.
    Please open a pull request if you are interested in contributing,
    no code is needed, we will help answer questions and push you
    in the right direction.

    Repo URL: https://github.com/kennetpostigo/reason-node
  |}
]
let execPath: unit;

let exit: (~code: int=?) => 'a;

let exitCode: ref(int);

let getegid: unit => int;

let geteuid: unit => int;

let getgid: int;

let getgroups: array(int);

let getuid: int;

[@ocaml.deprecated
  {|
    Process.hrtime has yet to be implemented.
    Please open a pull request if you are interested in contributing,
    no code is needed, we will help answer questions and push you
    in the right direction.

    Repo URL: https://github.com/kennetpostigo/reason-node
  |}
]
let hrtime: 'a => unit;

let initgroups: (~user: string, ~extraGroup: int) => unit;

let kill: (~pid: int, ~signal: int) => unit;

[@ocaml.deprecated
  {|
    Process.mainModule has yet to be implemented.
    Please open a pull request if you are interested in contributing,
    no code is needed, we will help answer questions and push you
    in the right direction.

    Repo URL: https://github.com/kennetpostigo/reason-node
  |}
]
let mainModule: unit;

[@ocaml.deprecated
  {|
    Process.memoryUsage has yet to be implemented.
    Please open a pull request if you are interested in contributing,
    no code is needed, we will help answer questions and push you
    in the right direction.

    Repo URL: https://github.com/kennetpostigo/reason-node
  |}
]
let memoryUsage: unit;

[@ocaml.deprecated
  {|
    Process.nextTick has yet to be implemented.
    Please open a pull request if you are interested in contributing,
    no code is needed, we will help answer questions and push you
    in the right direction.

    Repo URL: https://github.com/kennetpostigo/reason-node
  |}
]
let nextTick: 'a => unit;

let pid: int;

[@ocaml.deprecated
  {|
    Process.platform has yet to be implemented.
    Please open a pull request if you are interested in contributing,
    no code is needed, we will help answer questions and push you
    in the right direction.

    Repo URL: https://github.com/kennetpostigo/reason-node
  |}
]
let platform: unit;

[@ocaml.deprecated
  {|
    Process.release has yet to be implemented.
    Please open a pull request if you are interested in contributing,
    no code is needed, we will help answer questions and push you
    in the right direction.

    Repo URL: https://github.com/kennetpostigo/reason-node
  |}
]
let release: unit;

[@ocaml.deprecated
  {|
    Process.send has yet to be implemented.
    Please open a pull request if you are interested in contributing,
    no code is needed, we will help answer questions and push you
    in the right direction.

    Repo URL: https://github.com/kennetpostigo/reason-node
  |}
]
let send: (~message: 'a, ~sendHandle: 'b, ~options: 'c) => unit;

[@ocaml.deprecated
  {|
    Process.setegid has yet to be implemented.
    Please open a pull request if you are interested in contributing,
    no code is needed, we will help answer questions and push you
    in the right direction.

    Repo URL: https://github.com/kennetpostigo/reason-node
  |}
]
let setegid: int => unit;

[@ocaml.deprecated
  {|
    Process.seteuid has yet to be implemented.
    Please open a pull request if you are interested in contributing,
    no code is needed, we will help answer questions and push you
    in the right direction.

    Repo URL: https://github.com/kennetpostigo/reason-node
  |}
]
let seteuid: int => unit;

let setgid: int => unit;

let setgroups: array(int) => unit;

let setuid: int => unit;

[@ocaml.deprecated
  {|
    Process.stderr has yet to be implemented.
    Please open a pull request if you are interested in contributing,
    no code is needed, we will help answer questions and push you
    in the right direction.

    Repo URL: https://github.com/kennetpostigo/reason-node
  |}
]
let stderr: unit;

[@ocaml.deprecated
  {|
    Process.stdin has yet to be implemented.
    Please open a pull request if you are interested in contributing,
    no code is needed, we will help answer questions and push you
    in the right direction.

    Repo URL: https://github.com/kennetpostigo/reason-node
  |}
]
let stdin: unit;

[@ocaml.deprecated
  {|
    Process.stdout has yet to be implemented.
    Please open a pull request if you are interested in contributing,
    no code is needed, we will help answer questions and push you
    in the right direction.

    Repo URL: https://github.com/kennetpostigo/reason-node
  |}
]
let stdout: unit;

[@ocaml.deprecated
  {|
    Process.title has yet to be implemented.
    Please open a pull request if you are interested in contributing,
    no code is needed, we will help answer questions and push you
    in the right direction.

    Repo URL: https://github.com/kennetpostigo/reason-node
  |}
]
let title: unit;

[@ocaml.deprecated
  {|
    Process.unmask has yet to be implemented.
    Please open a pull request if you are interested in contributing,
    no code is needed, we will help answer questions and push you
    in the right direction.

    Repo URL: https://github.com/kennetpostigo/reason-node
  |}
]
let unmask: 'a => unit;

[@ocaml.deprecated
  {|
    Process.uptime has yet to be implemented.
    Please open a pull request if you are interested in contributing,
    no code is needed, we will help answer questions and push you
    in the right direction.

    Repo URL: https://github.com/kennetpostigo/reason-node
  |}
]
let uptime: unit => unit;

[@ocaml.deprecated
  {|
    Process.version has yet to be implemented.
    Please open a pull request if you are interested in contributing,
    no code is needed, we will help answer questions and push you
    in the right direction.

    Repo URL: https://github.com/kennetpostigo/reason-node
  |}
]
let version: unit;

[@ocaml.deprecated
  {|
    Process.versions has yet to be implemented.
    Please open a pull request if you are interested in contributing,
    no code is needed, we will help answer questions and push you
    in the right direction.

    Repo URL: https://github.com/kennetpostigo/reason-node
  |}
]
let versions: unit;
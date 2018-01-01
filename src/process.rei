let abort: unit;

let arch: unit;

let argv: array(string);

let argv0: string;

let channel: unit;

let chdir: (~directory: string) => unit;

let config: unit;

let connected: unit;

let cpuUsage: (~previousValue: 'a) => unit;

let cwd: string;

let disconnect: unit;

let exitCode: ref(int);

let exit: (~code: int=?) => 'a;

let getegid: unit => int;

let geteuid: unit => int;

let getgid: int;

let getgroups: array(int);

let getuid: int;

let hrtime: 'a => unit;

let initgroups: (string, int) => unit;

let kill: (int, int) => unit;

let mainModule: unit;

let memoryUsage: unit;

let nextTick: unit;

let pid: int;

let platform: unit;

let release: unit;

let send: ('a, 'b, 'c, 'd) => unit;

let setegid: int => unit;

let seteuid: int => unit;

let setgid: int => unit;

let setgroups: array(int) => unit;

let setuid: int => unit;

let stderr: unit;

let stdin: unit;

let stdout: unit;

let title: unit;

let unmask: 'a => unit;

let uptime: unit => unit;

let version: unit;

let versions: unit;
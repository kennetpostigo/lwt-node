let abort = ();

let arch = ();

let argv = Sys.argv;

let argv0 = Sys.argv[0];

let channel = ();

let chdir = directory => Sys.chdir(directory);

let config = ();

let connected = ();

let cpuUsage = previousValue => ();

let cwd = Sys.getcwd();

let disconnect = ();

let emitWarning = ();

let env = ();

let execArgv = ();

let execPath = ();

let exitCode = ref(0); /* this should be set by user */

let exit = (~code=exitCode^) => exit(code);

let getegid = () => Unix.getegid();

let geteuid = () => Unix.geteuid();

let getgid = Unix.getgid();

let getgroups = Unix.getgroups();

let getuid = Unix.getuid();

let hrtime = time => ();

let initgroups = (~user, ~extraGroup) => Unix.initgroups(user, extraGroup);

let kill = (~pid, ~signal) => Unix.kill(pid, signal);

let mainModule = ();

let memoryUsage = ();

let nextTick = (~callback, ~args) => ();

let pid = Unix.getpid();

let platform = ();

let release = ();

let send = (~message, ~sendHandle, ~options, ~callback) => ();

let setegid = id => ();

let seteuid = id => ();

let setgid = id => Unix.setgid(id);

let setgroups = group => Unix.setgroups(group);

let setuid = id => Unix.setuid(id);

let stderr = ();

let stdin = ();

let stdout = ();

let title = ();

let unmask = mask => ();

let uptime = () => ();

let version = ();

let versions = (); /* Exit codes */
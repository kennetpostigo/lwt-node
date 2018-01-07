# Contributing

![](https://media.giphy.com/media/dzaUX7CAG0Ihi/giphy.gif)

Hey! If you're here you probably want to help out! Thank you so much! Contributing to reason-node can mean many things:

* Ideas
* Documentation additions or fixes
* Questions
* Finding Bugs
* Helping with issues/answering questions
* Code

**To contribute code, there are a few options:**

* Implement a function from [Future.md](https://github.com/kennetpostigo/reason-node/blob/master/Future.md) that hasn't been implemented
* Claim an issue that fixes a bug
* Add tests for existing modules

**Proposal**

If you want to propose major changes to a module in reason-node (Path, Fs, etc.) open an issue prefixed with [proposal] and try to be thorough in explaining:

* Pain points with existing module
* The major change you want to make
* How making a major change would solve these pain points

**Implementing more node.js modules**

If you'd like to try your hand at adding other modules from node.js please open an issue, and let us know if you want to take lead in adding this module, as well as if you want to coordinate with others that might want to contribute. From there:

* Open a Pull request with a checklist of work needed to be done
* List who is working on what portions of the checklist
* Include tests as much as possible for the new module you are adding.
* Include corresponding interface file
* Include Documentation for the new module

## Project Overview

`reason-node` for the most part is a wrapper around the stdlib for the sync portions and lwt for the async portions. However there are some missing portions that aren't accounted for (path, http, etc.) in the stdlib or lwt. In those cases they are implemented seperately.

## Building and testing from source

**Install esy**

```
yarn global add esy@latest
```

**Install and build reason-node**
Within the reason-node directory then run:

```
esy install

esy build
```

**Run tests**

```
esy make test
```

**Running commands**
If you want to run commands that work directly on the project, you must always prefex them with
`esy x` in order to run the command in the sandboxed environment.

### Thank you

If you've gotten here and you still want to contribute, thank you so much! Giving your time to help a project is no small sacrifice and we are thankful for all the time you put forth in making this project better.

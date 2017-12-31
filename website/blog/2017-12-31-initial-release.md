---
title: Initial Release
author: Kennet Postigo
authorURL: http://twitter.com/kennetpostigo
authorFBID: 1370308025
---

![](/img/slash-introducing.png)

I am very happy to introduce [reason-node](https://github.com/kennetpostigo/reason-node) to help make native programming in reason easy and familiar.

I created reason-node for the following reasons:

1. Provide a way for reason developers to create native projects by emulating the node.js API that has been proven to be easy and intuitive.
2. Performance is priceless, while there are [bucklescript bindings to node.js](https://github.com/reasonml-community/bs-node) you will still have to pay for the node.js startup and execution cost. `reason-node` stays closer to the metal thanks to ocaml-opt.
3. OCaml native libraries either didn't have all the API's I was looking for, they used snake_case, or the documentation was lacking. So it was a bit frustrating to get started.
4. Lastly, I really loved node.js API and have used it for several years, and i'm sure many others that are moving from javascript to reason would appreciate being able to translate over some of their node.js knowledge base.

It's very early for `reason-node` and much of the API still needs to be fleshed out, so I'm hoping to get more of it out in the coming weeks/months, hopefully with the help of some contributors! Much of the next work is to make sure we provide the same defaults for example provide the same default file permissions to functions in FS that node.js uses, and get an HTTP module started.

`reason-node` has a strong value proposition for teams at companies that have adopted [reason](reasonml.github.io) and use [node.js](nodejs.org) – you get to keep the familiar node.js API, drop the start-up costs, gain a great type-system, and take advantage ocaml-opts performance. To make things better, organizing functions in the same manner as node.js does (path, fs, http, etc.) make it easier to find what you are looking for compared to the stdlib and hopefully we can provide prettier, clearer documentation with examples.

### How Does it work?

`reason-node` for the most part is a wrapper around the stdlib for the sync portions and lwt for the async portions. However there are some missing portions that aren't accounted for (path, http, etc.) in the stdlib or lwt. In those cases they are implemented seperately.

### Getting up and running

It's simple and fast to hit the ground running:

1. Check out the [installation instructions](https://kennetpostigo.github.io/reason-node/docs/installation.html)
2. clone the [starter project](https://github.com/kennetpostigo/reason-node-starter)

### Final Remarks

I hope people with try it out, add a comment [here]() if you try it out and dislike a specific part of it or just completely hate it. If you're reading this and aren't familiar with reason, you should really check it out!

* [Reason](https://reasonml.github.io/)
* Oh and theres react [ReasonReact](https://reasonml.github.io/reason-react)

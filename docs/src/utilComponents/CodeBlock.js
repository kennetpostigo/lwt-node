import React from "react";
import { Codehighlighter } from "rad-codehighlighter";
import Prism from "prismjs";
import "prismjs/components/prism-reason.min.js";
import "prismjs/plugins/line-numbers/prism-line-numbers.css";
import "./styles/CodeBlock.css";

function CodeBlock(props) {
  return (
    <Codehighlighter
      className="reasonCode"
      language="reason"
      plugins={[
        {
          title: "line-numbers"
        }
      ]}
    >
      {props.literal}
    </Codehighlighter>
  );
}

Prism.hooks.add("complete", function(env) {
  if (!env.code) {
    return;
  }
  var pre = env.element.parentNode;
  var clsReg = /\s*\bline-numbers\b\s*/;
  if (
    !pre ||
    !/pre/i.test(pre.nodeName) ||
    (!clsReg.test(pre.className) && !clsReg.test(env.element.className))
  ) {
    return;
  }

  if (env.element.querySelector(".line-numbers-rows")) {
    return;
  }

  if (clsReg.test(env.element.className)) {
    env.element.className = env.element.className.replace(clsReg, "");
  }
  if (!clsReg.test(pre.className)) {
    pre.className += " line-numbers";
  }

  var match = env.code.match(/\n(?!$)/g);
  var linesNum = match ? match.length + 1 : 1;
  var lineNumbersWrapper;

  var lines = new Array(linesNum + 1);
  lines = lines.join("<span></span>");

  lineNumbersWrapper = document.createElement("span");
  lineNumbersWrapper.setAttribute("aria-hidden", "true");
  lineNumbersWrapper.className = "line-numbers-rows";
  lineNumbersWrapper.innerHTML = lines;

  if (pre.hasAttribute("data-start")) {
    pre.style.counterReset =
      "linenumber " + (parseInt(pre.getAttribute("data-start"), 10) - 1);
  }

  env.element.appendChild(lineNumbersWrapper);
});

export default CodeBlock;

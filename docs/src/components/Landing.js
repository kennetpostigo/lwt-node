import React, { Component } from "react";
import { Link } from "react-router-dom";
import Logo from "./Logo";
import Nodes from "./Nodes";
import "./styles/Landing.css";
import Code from "./../utilComponents/CodeBlock";

class Landing extends Component {
  componentDidMount() {
    Nodes();
  }

  componentWillUnmount() {
    document.body.removeChild(document.getElementById("cvas"));
  }

  render() {
    return (
      <div className="landing">
        <div className="hero">
          <Logo />
          <p>A Node.js-like API for ReasonML</p>
          <div className="btn-container">
            <Link to="/api">
              <button className="btn">
                <p>API</p>
              </button>
            </Link>
            <a href="https://github.com/kennetpostigo/reason-node/tree/master/examples">
              <button className="btn">
                <p>Examples</p>
              </button>
            </a>
          </div>
        </div>
        <div className="quick-intro">
          <div className="subsection">
            <h4>Native Performance</h4>
            <p>
              Reason runs in the native environment, ocaml-opt provides blazing
              fast startup and execution.
            </p>
          </div>
          <div className="seperator" />
          <div className="subsection">
            <h4>Familiar API</h4>
            <p>
              The same Node.js API that you know and love, get started
              painlessly!
            </p>
          </div>
          <div className="seperator" />
          <div className="subsection">
            <h4>Fun Types</h4>
            <p>
              Reason provides a nice and fun type system, making writing and
              refactoring your code easy and fun!
            </p>
          </div>
        </div>
        <div className="example">
          <div>
            <h3>Quick Example</h3>
            <p>
              Here is a nice and simple example, we are creating a directory in
              our file-system.
            </p>
            <Link to="/api">
              <button className="btn">
                <p>See API</p>
              </button>
            </Link>
          </div>
          <div className="code-container">
            <Code>
              {`open ReasonNode;

Node.run {
  Fs.mkdir "testDirAsync0" 416 (Fs.(
    fun
    | Ok => print_string "Created Dir"
    | Err e => print_string "Error :("
    ) 
  );
};`}
            </Code>
          </div>
        </div>
      </div>
    );
  }
}

export default Landing;

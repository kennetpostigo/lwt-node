import React, { Component } from "react";
import { BrowserRouter as Router, Route } from "react-router-dom";
import asyncComponent from "./utilComponents/AsyncComponent.js";

const Landing = asyncComponent(() =>
  import("./components/Landing").then(
    module => module.default,
    err => console.log(err)
  )
);

const Api = asyncComponent(() =>
  import("./components/Api").then(
    module => module.default,
    err => console.log(err)
  )
);

class App extends Component {
  render() {
    return (
      <Router>
        <div>
          <Route exact path="/" component={Landing} />
          <Route exact path="/api" component={Api} />
          <Route path="/api/:module" component={Api} />
        </div>
      </Router>
    );
  }
}

export default App;

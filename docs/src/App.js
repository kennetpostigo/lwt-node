import React, { Component } from "react";
import { BrowserRouter as Router, Route, Switch } from "react-router-dom";
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
          <Switch>
            <Route exact path="/api" component={Api} />
            <Route exact path="/api/:module" component={Api} />
            <Route exact path="/api/:module/:section" component={Api} />
          </Switch>
        </div>
      </Router>
    );
  }
}

export default App;

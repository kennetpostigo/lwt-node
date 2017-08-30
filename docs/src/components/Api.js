import React from "react";
import NavDrawer from "./NavDrawer";
import Content from "./Content";
import "./styles/Api.css";

class Api extends React.Component {
  render() {
    return (
      <div className="api">
        <NavDrawer />
        <Content
          module={this.props.match.params.module}
          section={this.props.match.params.section}
        />
      </div>
    );
  }
}

export default Api;

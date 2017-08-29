import React from "react";
import NavDrawer from "./NavDrawer";
import Content from "./Content";
import "./styles/Api.css";

function Api(props) {
  return (
    <div className="api">
      <NavDrawer />
      <Content module={props.match.params.module} />
    </div>
  );
}

export default Api;

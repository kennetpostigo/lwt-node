import React from "react";

function H1(props) {
  return (
    <h1 className="lol" name={props.children} id={props.children}>
      {props.children}
    </h1>
  );
}

export default H1;

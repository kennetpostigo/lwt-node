import React from "react";

function H1(props) {
  return (
    <h1
      name={props.children}
      id={props.children}
      style={{
        cursor: "pointer",
        margin: "5px",
        textDecoration: "none",
        color: "black"
      }}
      onClick={() => {
        let el = document.getElementById(`${props.children}`);
        el.scrollIntoView();
      }}
    >
      {props.children}
    </h1>
  );
}

export default H1;

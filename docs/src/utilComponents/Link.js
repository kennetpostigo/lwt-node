import React from 'react';
import { Link as RLink } from 'react-router-dom';

function Link(props) {
  return (
    <RLink className="link normalize" to={props.href}>{props.children}</RLink>
  );
}

export default Link;

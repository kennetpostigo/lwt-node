import React from 'react';
import { Link } from 'react-router-dom';
import './styles/Card.css';

function Card(props) {
  return (
    <div className="card">
      <h3>{props.title}</h3>
      {props.children}
      <Link to={props.link}><p>Read More</p></Link>
    </div>
  );
}

export default Card;

import React from 'react';
import './styles/Edit.css';

function Edit({ match }) {
  console.log(match);
  return (
    <button className="edit">
      <a
        href={
          `https://github.com/kennetpostigo/RDN/tree/master/${match.params.category}/${match.params.technology}/${match.params.name}/${match.params.section ? match.params.section : match.params.content}`
        }
      >
        edit
      </a>
    </button>
  );
}

export default Edit;

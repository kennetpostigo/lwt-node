import React from 'react';
import ReactMarkdown from 'react-markdown';
import CodeBlock from './CodeBlock.js';
import Link from './Link.js';

function Markdown(props) {
  return (
    <ReactMarkdown
      source={props.md}
      renderers={Object.assign({}, ReactMarkdown.renderers, {
        CodeBlock,
        Link
      })}
    />
  );
}

export default Markdown;

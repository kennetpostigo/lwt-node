import React from "react";
import asyncMarkdown from "./../utilComponents/AsyncMarkdown";
// import md from "./../markdown/path.md";

const loadMd = m => {
  var Markdown = asyncMarkdown(() => {
    return import(`./../markdown/${m || "gettingStarted"}.md`).then(md =>
      fetch(md).then(res => res.text(), err => console.log(err))
    );
  });

  return <Markdown />;
};

function Content(props) {
  return (
    <div>
      {loadMd(props.module)}
    </div>
  );
}

export default Content;

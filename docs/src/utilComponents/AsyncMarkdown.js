import React, { Component } from 'react';
import Markdown from './Markdown.js';

function asyncMarkdown(getMarkdown) {
  return class AsyncMarkdown extends Component {
    constructor(props) {
      super(props);
      this.MD = null;
      this.state = { MD: AsyncMarkdown.MD };
    }

    componentWillMount() {
      if (!this.state.MD) {
        getMarkdown().then(MD => {
          AsyncMarkdown.MD = MD;
          this.setState(() => ({ MD }));
        });
      }
    }
    render() {
      const { MD } = this.state;
      if (MD) {
        return <Markdown md={MD} />;
      }
      return null;
    }
  };
}

export default asyncMarkdown;

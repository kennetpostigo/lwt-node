// Originally Authored by Andrew Clark @acdlite
import React, { Component } from 'react';

function asyncComponent(getComponent) {
  return class AsyncComponent extends Component {
    constructor(props) {
      super(props);
      this.Component = null;
      this.state = { Component: AsyncComponent.Component };
    }

    componentWillMount() {
      if (!this.state.Component) {
        getComponent().then(Component => {
          AsyncComponent.Component = Component;
          this.setState(() => ({ Component }));
        });
      }
    }
    render() {
      const { Component } = this.state;
      if (Component) {
        return <Component {...this.props} />;
      }
      return null;
    }
  };
}

export default asyncComponent;

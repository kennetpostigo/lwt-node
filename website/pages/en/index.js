const React = require("react");

const CompLibrary = require("../../core/CompLibrary.js");
const MarkdownBlock = CompLibrary.MarkdownBlock; /* Used to read markdown */
const Container = CompLibrary.Container;
const GridBlock = CompLibrary.GridBlock;
const siteConfig = require(process.cwd() + "/siteConfig.js");

function imgUrl(img) {
  return siteConfig.baseUrl + "img/" + img;
}

function docUrl(doc, language) {
  return siteConfig.baseUrl + "docs/" + (language ? language + "/" : "") + doc;
}

function pageUrl(page, language) {
  return siteConfig.baseUrl + (language ? language + "/" : "") + page;
}

class Button extends React.Component {
  render() {
    return (
      <div className="pluginWrapper buttonWrapper">
        <a className="button" href={this.props.href} target={this.props.target}>
          {this.props.children}
        </a>
      </div>
    );
  }
}

Button.defaultProps = {
  target: "_self"
};

const SplashContainer = props => (
  <div className="homeContainer hero">
    <div className="homeSplashFade">
      <div className="wrapper homeWrapper">{props.children}</div>
    </div>
  </div>
);

const Logo = props => (
  <div>
    <img src={props.img_src} />
  </div>
);

const ProjectTitle = props => (
  <h2 className="projectTitle">
    {siteConfig.title}
    <small>{siteConfig.tagline}</small>
  </h2>
);

const PromoSection = props => (
  <div className="section promoSection">
    <div className="promoRow">
      <div className="pluginRowBlock">{props.children}</div>
    </div>
  </div>
);

class HomeSplash extends React.Component {
  render() {
    let language = this.props.language || "";
    return (
      <SplashContainer>
        <Logo img_src={imgUrl("reasonNodeHero.svg")} />
        <div className="inner">
          <h2 className="projectTitle">
            <small>{siteConfig.tagline}</small>
          </h2>
          <PromoSection>
            <Button href="#try">Get Started</Button>
            <Button href={docUrl("whatWhy.html", language)}>Docs</Button>
          </PromoSection>
        </div>
      </SplashContainer>
    );
  }
}

const Block = props => (
  <Container
    padding={["bottom", "top"]}
    id={props.id}
    background={props.background}
  >
    <GridBlock align="center" contents={props.children} layout={props.layout} />
  </Container>
);

const Features = props => (
  <Block layout="threeColumn">
    {[
      {
        content:
          "Reason runs in the native environment, ocaml-opt provides blazing fast startup and execution.",
        imageAlign: "top",
        title: "Native Performance"
      },
      {
        content:
          "The same Node.js API that you know and love, get started painlessly!",
        imageAlign: "top",
        title: "Familiar API"
      },
      {
        content:
          "Reason provides a nice and fun type system, making writing and refactoring your code easy and fun!",
        imageAlign: "top",
        title: "Fun Types"
      }
    ]}
  </Block>
);

const pre = "```";
const code = "`";

const codeExample = `${pre}reason
open ReasonNode

Node.run(
  Fs.mkdir(
    "myDir", Fs.(
      fun
      | Ok => prerr_endline("Dir Created!"))
      | Err(e) => prerr_endline("Something went wrong")
    )
  )
);
${pre}`;

const QuickStart = props => (
  <div className="quickStart paddingBottom">
    <div>
      <h2>Quick Start</h2>
      <MarkdownBlock>{codeExample}</MarkdownBlock>
    </div>
  </div>
);

const Showcase = props => {
  if ((siteConfig.users || []).length === 0) {
    return null;
  }
  const showcase = siteConfig.users
    .filter(user => {
      return user.pinned;
    })
    .map((user, i) => {
      return (
        <a href={user.infoLink} key={i}>
          <img src={user.image} title={user.caption} />
        </a>
      );
    });

  return (
    <div className="productShowcaseSection paddingBottom">
      <h2>{"Who's Using This?"}</h2>
      <p>This project is used by all these people</p>
      <div className="logos">{showcase}</div>
      <div className="more-users">
        <a className="button" href={pageUrl("users.html", props.language)}>
          More {siteConfig.title} Users
        </a>
      </div>
    </div>
  );
};

class Index extends React.Component {
  componentDidMount() {
    nodes();
  }

  componentWillUnmount() {
    document.body.removeChild(document.getElementById("cvas"));
  }
  render() {
    let language = this.props.language || "";

    return (
      <div>
        {/* <script type="text/javascript" src={siteConfig.baseUrl + "nodes.js"} /> */}
        <HomeSplash language={language} />
        <div className="mainContainer">
          <div className="paddedContainer">
            <Features />
          </div>

          <QuickStart />
          {/* <Showcase language={language} /> */}
        </div>
      </div>
    );
  }
}

module.exports = Index;

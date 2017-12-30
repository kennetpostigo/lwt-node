const resaurus = require("resaurus");

const users = [
  {
    caption: "User1",
    image: "img/docusaurus.svg",
    infoLink: "https://www.facebook.com",
    pinned: true
  }
];

const siteConfig = {
  title: "Reason Node" /* title for your website */,
  tagline: "A Node.js-like API for ReasonML",
  url: "https://kennetpostigo.github.io/reason-node" /* your website url */,
  editUrl: "https://github.com/kennetpostigo/reason-node/tree/master/doc/",
  baseUrl: "/reason-node/" /* base url for your project */,
  organizationName: "kennetpostigo",
  projectName: "reason-node",
  headerLinks: [
    { doc: "installation", label: "Docs" },
    { doc: "doc4", label: "API" },
    { page: "help", label: "Help" },
    { blog: true, label: "Blog" }
  ],
  users,
  /* path to images for header/footer */
  headerIcon: "img/reasonNode.svg",
  footerIcon: "img/reasonNode.svg",
  favicon: "img/favicon.png",
  /* colors for website */
  colors: {
    primaryColor: "#FF7070",
    secondaryColor: "#ED5C5C"
  },
  // This copyright info is used in /core/Footer.js and blog rss/atom feeds.
  copyright: "Copyright © " + new Date().getFullYear() + "Reason Training",
  // organizationName: 'deltice', // or set an env variable ORGANIZATION_NAME
  // projectName: 'test-site', // or set an env variable PROJECT_NAME
  scripts: ["https://buttons.github.io/buttons.js"],
  // You may provide arbitrary config keys to be used as needed by your template.
  repoUrl: "https://github.com/kennetpostigo/reason-node"
};

module.exports = resaurus(siteConfig);

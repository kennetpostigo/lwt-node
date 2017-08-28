import React from 'react';
import {
  Navbar as RNavbar,
  Navbrand,
  NavItemsLeft,
  NavItemsCenter,
  NavItemsRight
} from 'rad-navbar';
import { Link } from 'react-router-dom';
import Logo from './../../assets/Logo.png';
import './styles/Navbar.css';

function Navbar(props) {
  return (
    <RNavbar height={80} className="nav" breakPoint={1}>
      <NavItemsCenter>
        <div className="center">
          <Link to="/">
            <img className="nav-brand" src={Logo} />
          </Link>
          <div className="nav-options">
            <input
              className="nav-input"
              type="input"
              placeholder="Search RDN"
            />
            <button className="nav-btn">Q</button>
            <div className="nav-selection">
              <Link to="/"><p>Reason</p></Link>
              <Link to="/toolchain"><p>Toolchain</p></Link>
              <Link to="/community"><p>Community</p></Link>
            </div>
          </div>
        </div>
      </NavItemsCenter>
    </RNavbar>
  );
}

export default Navbar;

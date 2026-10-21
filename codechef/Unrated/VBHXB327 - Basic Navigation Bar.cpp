===FILENAME:frontend/src/App.jsx===
import { BrowserRouter as Router } from 'react-router-dom';
import Navbar from './components/Navbar';


import './App.css';  

function App() {
    return (
        <Router>
            <Navbar />
        </Router>
    );
}

export default App;
===FILENAME:frontend/src/components/Navbar.css===
.navbar {
    display: flex;
    justify-content: space-between;
    align-items: center;
    background-color: #333;
    padding: 10px 20px;
    color: white;
}

===FILENAME:frontend/src/components/Navbar.jsx===
import { Link } from 'react-router-dom';
import './Navbar.css';

const Navbar = () => {
    return (
            <nav className="navbar">
                        <div className="navbar-left">
                                        <Link to="/" className="navbar-brand">
                                                            MERN Blog
                                                                            </Link>
                                                                                        </div>
                                                                                                    <div className="navbar-right">
                                                                                                                    <Link to="/login" className="nav-link">
                                                                                                                                        Login
                                                                                                                                                        </Link>
                                                                                                                                                                        <Link to="/register" className="nav-link">
                                                                                                                                                                                            Create Account
                                                                                                                                                                                                            </Link>
                                                                                                                                                                                                                        </div>
                                                                                                                                                                                                                                </nav>
                                                                                                                                                                                                                                    );
                                                                                                                                                                                                                                    };

                                                                                                                                                                                                                                    export default Navbar;
===FILENAME:src/App.jsx===

import { useState } from 'react';
import './App.css';
import Layout from './components/Layout';
import UserContext from './UserContext';
import ThemeContext from './ThemeContext';

function App() {
  const [theme, setTheme] = useState('light');

    const [user] = useState({ name: 'Sarah' });

      const toggleTheme = () => {
          setTheme((currentTheme) =>
                currentTheme === 'light' ? 'dark' : 'light'
                    );
                      };

                        return (
                            <UserContext.Provider value={user}>
                                  <ThemeContext.Provider value={{ theme, toggleTheme }}>
                                          <div className={`app ${theme}`}>
                                                    <Layout />
                                                            </div>
                                                                  </ThemeContext.Provider>
                                                                      </UserContext.Provider>
                                                                        );
                                                                        }

                                                                        export default App;
                                                                        
===FILENAME:src/components/Greeting.jsx===

import { useContext } from 'react';
import UserContext from '../UserContext';

function Greeting() {
  const user = useContext(UserContext);

    return (
        <div className="greeting">
              <h2>Hi, {user.name}!</h2>
                    <p>Welcome back to the course portal.</p>
                        </div>
                          );
                          }

                          export default Greeting;
                          
===FILENAME:src/components/Header.jsx===

import { useContext } from 'react';
import ThemeContext from '../ThemeContext';

function Header() {
  const { theme, toggleTheme } = useContext(ThemeContext);

    return (
        <div className="header">
              <h1>Learning Platform</h1>

                    <button onClick={toggleTheme}>
                            {theme === 'light'
                                      ? 'Switch to Dark Mode'
                                                : 'Switch to Light Mode'}
                                                      </button>
                                                          </div>
                                                            );
                                                            }

                                                            export default Header;
                                                            
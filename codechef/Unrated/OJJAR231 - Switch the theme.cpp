===FILENAME:src/Header.jsx===

import React from 'react';
import { useTheme } from './ThemeContext';

function Header() {
  const { theme, toggleTheme } = useTheme();

    const styles = {
        padding: '1rem',
            display: 'flex',
                justifyContent: 'space-between',
                    alignItems: 'center',
                        backgroundColor: theme === 'light' ? '#eee' : '#333',
                            color: theme === 'light' ? '#000' : '#fff',
                              };

                                return (
                                    <header style={styles}>
                                          <h1>Theme Switcher</h1>

                                                <button onClick={toggleTheme}>
                                                        {theme === 'light'
                                                                  ? 'Switch to Dark Mode'
                                                                            : 'Switch to Light Mode'}
                                                                                  </button>
                                                                                      </header>
                                                                                        );
                                                                                        }

                                                                                        export default Header;
                                                                                        
===FILENAME:src/ThemeContext.jsx===

import React, { createContext, useState, useContext } from 'react';

const ThemeContext = createContext();

export function ThemeProvider({ children }) {
  const [theme, setTheme] = useState('light');

    const toggleTheme = () => {
        setTheme((currentTheme) =>
              currentTheme === 'light' ? 'dark' : 'light'
                  );
                    };

                      return (
                          <ThemeContext.Provider value={{ theme, toggleTheme }}>
                                {children}
                                    </ThemeContext.Provider>
                                      );
                                      }

                                      export function useTheme() {
                                        const context = useContext(ThemeContext);

                                          if (!context) {
                                              throw new Error('useTheme must be used within a ThemeProvider');
                                                }

                                                  return context;
                                                  }
                                                  
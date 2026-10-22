===FILENAME:src/App.jsx===

import { useState, useEffect } from "react";

function WindowTracker() {
  const [windowSize, setWindowSize] = useState({
      width: window.innerWidth,
          height: window.innerHeight
            });

              useEffect(() => {
                  const handleResize = () => {
                        setWindowSize({
                                width: window.innerWidth,
                                        height: window.innerHeight
                                              });
                                                  };

                                                      window.addEventListener("resize", handleResize);

                                                          return () => {
                                                                window.removeEventListener("resize", handleResize);
                                                                    };
                                                                      }, []);

                                                                        return (
                                                                            <div>
                                                                                  <h2>Window Size Tracker</h2>
                                                                                        <p>Width: {windowSize.width}px</p>
                                                                                              <p>Height: {windowSize.height}px</p>
                                                                                                  </div>
                                                                                                    );
                                                                                                    }

                                                                                                    export default function App() {
                                                                                                      const [showTracker, setShowTracker] = useState(true);

                                                                                                        return (
                                                                                                            <div>
                                                                                                                  <button onClick={() => setShowTracker(!showTracker)}>
                                                                                                                          Toggle Window Tracker
                                                                                                                                </button>

                                                                                                                                      {showTracker && <WindowTracker />}
                                                                                                                                          </div>
                                                                                                                                            );
                                                                                                                                            }
                                                                                                                                            
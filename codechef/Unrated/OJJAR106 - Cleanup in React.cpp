===FILENAME:src/App.jsx===
import React, { useState, useEffect } from 'react';

function Timer() {
    const [count, setCount] = useState(0);

        useEffect(() => {
                const timerID = setInterval(() => {
                            setCount(c => c + 1);
                                    }, 1000);

                                            // Cleanup function to clear interval when component unmounts
                                                    return () => {
                                                                clearInterval(timerID);
                                                                        };
                                                                            }, []);

                                                                                return <h2>Count: {count}</h2>;
                                                                                }

                                                                                export default function App() {
                                                                                    const [showTimer, setShowTimer] = useState(true);

                                                                                        return (
                                                                                                <div>
                                                                                                            <button onClick={() => setShowTimer(!showTimer)}>
                                                                                                                            Toggle Timer
                                                                                                                                        </button>
                                                                                                                                                    {showTimer && <Timer />}
                                                                                                                                                            </div>
                                                                                                                                                                );
                                                                                                                                                                }
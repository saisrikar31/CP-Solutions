===FILENAME:src/App.jsx===
import React, { useState, useEffect } from "react";

export function LightSwitch() {
    const [isOn, setIsOn] = useState(false);

        useEffect(() => {
                const handleKeyPress = (e) => {
                            if (e.code === 'KeyL') {
                                            // Use functional updater to avoid stale state closure
                                                            setIsOn((prevIsOn) => !prevIsOn);
                                                                        }
                                                                                };

                                                                                        window.addEventListener('keydown', handleKeyPress);

                                                                                                return () => window.removeEventListener('keydown', handleKeyPress);
                                                                                                    }, []);

                                                                                                        return (
                                                                                                                <div>
                                                                                                                            <button onClick={() => setIsOn((prevIsOn) => !prevIsOn)}>
                                                                                                                                            Toggle Light (Button)
                                                                                                                                                        </button>
                                                                                                                                                                    <p>
                                                                                                                                                                                    Light is {isOn ? "ON 🌟" : "OFF 🌑"}
                                                                                                                                                                                                </p>
                                                                                                                                                                                                            <small>Press "L" key to toggle!</small>
                                                                                                                                                                                                                    </div>
                                                                                                                                                                                                                        );
                                                                                                                                                                                                                        }

                                                                                                                                                                                                                        export default function App() {
                                                                                                                                                                                                                            return <LightSwitch />;
                                                                                                                                                                                                                            }
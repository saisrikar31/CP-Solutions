===FILENAME:src/App.jsx===
import React, { useState } from "react";

export default function App() {
    const [value, setValue] = useState("");

        const handleGenerateRandom = () => {
                const randomStr = Math.random().toString(36).substring(2, 8);
                        setValue(randomStr);
                            };

                                return (
                                        <div>
                                                    <input
                                                                    type="text"
                                                                                    value={value}
                                                                                                    onChange={(e) => setValue(e.target.value)}
                                                                                                                    placeholder="Type here..."
                                                                                                                                />
                                                                                                                                            <button onClick={handleGenerateRandom}>
                                                                                                                                                            Generate Random String
                                                                                                                                                                        </button>
                                                                                                                                                                                    <p>Live Display: {value}</p>
                                                                                                                                                                                            </div>
                                                                                                                                                                                                );
                                                                                                                                                                                                }
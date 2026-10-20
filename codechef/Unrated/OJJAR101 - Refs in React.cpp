===FILENAME:src/App.jsx===
import { useState, useRef } from 'react';
import './App.css';

function FocusManager() {
    const [isFocused, setIsFocused] = useState(false);
        const inputRef = useRef(null);

            const handleFocus = () => {
                    inputRef.current?.focus();
                            setIsFocused(true);
                                };

                                    const handleBlur = () => {
                                            inputRef.current?.blur();
                                                    setIsFocused(false);
                                                        };

                                                            return (
                                                                    <div className="container">
                                                                                <input
                                                                                                ref={inputRef}
                                                                                                                type="text"
                                                                                                                                className={`input-field ${isFocused ? 'input-focused' : ''}`}
                                                                                                                                                placeholder="Click buttons to focus/blur"
                                                                                                                                                            />
                                                                                                                                                                        <button onClick={handleFocus}>Focus Input</button>
                                                                                                                                                                                    <button onClick={handleBlur}>Blur Input</button>
                                                                                                                                                                                            </div>
                                                                                                                                                                                                );
                                                                                                                                                                                                }

                                                                                                                                                                                                export default FocusManager;
===FILENAME:src/App.jsx===
import React from "react";

function TextInput({ id, label, type = "text" }) {
    // Call useId at the top level unconditionally
        const generatedId = React.useId();
            
                // Choose between the provided id or the generated one
                    const appliedId = id || generatedId;

                        return (
                                <div className="text-input">
                                            <label htmlFor={appliedId}>{label}</label>
                                                        <input id={appliedId} type={type} className="input-field" />
                                                                </div>
                                                                    );
                                                                    }

                                                                    export default function App() {
                                                                        return <TextInput id="input-id" label="Enter Text:" />;
                                                                        }
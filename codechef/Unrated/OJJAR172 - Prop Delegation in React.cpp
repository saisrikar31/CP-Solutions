===FILENAME:src/CustomInput.jsx===

import React from 'react';
import './App.css';

function CustomInput({ label, id, ...inputProps }) {
  const generatedId = React.useId();
    const finalId = id || generatedId;

      return (
          <div className="custom-input">
                <label htmlFor={finalId}>{label}</label>
                      <input
                              id={finalId}
                                      {...inputProps}
                                            />
                                                </div>
                                                  );
                                                  }

                                                  export default CustomInput;
                                                  
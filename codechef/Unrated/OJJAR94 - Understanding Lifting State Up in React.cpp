===FILENAME:src/App.jsx===
import React, { useState } from 'react';

// Child Component: Controlled by parent via props
function TextInput({ value, onChange }) {
  return <input value={value} onChange={onChange} />;
}

// Parent Component: Holds state and updates children
function App() {
  const [sharedText, setSharedText] = useState('');

  const handleTextChange = (event) => {
    setSharedText(event.target.value);
  };

  return (
    <div>
      <h2>Type in either box:</h2>
      <TextInput value={sharedText} onChange={handleTextChange} />
      <br />
      <TextInput value={sharedText} onChange={handleTextChange} />
      <p>Current Shared Text: {sharedText}</p>
    </div>
  );
}

export default App;
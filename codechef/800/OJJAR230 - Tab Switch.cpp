===FILENAME:src/App.jsx===

import { useState } from 'react';
import Tab from './Tab.jsx';

const App = () => {
  const [activeTab, setActiveTab] = useState('Frontend');

    const renderContent = () => {
        switch (activeTab) {
              case 'Frontend':
                      return <p>This is the Frontend Project section.</p>;
                            case 'Backend':
                                    return <p>This is the Backend Project section.</p>;
                                          case 'Full Stack':
                                                  return <p>This is the Full Stack Project section.</p>;
                                                        default:
                                                                return null;
                                                                    }
                                                                      };

                                                                        return (
                                                                            <div style={{ padding: '20px', fontFamily: 'Arial' }}>
                                                                                  <h1>React Challenge: Tab Switcher</h1>

                                                                                        <div style={{ display: 'flex', gap: '10px' }}>
                                                                                                <Tab label="Frontend" activeTab={activeTab} setActiveTab={setActiveTab} />
                                                                                                        <Tab label="Backend" activeTab={activeTab} setActiveTab={setActiveTab} />
                                                                                                                <Tab label="Full Stack" activeTab={activeTab} setActiveTab={setActiveTab} />
                                                                                                                      </div>

                                                                                                                            <hr />
                                                                                                                                  {renderContent()}
                                                                                                                                      </div>
                                                                                                                                        );
                                                                                                                                        };

                                                                                                                                        export default App;
                                                                                                                                        
===FILENAME:src/Tab.jsx===

const Tab = ({ label, activeTab, setActiveTab }) => {
  const isActive = activeTab === label;

    return (
        <button
              onClick={() => setActiveTab(label)}
                    style={{
                            padding: '10px 20px',
                                    cursor: 'pointer',
                                            backgroundColor: isActive ? '#333' : '#eee',
                                                    color: isActive ? '#fff' : '#000',
                                                            border: 'none',
                                                                    borderRadius: '5px',
                                                                            fontWeight: isActive ? 'bold' : 'normal',
                                                                                  }}
                                                                                      >
                                                                                            {label}
                                                                                                </button>
                                                                                                  );
                                                                                                  };

                                                                                                  export default Tab;
                                                                                                  
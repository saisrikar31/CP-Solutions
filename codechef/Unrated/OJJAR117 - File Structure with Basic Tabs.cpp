===FILENAME:src/App.jsx===
import Tabs from './Tabs';  
import './App.css';       

function App() {
  // complete the code 
  return (
   <div className="App">
                <h1>Job Application Form</h1>
                                  <Tabs />
                                                        </div>
  );
}

export default App;
===FILENAME:src/Tabs.jsx===
import React from 'react';

function Tabs() {
    return (
            <div className="tabs-container">
                        <div className="tab-headers">
                                        <span>Tab 1 Header</span>
                                                    </div>
                                                                
                                                                            <div className="tab-content">
                                                                                            <p>Tab Content Will Appear Here</p>
                                                                                                        </div>
                                                                                                                    
                                                                                                                                <div className="tab-navigation">
                                                                                                                                                <button>Previous</button>
                                                                                                                                                                <button>Next</button>
                                                                                                                                                                            </div>
                                                                                                                                                                                    </div>
                                                                                                                                                                                        );
                                                                                                                                                                                        }

                                                                                                                                                                                        export default Tabs;
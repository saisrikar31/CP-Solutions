===FILENAME:src/App.jsx===

import { useState } from 'react';
import './App.css';

function getEmptyBoard() {
  return [
      [0, 0, 0, 0],
          [0, 0, 0, 0],
              [0, 0, 0, 0],
                  [0, 0, 0, 0]
                    ];
                    }

                    function App() {
                      const [board, setBoard] = useState(getEmptyBoard());

                        return (
                            <div className="container">
                                  <div className="board">
                                          {board.map((row, rowIndex) => (
                                                    <div className="row" key={rowIndex}>
                                                                {row.map((cell, cellIndex) => (
                                                                              <div className="cell" key={cellIndex}>
                                                                                              {cell === 0 ? '' : cell}
                                                                                                            </div>
                                                                                                                        ))}
                                                                                                                                  </div>
                                                                                                                                          ))}
                                                                                                                                                </div>
                                                                                                                                                    </div>
                                                                                                                                                      );
                                                                                                                                                      }

                                                                                                                                                      export default App;
                                                                                                                                                      
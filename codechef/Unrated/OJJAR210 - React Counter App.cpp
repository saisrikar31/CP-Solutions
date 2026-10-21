===FILENAME:src/App.jsx===

import { useState, useRef, useEffect } from 'react';
import styles from './styles.module.css';

function App() {
  const [count, setCount] = useState(0);
    const [flingMessage, setFlingMessage] = useState('');
      const [flingKey, setFlingKey] = useState(0);
        const flingTimeoutRef = useRef(null);

          const handleIncrement = (amount) => {
              setCount((prevCount) => prevCount + amount);
                  setFlingMessage(`+${amount}`);
                      setFlingKey((prevKey) => prevKey + 1);

                          if (flingTimeoutRef.current) {
                                clearTimeout(flingTimeoutRef.current);
                                    }

                                        flingTimeoutRef.current = setTimeout(() => {
                                              setFlingMessage('');
                                                  }, 1000);
                                                    };

                                                      useEffect(() => {
                                                          return () => {
                                                                if (flingTimeoutRef.current) {
                                                                        clearTimeout(flingTimeoutRef.current);
                                                                              }
                                                                                  };
                                                                                    }, []);

                                                                                      return (
                                                                                          <div className={styles.container}>
                                                                                                <h1>React Counter</h1>

                                                                                                      <div className={styles.counter}>
                                                                                                              <h2>{count}</h2>

                                                                                                                      {flingMessage && (
                                                                                                                                <div
                                                                                                                                            key={flingKey}
                                                                                                                                                        className={styles.fling}
                                                                                                                                                                  >
                                                                                                                                                                              {flingMessage}
                                                                                                                                                                                        </div>
                                                                                                                                                                                                )}
                                                                                                                                                                                                      </div>

                                                                                                                                                                                                            <div className={styles.buttons}>
                                                                                                                                                                                                                    <button onClick={() => handleIncrement(1)}>+1</button>
                                                                                                                                                                                                                            <button onClick={() => handleIncrement(5)}>+5</button>
                                                                                                                                                                                                                                    <button onClick={() => handleIncrement(10)}>+10</button>
                                                                                                                                                                                                                                          </div>
                                                                                                                                                                                                                                              </div>
                                                                                                                                                                                                                                                );
                                                                                                                                                                                                                                                }

                                                                                                                                                                                                                                                export default App;
                                                                                                                                                                                                                                                
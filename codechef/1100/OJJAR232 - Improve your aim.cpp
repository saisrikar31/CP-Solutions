===FILENAME:src/App.jsx===

import { useState, useEffect, useRef } from 'react';
import './App.css';

// Utility function to get random position for a circle
const getRandomPosition = () => {
  const x = Math.floor(Math.random() * 90);
    const y = Math.floor(Math.random() * 80);
      return { x, y };
      };

      function App() {
        const [circles, setCircles] = useState([]);
          const [score, setScore] = useState(0);
            const [timeLeft, setTimeLeft] = useState(10);

              const intervalRef = useRef(null);
                const nextIdRef = useRef(0);

                  // Generate circles every second while the game is active
                    useEffect(() => {
                        if (timeLeft === 0) {
                              return;
                                  }

                                      const generateCircle = () => {
                                            const position = getRandomPosition();

                                                  const newCircle = {
                                                          id: nextIdRef.current++,
                                                                  x: position.x,
                                                                          y: position.y,
                                                                                };

                                                                                      setCircles((prevCircles) => [...prevCircles, newCircle]);

                                                                                            // Remove the circle automatically after one second
                                                                                                  setTimeout(() => {
                                                                                                          setCircles((prevCircles) =>
                                                                                                                    prevCircles.filter((circle) => circle.id !== newCircle.id)
                                                                                                                            );
                                                                                                                                  }, 1000);
                                                                                                                                      };

                                                                                                                                          intervalRef.current = setInterval(generateCircle, 1000);

                                                                                                                                              return () => {
                                                                                                                                                    clearInterval(intervalRef.current);
                                                                                                                                                        };
                                                                                                                                                          }, [timeLeft]);

                                                                                                                                                            // Countdown timer
                                                                                                                                                              useEffect(() => {
                                                                                                                                                                  if (timeLeft === 0) {
                                                                                                                                                                        setCircles([]);
                                                                                                                                                                              return;
                                                                                                                                                                                  }

                                                                                                                                                                                      const timer = setInterval(() => {
                                                                                                                                                                                            setTimeLeft((prevTime) => Math.max(prevTime - 1, 0));
                                                                                                                                                                                                }, 1000);

                                                                                                                                                                                                    return () => clearInterval(timer);
                                                                                                                                                                                                      }, [timeLeft]);

                                                                                                                                                                                                        // Handle circle clicks
                                                                                                                                                                                                          const handleCircleClick = (id) => {
                                                                                                                                                                                                              setScore((prevScore) => prevScore + 1);

                                                                                                                                                                                                                  setCircles((prevCircles) =>
                                                                                                                                                                                                                        prevCircles.filter((circle) => circle.id !== id)
                                                                                                                                                                                                                            );
                                                                                                                                                                                                                              };

                                                                                                                                                                                                                                return (
                                                                                                                                                                                                                                    <div className="game-container">
                                                                                                                                                                                                                                          <h1>Improve Your Aim</h1>

                                                                                                                                                                                                                                                <h2>Score: {score}</h2>
                                                                                                                                                                                                                                                      <h3>Time Left: {timeLeft}s</h3>

                                                                                                                                                                                                                                                            <div className="game-area">
                                                                                                                                                                                                                                                                    {circles.map((circle) => (
                                                                                                                                                                                                                                                                              <div
                                                                                                                                                                                                                                                                                          key={circle.id}
                                                                                                                                                                                                                                                                                                      data-testid="circle"
                                                                                                                                                                                                                                                                                                                  className="circle"
                                                                                                                                                                                                                                                                                                                              onClick={() => handleCircleClick(circle.id)}
                                                                                                                                                                                                                                                                                                                                          style={{
                                                                                                                                                                                                                                                                                                                                                        position: 'absolute',
                                                                                                                                                                                                                                                                                                                                                                      left: `${circle.x}%`,
                                                                                                                                                                                                                                                                                                                                                                                    top: `${circle.y}%`,
                                                                                                                                                                                                                                                                                                                                                                                                }}
                                                                                                                                                                                                                                                                                                                                                                                                          />
                                                                                                                                                                                                                                                                                                                                                                                                                  ))}
                                                                                                                                                                                                                                                                                                                                                                                                                        </div>

                                                                                                                                                                                                                                                                                                                                                                                                                              {timeLeft === 0 && (
                                                                                                                                                                                                                                                                                                                                                                                                                                      <h2 className="end-msg">
                                                                                                                                                                                                                                                                                                                                                                                                                                                Game Over! Final Score: {score}
                                                                                                                                                                                                                                                                                                                                                                                                                                                        </h2>
                                                                                                                                                                                                                                                                                                                                                                                                                                                              )}
                                                                                                                                                                                                                                                                                                                                                                                                                                                                  </div>
                                                                                                                                                                                                                                                                                                                                                                                                                                                                    );
                                                                                                                                                                                                                                                                                                                                                                                                                                                                    }

                                                                                                                                                                                                                                                                                                                                                                                                                                                                    export default App;
                                                                                                                                                                                                                                                                                                                                                                                                                                                                    
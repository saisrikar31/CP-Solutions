===FILENAME:src/App.jsx===

import { useState } from "react";

function App() {
  const [tasks, setTasks] = useState([]);

    function addTask(newTask) {
        if (!newTask || newTask.trim() === "") return;
            setTasks((prevTasks) => [...prevTasks, newTask.trim()]);
              }

                function removeTask(indexToRemove) {
                    setTasks((prevTasks) =>
                          prevTasks.filter((_, index) => index !== indexToRemove)
                              );
                                }

                                  return (
                                      <div style={{ padding: "20px", fontFamily: "sans-serif" }}>
                                            <h2>To-Do List</h2>
                                                  <TaskInput addTask={addTask} />
                                                        <TaskList tasks={tasks} removeTask={removeTask} />
                                                            </div>
                                                              );
                                                              }

                                                              function TaskInput({ addTask }) {
                                                                const [inputValue, setInputValue] = useState("");

                                                                  function handleAdd() {
                                                                      addTask(inputValue);
                                                                          setInputValue("");
                                                                            }

                                                                              return (
                                                                                  <div>
                                                                                        <input
                                                                                                type="text"
                                                                                                        placeholder="Enter a task..."
                                                                                                                value={inputValue}
                                                                                                                        onChange={(e) => setInputValue(e.target.value)}
                                                                                                                              />
                                                                                                                                    <button onClick={handleAdd}>Add</button>
                                                                                                                                        </div>
                                                                                                                                          );
                                                                                                                                          }

                                                                                                                                          function TaskList({ tasks, removeTask }) {
                                                                                                                                            return (
                                                                                                                                                <ul style={{ listStyle: "none", padding: 0, marginTop: "20px" }}>
                                                                                                                                                      {tasks.map((task, index) => (
                                                                                                                                                              <li key={index} style={{ marginBottom: "10px" }}>
                                                                                                                                                                        <span style={{ marginRight: "10px" }}>{task}</span>
                                                                                                                                                                                  <button onClick={() => removeTask(index)}>Remove</button>
                                                                                                                                                                                          </li>
                                                                                                                                                                                                ))}
                                                                                                                                                                                                    </ul>
                                                                                                                                                                                                      );
                                                                                                                                                                                                      }

                                                                                                                                                                                                      export default App;
                                                                                                                                                                                                      
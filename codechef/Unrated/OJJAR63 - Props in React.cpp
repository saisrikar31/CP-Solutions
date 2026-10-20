===FILENAME:src/App.jsx===
// UserProfile component: A reusable component to display user information
function UserProfile(props) {
    return (
            <div>
                        <h2>User Profile:</h2>
                                    <p>Name: {props.name}</p>
                                                <p>Age: {props.age}</p>
                                                        </div>
                                                            );
                                                            }

                                                            // App component: Renders multiple UserProfile components with different data
                                                            function App() {
                                                                return (
                                                                        <div>
                                                                                    <UserProfile name="Alice" age={25} />
                                                                                                <UserProfile name="Bob" age={30} />
                                                                                                        </div>
                                                                                                            );
                                                                                                            }

                                                                                                            export default App; // Exporting the App component for use in the application
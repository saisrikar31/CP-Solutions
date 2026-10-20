===FILENAME:src/App.jsx===
import React from 'react';

export function ProfileCard({ name, bio, avatarUrl }) {
    const cardStyle = {
            border: "2px solid #333",
                    padding: "20px",
                            borderRadius: "10px",
                                    width: "250px",
                                            textAlign: "center",
                                                    boxShadow: "2px 2px 10px rgba(0,0,0,0.1)",
                                                            margin: "20px auto"
                                                                };

                                                                    const headingStyle = {
                                                                            color: "blue",
                                                                                    fontSize: "20px"
                                                                                        };

                                                                                            const avatarStyle = {
                                                                                                    width: "100px",
                                                                                                            height: "100px",
                                                                                                                    borderRadius: "50%",
                                                                                                                            marginBottom: "10px"
                                                                                                                                };

                                                                                                                                    return (
                                                                                                                                            <div style={cardStyle}>
                                                                                                                                                        <img src={avatarUrl} alt={`${name}'s avatar`} style={avatarStyle} />
                                                                                                                                                                    <h2 style={headingStyle}>{name}</h2>
                                                                                                                                                                                <p>{bio}</p>
                                                                                                                                                                                        </div>
                                                                                                                                                                                            );
                                                                                                                                                                                            }

                                                                                                                                                                                            export function App() {
                                                                                                                                                                                                return (
                                                                                                                                                                                                        <div>
                                                                                                                                                                                                                    <ProfileCard 
                                                                                                                                                                                                                                    name="Jane Doe" 
                                                                                                                                                                                                                                                    bio="Software Engineer & Web Developer" 
                                                                                                                                                                                                                                                                    avatarUrl="https://via.placeholder.com/100" 
                                                                                                                                                                                                                                                                                />
                                                                                                                                                                                                                                                                                        </div>
                                                                                                                                                                                                                                                                                            );
                                                                                                                                                                                                                                                                                            }

                                                                                                                                                                                                                                                                                            export default App;
===FILENAME:index.js===

const express = require('express');
const path = require('path');

const app = express();
const port = 3000;

// Parse form data
app.use(express.urlencoded({ extended: false }));

// Parse JSON data
app.use(express.json());

// Serve static files from public directory
app.use(express.static(path.join(__dirname, 'public')));

// Handle form submissions
app.post('/add-todo-form', (req, res) => {
    const task = req.body.task;

        console.log('Form To-Do received:');
            console.log({ task });

                res.send('To-Do added!');
                });

                // Handle JSON submissions
                app.post('/add-todo-json', (req, res) => {
                    const task = req.body.task;

                        console.log('JSON To-Do received:');
                            console.log({ task });

                                res.json({ message: 'To-Do added!' });
                                });

                                // Start the server
                                app.listen(port, () => {
                                    console.log(`Server listening on port ${port}`);
                                    });
                                    
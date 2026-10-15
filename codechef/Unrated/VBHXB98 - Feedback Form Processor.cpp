===FILENAME:index.js===

const express = require('express');
const path = require('path');

const app = express();

// Middleware to parse URL-encoded form data
app.use(express.urlencoded({ extended: false }));

// Middleware to parse JSON data
app.use(express.json());

// Serve static files
app.use(express.static(path.join(__dirname, 'public')));

// Handle form feedback
app.post('/submit-feedback-form', (req, res) => {
    console.log('Form data received:');
        console.log(req.body);
            res.send('Feedback form data received!');
            });

            // Handle JSON feedback
            app.post('/submit-feedback-json', (req, res) => {
                console.log('JSON data received:');
                    console.log(req.body);
                        res.json({ message: 'Feedback JSON data received!' });
                        });

                        // Start the server
                        const PORT = 3000;

                        app.listen(PORT, () => {
                            console.log(`Server listening on port ${PORT}`);
                            });
                            
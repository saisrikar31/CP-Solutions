===FILENAME:index.js===

const express = require('express');
const app = express();

// Middleware to parse JSON request bodies
app.use(express.json());

app.post('/contact', (req, res) => {
    const { name, email, message } = req.body;

        // Check required fields
            if (!name || !email || !message) {
                    return res.status(400).send(
                                'Name, email, and message are required.'
                                        );
                                            }

                                                // Check name and message are non-empty strings
                                                    if (
                                                            typeof name !== 'string' ||
                                                                    typeof message !== 'string' ||
                                                                            name.trim() === '' ||
                                                                                    message.trim() === ''
                                                                                        ) {
                                                                                                return res.status(400).send(
                                                                                                            'Name and message must be non-empty strings.'
                                                                                                                    );
                                                                                                                        }

                                                                                                                            // Validate email
                                                                                                                                if (
                                                                                                                                        typeof email !== 'string' ||
                                                                                                                                                !email.includes('@')
                                                                                                                                                    ) {
                                                                                                                                                            return res.status(400).send('Invalid email format.');
                                                                                                                                                                }

                                                                                                                                                                    // All checks passed
                                                                                                                                                                        console.log('Received data:', { name, email, message });
                                                                                                                                                                            res.send('Data received successfully!');
                                                                                                                                                                            });

                                                                                                                                                                            app.listen(8080, () => {
                                                                                                                                                                                console.log('Server listening on port 8080');
                                                                                                                                                                                });
                                                                                                                                                                                
===FILENAME:index.js===

const express = require('express');
const app = express();
const port = 3000;

const routeCounts = {};

const requestCounter = (req, res, next) => {
    const route = req.path;

        if (!routeCounts[route]) {
                routeCounts[route] = 0;
                    }

                        routeCounts[route]++;

                            console.log(`Route: ${route}, Count: ${routeCounts[route]}`);

                                next();
                                };

                                // Apply middleware to the entire application
                                app.use(requestCounter);

                                // Home route
                                app.get('/', (req, res) => {
                                    res.send('Home Page');
                                    });

                                    // About route
                                    app.get('/about', (req, res) => {
                                        res.send('About Page');
                                        });

                                        // Start the server
                                        app.listen(port, () => {
                                            console.log(`Server listening on port ${port}`);
                                            });
                                            
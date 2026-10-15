===FILENAME:index.js===
// write your code here

const express = require('express');
const app = express();
const port = 3000;

// Middleware 1: Set the response message
const setMessage = (req, res, next) => {
    res.locals.message = 'Hello World';
        next();
        };

        // Middleware 2: Convert the message to uppercase
        const uppercaseMessage = (req, res, next) => {
            res.locals.message = res.locals.message.toUpperCase();
                next();
                };

                // Register middleware in order
                app.use(setMessage);
                app.use(uppercaseMessage);

                // Route handler
                app.get('/', (req, res) => {
                    res.send(res.locals.message);
                    });

                    // Start the server
                    app.listen(port, () => {
                        console.log(`Server listening on port ${port}`);
                        });
                        
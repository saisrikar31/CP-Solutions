===FILENAME:index.js===

const express = require('express');

const app = express();
const PORT = 3000;

// Home page route
app.get('/', (req, res) => {
    res.send('Welcome to the homepage!');
    });

    // Products page route
    app.get('/products', (req, res) => {
        res.send('Our products are coming soon!');
        });

        // Start server
        app.listen(PORT, () => {
            console.log(`Server is running on port ${PORT}`);
            });
            
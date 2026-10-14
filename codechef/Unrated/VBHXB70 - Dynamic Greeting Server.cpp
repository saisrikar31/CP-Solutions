===FILENAME:index.js===

const express = require('express');
const app = express();

const greeting = 'Hello, there!';

// GET route
app.get('/', (req, res) => {
    res.send(greeting);
    });

    // Start server
    app.listen(3000, () => {
        console.log('Server is running on port 3000');
        });
        

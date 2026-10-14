===FILENAME:index.js===

const express = require('express');

const app = express();
const PORT = 3000;

// Handle /hello route
app.get('/hello', (req, res) => {
    res.send(req.url);
    });

    // Start server
    app.listen(PORT, () => {
        console.log(`Server is running on port ${PORT}`);
        });
        
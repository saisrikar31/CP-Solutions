===FILENAME:index.js===

const express = require('express');

const app = express();
const PORT = 3000;

// Home page
app.get('/', (req, res) => {
    res.send('Welcome to our services page!');
    });
    
    // Web Development page
    app.get('/web', (req, res) => {
        res.send('We specialize in Web Development.');
        });
        
        // Mobile App Development page
        app.get('/mobile', (req, res) => {
            res.send('We also offer Mobile App Development.');
            });
            
            // Start server
            app.listen(PORT, () => {
                console.log(`Server is running on port ${PORT}`);
                });
                // write your code here.


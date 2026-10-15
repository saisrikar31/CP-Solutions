===FILENAME:server.js===

const express = require('express');
const path = require('path');
const fs = require('fs');

const app = express();
const PORT = process.env.PORT || 3000;

app.use(express.urlencoded({ extended: true }));

// Serve CSS and other static files
app.use(express.static(path.join(__dirname, 'public')));

// Configure EJS
app.set('view engine', 'ejs');
app.set('views', path.join(__dirname, 'views'));

// Create notes folder if it does not exist
const notesDir = path.join(__dirname, 'notes');

if (!fs.existsSync(notesDir)) {
    fs.mkdirSync(notesDir, { recursive: true });
    }

    // Home route
    app.get('/', (req, res) => {
        res.render('index');
        });

        // Start server
        app.listen(PORT, () => {
            console.log(`Server running at http://localhost:${PORT}`);
            });
            
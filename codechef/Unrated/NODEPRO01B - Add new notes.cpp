===FILENAME:routes/notes.js===

const express = require('express');
const fs = require('fs');
const path = require('path');

const router = express.Router();

router.get('/add', (req, res) => {
    res.render('add-note');
    });

    router.post('/add', (req, res) => {
        const { title, content } = req.body;

            if (!title || !content) {
                    return res.send('Missing fields');
                        }

                            const notesDir = path.join(__dirname, '..', 'notes');

                                if (!fs.existsSync(notesDir)) {
                                        fs.mkdirSync(notesDir, { recursive: true });
                                            }

                                                const filePath = path.join(notesDir, path.basename(title) + '.txt');

                                                    fs.writeFile(filePath, content, (err) => {
                                                            if (err) {
                                                                        return res.status(500).send('Error saving note');
                                                                                }

                                                                                        res.send('Note saved');
                                                                                            });
                                                                                            });

                                                                                            module.exports = router;
                                                                                            
===FILENAME:server.js===

const express = require('express');
const path = require('path');
const fs = require('fs');
const notesRouter = require('./routes/notes');

const app = express();
const PORT = process.env.PORT || 3000;

app.use(express.urlencoded({ extended: true }));
app.use(express.static(path.join(__dirname, 'public')));

app.set('view engine', 'ejs');
app.set('views', path.join(__dirname, 'views'));

// Home page
app.get('/', (req, res) => {
    res.render('index');
    });

    // Notes routes
    app.use('/notes', notesRouter);

    // Create notes folder if it does not exist
    const notesDir = path.join(__dirname, 'notes');

    if (!fs.existsSync(notesDir)) {
        fs.mkdirSync(notesDir, { recursive: true });
        }

        // Start server
        app.listen(PORT, () => {
            console.log(`Server running at http://localhost:${PORT}`);
            });
            
                        
===FILENAME:index.js===

const express = require('express');
const path = require('path');
const expressLayouts = require('express-ejs-layouts');

const app = express();
const PORT = 3000;

app.set('view engine', 'ejs');
app.set('views', path.join(__dirname, 'views'));

app.use(expressLayouts);
app.set('layout', 'layout');

app.get('/', (req, res) => {
    res.render('index', { title: 'Home' });
    });

    app.get('/about', (req, res) => {
        res.render('about', { title: 'About' });
        });

        app.get('/contact', (req, res) => {
            res.render('contact', { title: 'Contact' });
            });

            app.listen(PORT, () => {
                console.log(`Server is running on port ${PORT}`);
                });
                
===FILENAME:views/layout.ejs===

<!DOCTYPE html>
<html>
<head>
    <title>%= title %></title>
    </head>
    <body>
        %- include('partials/navbar') %>
            %- body %>
            </body>
            </html>

===FILENAME:views/partials/footer.ejs===

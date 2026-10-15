===FILENAME:index.js===

const express = require('express');
const expressLayouts = require('express-ejs-layouts');

const app = express();

app.set('view engine', 'ejs');

app.use(expressLayouts);
app.set('layout', 'layout');

app.use((req, res, next) => {
    res.locals.year = new Date().getFullYear();
        next();
        });

        app.get('/', (req, res) => {
            res.render('index', { title: 'Home' });
            });

            app.get('/about', (req, res) => {
                res.render('about', { title: 'About' });
                });

                app.get('/contact', (req, res) => {
                    res.render('contact', { title: 'Contact' });
                    });

                    app.listen(3000, () => {
                        console.log('Server running on port 3000');
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

                %- include('partials/footer') %>
                </body>
                </html>
===FILENAME:views/partials/footer.ejs===
<footer>
      <p>&copy; %= year %> My Website</p>
      </footer>
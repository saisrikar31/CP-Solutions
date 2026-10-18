===FILENAME:index.js===

const express = require('express');
const app = express();

app.set('view engine', 'ejs');

const quotes = [
    "I am build upon the small things I do everyday and the end results are no more than a byproduct of that. - Shinsuke",
        "Strive not to be a success, but rather to be of value. - Albert Einstein",
            "The future belongs to those who believe in the beauty of their dreams. - Eleanor Roosevelt",
                "Discipline is doing what you hate to do, but doing it like you love it. - Mike Tyson"
                ];

                app.get('/', (req, res) => {
                    const randomIndex = Math.floor(Math.random() * quotes.length);
                        const quote = quotes[randomIndex];

                            res.render('quote', { quote });
                            });

                            app.listen(3000, () => {
                                console.log('Server is running on port 3000');
                                });
                                
===FILENAME:views/quote.ejs===

<!DOCTYPE html>
<html>
<head>
    <title>Motivational Quote</title>
    </head>
    <body>
        <h1>Motivational Quote</h1>
            <p><%= quote %></p>
            </body>
            </html>
            
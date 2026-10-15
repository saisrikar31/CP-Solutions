===FILENAME:categories.js===
// write your code here:

const express = require('express');
const router = express.Router();

// Categories route
router.get('/', (req, res) => {
    res.send('Categories Route');
    });

    // Get category by ID
    router.get('/:id', (req, res) => {
        res.send(`Category with ID ${req.params.id}`);
        });

        module.exports = router;
        
===FILENAME:products.js===

const express = require('express');
const router = express.Router();

// Products route
router.get('/', (req, res) => {
    res.send('Products Route');
    });

    // Get product by ID
    router.get('/:id', (req, res) => {
        res.send(`Product with ID ${req.params.id}`);
        });

        module.exports = router;
        
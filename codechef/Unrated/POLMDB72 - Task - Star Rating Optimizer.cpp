===FILENAME:index.js===

db = connect('mongodb://localhost:27017/analytics_db');

db.products.drop();
db.reviews.drop();

// Part A: Create product with pre-calculated fields
db.products.insertOne({
  _id: 1,
    name: "Wireless Earbuds",
      price: 99,
        avgRating: 0,
          reviewCount: 0
          });

          // Insert initial reviews
          db.reviews.insertMany([
            { productId: 1, rating: 5, comment: "Amazing!" },
              { productId: 1, rating: 4, comment: "Good quality" },
                { productId: 1, rating: 3, comment: "Average" }
                ]);

                // Part B: A new review arrives with rating 5
                db.reviews.insertOne({
                  productId: 1,
                    rating: 5,
                      comment: "Excellent product!"
                      });

                      // Recalculate average rating and review count
                      const result = db.reviews.aggregate([
                        { $match: { productId: 1 } },
                          {
                              $group: {
                                    _id: "$productId",
                                          avgRating: { $avg: "$rating" },
                                                reviewCount: { $sum: 1 }
                                                    }
                                                      }
                                                      ]).toArray();

                                                      // Update the product with the calculated values
                                                      if (result.length > 0) {
                                                        db.products.updateOne(
                                                            { _id: 1 },
                                                                {
                                                                      $set: {
                                                                              avgRating: result[0].avgRating,
                                                                                      reviewCount: result[0].reviewCount
                                                                                            }
                                                                                                }
                                                                                                  );
                                                                                                  }

                                                                                                  // Display the updated product
                                                                                                  printjson(db.products.findOne({ _id: 1 }));
                                                                                                  
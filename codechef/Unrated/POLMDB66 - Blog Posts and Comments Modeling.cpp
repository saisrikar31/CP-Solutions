===FILENAME:index.js===
const mongoose = require('mongoose');

// MongoDB Atlas Connection String
const uri = 'mongodb+srv://nihalpuli557_db_user:5gwLVHy5SvTwYClD@eventsystemcluster.xm06nsm.mongodb.net/';

// Connect to MongoDB Atlas
mongoose.connect(uri, { useNewUrlParser: true, useUnifiedTopology: true })
        .then(() => console.log('✅ Connected to MongoDB Atlas'))
        .catch(err => console.error('❌ MongoDB connection error:', err));

// Comment Schema
const commentSchema = new mongoose.Schema({
        text: { type: String, required: true },
        author: { type: String, required: true },
        post: { type: mongoose.Schema.Types.ObjectId, ref: 'Post', required: true },
        createdAt: { type: Date, default: Date.now }
});

// Post Schema
const postSchema = new mongoose.Schema({
        title: { type: String, required: true },
        content: { type: String, required: true },
        author: { type: String, required: true },
        comments: [{ type: mongoose.Schema.Types.ObjectId, ref: 'Comment' }],
        createdAt: { type: Date, default: Date.now }
});

// Models
const Comment = mongoose.model('Comment', commentSchema);
const Post = mongoose.model('Post', postSchema);

// Sample Usage
async function createPostAndComment() {
        try {
                // Step 1: Create a new Post
                const post = new Post({
                        title: 'Using MongoDB Atlas with Mongoose',
                        content: 'Atlas makes it easy to deploy MongoDB in the cloud...',
                        author: 'Abhay Singh'
                });
                await post.save();
                console.log('✅ Post created:', post);

                // Step 2: Create a Comment linked to the post
                const comment = new Comment({
                        text: 'Thanks! Very clear example.',
                        author: 'John Doe',
                        post: post._id
                });
                await comment.save();
                console.log('✅ Comment created:', comment);

                // Step 3: Push the comment ID to post.comments
                post.comments.push(comment._id);
                await post.save();

                // Step 4: Fetch post with populated comments
                const populatedPost = await Post.findById(post._id).populate('comments');
                console.log('📄 Populated Post with Comments:\n', JSON.stringify(populatedPost, null, 2));
        } catch (err) {
                console.error('❌ Error:', err);
        } finally {
                await mongoose.disconnect();
        }
}

if (require.main === module) {
        createPostAndComment();
}

module.exports = { Post, Comment };
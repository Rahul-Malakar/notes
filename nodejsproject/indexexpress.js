const express = require('express');
const { MongoClient, ObjectId } = require('mongodb');

const app = express();
const port = 3000;
const url = 'mongodb://127.0.0.1:27017/';
const database = 'bookstore';
const client = new MongoClient(url, { useNewUrlParser: true, useUnifiedTopology: true });

app.use(express.json());

// GET all books
app.get('/get-books', async (req, res) => {
  try {
    await client.connect();
    const db = client.db(database);
    const collection = db.collection('books');
    const result = await collection.find({}).toArray();
    res.json(result);
  } catch (err) {
    console.error('Error querying MongoDB:', err);
    res.status(500).json({ error: 'Internal Server Error' });
  } finally {
    await client.close();
  }
});

// POST to add a new book
app.post('/add-book', async (req, res) => {
  const newData = req.body;

  try {
    await client.connect();
    const db = client.db(database);
    const collection = db.collection('books');
    const result = await collection.insertOne({title: "Rahul", author: "rahul"});

    if (result.insertedCount === 1) {
      res.json({ success: true, message: 'Document added successfully.' });
    } else {
      res.status(500).json({ success: false, message: 'Failed to add document.' });
    }
  } catch (err) {
    console.error('Error adding document:', err);
    res.status(500).json({ error: 'Internal Server Error' });
  } finally {
    await client.close();
  }
});

// DELETE a book by ID
app.delete('/delete-book/:id', async (req, res) => {
  const id = req.params.id;

  try {
    await client.connect();
    const db = client.db(database);
    const collection = db.collection('books');

    const result = await collection.deleteOne({ _id: ObjectId(id) });

    if (result.deletedCount === 1) {
      res.json({ success: true, message: 'Document deleted successfully.' });
    } else {
      res.status(404).json({ success: false, message: 'Document not found.' });
    }
  } catch (err) {
    console.error('Error deleting document:', err);
    res.status(500).json({ error: 'Internal Server Error' });
  } finally {
    await client.close();
  }
});

app.listen(port, () => {
  console.log(`Server listening at http://localhost:${port}`);
});

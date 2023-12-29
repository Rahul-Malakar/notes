const mongoose = require('mongoose');
const express = require('express');
const { ObjectId } = require('mongodb');

const app = express();

mongoose
  .connect('mongodb://127.0.0.1:27017/bookstore')
  .then((result) =>
    app.listen(3000, () => console.log('Server listening at port 3000'))
  )
  .catch((err) => console.log(err));
const collection1 = mongoose.connection.collection('books');

app.set('view engine', 'ejs');

app.get('/', (req, res) => {
  res.redirect('/get-books');
});

app.get('/get-books', async (req, res) => {
  try {
    const books = await collection1.find({}).toArray();
    res.json(books);
  } catch (error) {
    console.error('Error retrieving books:', error);
    res.status(500).json({ error: 'Internal Server Error' });
  }
});

app.get('/book/:id', async (req, res) => {
  const id = req.params.id;
  try {
    const book = await collection1.findOne({ _id: new ObjectId(id) });
    res.json(book);
  } catch (err) {
    console.log(err);
    res.status(500).json({ error: 'Internal Server Error' });
  }
});

app.get('/find/:name', async (req, res) => {
  const name = req.params.name;
  try {
    const book = await collection1.find({ title: name }).toArray();
    res.json(book);
  } catch (err) {
    console.log(err);
    res.status(500).json({ error: 'Internal Server Error' });
  }
});

app.use((req, res) => {
  res.render('404');
});

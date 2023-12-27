const express = require('express');
const { MongoClient } = require('mongodb');

const app = express();
const port = 3000;

const uri = 'mongodb://127.0.0.1:27017';

const client = new MongoClient(uri, { useNewUrlParser: true, useUnifiedTopology: true });

app.use(express.json());

app.get('/', (req, res) => {
  res.send('Hello World!');
});

app.get('/get-data', async (req, res) => {
  try {
    await client.connect();
    const database = client.db('bookstore');
    const collection = database.collection('books');
    const result = await collection.find({}).toArray();
    res.json(result);
  } catch (err) {
    console.error('Error querying MongoDB:', err);
    res.status(500).json({ error: 'Internal Server Error' });
  } finally {
    await client.close();
  }
});

app.post('/add-data', async (req, res) => {
  const { newData } = req.body;

  try {
    await client.connect();
    const database = client.db('your_database_name');
    const collection = database.collection('your_collection_name');
    await collection.insertOne({ data: newData });
    res.json({ success: true });
  } catch (err) {
    console.error('Error inserting data into MongoDB:', err);
    res.status(500).json({ error: 'Internal Server Error' });
  } finally {
    await client.close();
  }
});

app.listen(port, () => {
  console.log(`Server listening at http://localhost:${port}`);
});
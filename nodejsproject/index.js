const { MongoClient } = require('mongodb');
const url = 'mongodb://127.0.0.1:27017/';
const database = 'bookstore';
const client = new MongoClient(url);

async function getallbooks() {
  try {
    let result = await client.connect();
    let db = result.db(database);
    let collection = db.collection('books');
    let response = await collection.find({}).toArray();
    console.log(response);
  } catch (err) {
    console.log(err);
  }
}

async function getone(name) {
  try {
    let result = await client.connect();
    let db = result.db(database);
    let collection = db.collection('books');
    let response = await collection.findOne({ title: name });
    console.log(response);
  } catch (err) {
    console.log(err);
  }
}


  

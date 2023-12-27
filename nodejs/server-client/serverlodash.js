const http = require('http');
const fs = require('fs');
const { ok } = require('assert');
const _ = require('lodash');

// res status code 
// 200 - ok
// 301 - resource moved 
// 404 - not found 
// 500 - internal server error 

const server = http.createServer((req, res) => {
  //this callback runs everytime a request comes in our server
  const num = _.random(0,20);
  console.log(num);

  const greet = _.once(()=>{
    console.log('hello')
  });
  greet();
  greet();

  //set header content type
  res.setHeader('Content-Type', 'text/html');

  let path = './nodejs/server-client/views';
  switch (req.url) {
    case '/':
      path += '/index.html';
      res.statusCode = 200;
      break;
    case '/about':
      path += '/about.html';
      res.statusCode = 200;
      break;
    case '/about-me':
      res.statusCode = 301;
      res.setHeader('Location','/views/about');
      res.end();
      break;
    default:
      path += '/404.html';
      res.statusCode = 404;
      break;
  }

  
  fs.readFile(path, (err, data) => {
    if (err) {
      console.log(err);
      res.end();
    } else {
      res.write(data);
      res.end();
    }
  });
});

//port number, domain name (default is localhost = 123.0.0.1), function fires when we start listening
//port numbers are like doors through which server communicates through
//server also needs a port number
server.listen(3000, 'localhost', () => {
  console.log('listening for request on port 3000');
});

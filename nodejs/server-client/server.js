const http = require('http');

const server = http.createServer((req, res) => {
  //this callback runs everytime a request comes in our server
  console.log(req.url, req.method);
  
  //set header content type
  res.setHeader('Content-Type', 'text/html');
  res.write('<h1>Hello</h1>');
  res.end();
});

//port number, domain name (default is localhost = 123.0.0.1), function fires when we start listening
//port numbers are like doors through which server communicates through
//server also needs a port number
server.listen(3000, 'localhost', () => {
  console.log('listening for request on port 3000');
});


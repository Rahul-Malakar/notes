const fs = require('fs');

//streams are continuous transfer of chunks of data
const readstream = fs.createReadStream('./nodejs/blog.txt', {encoding: 'utf8', });
const writestream = fs.createWriteStream('./nodejs/newblog.txt');


//on is an eventlistener, we are listening to a data event
// readstream.on('data', (chunk) => {
//   console.log('\n---------new chunk----------\n');
//   console.log(chunk);
//   writestream.write('\nNew Chunk\n')
//   writestream.write(chunk);
// });

// piping : below one line code does the name writing operation as above
// readstream.pipe(writestream);
const fs = require('fs');

//reading files
//takes some time to read then function starts working -> async
// fs.readFile('./nodejs/blog1.txt', (err, data) => {
//   if (err) {
//     console.log(err);
//   }
//   console.log(data.toString());
// });

// console.log('lastline');

//create files
//create file if it doesn't exist
// fs.writeFile('./nodejs/blog1.txt', 'bye world', () => {
//   console.log('file written');
// });

//directories
//if folder already exist then error of file already exist
// therefore use fs.existsSync to check if the folder exist
// if (!fs.existsSync('./assets')) {
//   fs.mkdir('./assets', (err) => {
//     if (err) {
//       console.log(err);
//     }
//     console.log('directory created');
//   });
// } else {
//   fs.rmdir('./assets', (err) => {
//     if (err) {
//       console.log(err);
//     }
//     console.log('directory deleted');
//   });
// }

//delete files
// if(fs.existsSync('./nodejs/blog1.txt')){
//     fs.unlink('./nodejs/blog1.txt',(err)=>{
//         if(err){
//             console.log(err);
//         }
//         console.log('file deleted');
//     })
// }
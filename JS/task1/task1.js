// const k = [];
// let i = 2;
// while(k.length<100){
//     let flag =0;
//     for(let j=2; j<i; j++){
//         if(i%j==0){
//             flag=1;
//             break;
//         }
//     }
//     if(!flag){
//         k.push(i);
//     }
//     i++;
// }
// console.log(k);

// -----------------------------------


// let sieve = (k) => {
//     let primes = Array(k).fill(-1);;
    
//     primes[0] = 0; primes[1] = 0;
//     for (let i = 2; i < k + 1; i++) {
//         if (primes[i] == -1) {
//             primes[i] = 1;
//         }
//         if (primes[i] == 0) {
//             continue;
//         }
//         for (let j = i * 2; j < k + 1; j += i) {
//             primes[j] = 0;
//         }
//     }
//     return primes;
// }

//arrow function
// let isprime = (inp) => {
//     return (sieve(inp+1)[inp] == 1)? 1:0;
// }
// console.log(isprime(13));

//anonymous function
// let isprime =(function(inp){
//     return (sieve(inp+1)[inp] == 1)? 1:0;
// })(3);
// console.log(isprime);


// -----------------------------------------------

//arrow function
// let input = (a,b,c) => {
//     let array = [a,b,c];
//     array.sort();
//     return array[1];
// }
// console.log(input(7,8,2));

//anonymous function
// let input = (
//     function(a,b,c){
//         let array = [a,b,c];
//         array.sort();
//         return array[1];
//     }
// );
// console.log(input(7,8,2));
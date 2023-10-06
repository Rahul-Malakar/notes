//refrain from using var
//use let and const
// let and const doesn't allow redeclaration in same scope
// let allows redeclaration in different scope
// but const doesn't allow
// let allows reassignment but not const
//"use strict"

// Primitive data types in JavaScript include:
// Numbers - Integers, floats
// Strings - Any data under single quote, double quote or backtick quote
// Booleans - true or false value
// Null - empty value or no value
// Undefined - a declared variable without a value
// Symbol - A unique value that can be generated by Symbol constructor

// Non-primitive data types in JavaScript includes:
// Objects
// Arrays
// Primitive data types are compared by its values.
// let numOne = 3
// let numTwo = 3
// console.log(numOne == numTwo)      // true
// let js = 'JavaScript'
// let py = 'Python'
// console.log(js == py)             //false 
// let lightOn = true
// let lightOff = false
// console.log(lightOn == lightOff) // false
// Non-primitive data types cannot be compared by value.
// let nums = [1, 2, 3]
// let numbers = [1, 2, 3]
// console.log(nums == numbers)  // false
// let userOne = {
// name:'Asabeneh',
// role:'teaching',
// country:'Finland'
// }
// let userTwo = {
// name:'Asabeneh',
// role:'teaching',
// country:'Finland'
// }
// console.log(userOne == userTwo) // false
// Rule of thumb, we do not compare non-primitive data types. Do not compare arrays, functions, or objects. Non-primitive values are referred to as reference types, because they are being compared by reference instead of value.
// let nums = [1, 2, 3]
// let numbers = nums
// console.log(nums == numbers)  // true

// Math object
// round, floor, ceil, min, max, random, abs, sqrt, pow, log, sin, cos

//strings are immutable in js
// console.log(`The sum of 2 and 3 is 5`);// statically writing the data
// let a = 2;
// let b = 3;
// let string = `The sum of ${a} and ${b} is ${a + b}`;
// console.log(string);
// the variable string only has strings, 2 3 5 in string variable is not number

// string methods
// length
// toUpperCase
// toLowerCase
// substr(a,b) take b chars from a index
// substring(a,b) a is starting index, b is ending index (ending index char not included)
// split(substring) splits the string at a specified place and stores the substrings in an array
// trim() Removes trailing space in the beginning or the end of a string.
// includes It takes a substring argument and it checks if substring argument exists in the string. case sensitive
// replace(a,b) takes a as old substring and b as new substring
// charCodeAt(index) Takes index and it returns ASCII number of the value at that index
// indexOf(substring) Takes a substring and if the substring exists in a string it returns the first position of the substring if does not exist it returns -1
// search(substring) it takes a substring as an argument and it returns the index of the first match. The search value can be a string or a regular expression pattern.
// lastIndexOf(substring) Takes a substring and if the substring exists in a string it returns the last position of the substring if it does not exist it returns -1
// concat(substring, substring, sub..) it takes many substrings and joins them
// startsWith(substring) it takes a substring as an argument and it checks if the string starts with that specified substring. It returns a boolean(true or false).
// endsWith(substring) it takes a substring as an argument and it checks if the string ends with that specified substring. It returns a boolean(true or false).
// match: it takes a substring or regular expression pattern as an argument and it returns an array if there is match if not it returns null.
// repeat(): it takes a number as argument and it returns the repeated version of the string.

// Casting : Changing data type 
// String to Int
// parseInt(stringnum)
// Number(stringnum)
// Plus sign(+) newnum += stringnum
// String to Float
// parseFloat()
// Number()
// Plus sign(+)
// Float to Int
// parseInt()

// Window Methods
// alert('message')
// prompt('required text', '')
// const agree = confirm('Are you sure you like to delete? ')

// Date Object
// const now = new Date()
// console.log(now)
// now.functions() 

// Arrays
// Methods to manipulate array
// const arr = Array(8).fill('X') it creates eight element values filled with 'X'
// concat
// const thirdList = firstList.concat(secondList)
// indexOf
// lastIndexOf
// includes return bool 
// toString:Converts array to string
// const names = ['Asabeneh', 'Mathias', 'Elias', 'Brook']
// console.log(names.join()) // Asabeneh,Mathias,Elias,Brook
// console.log(names.join('')) //AsabenehMathiasEliasBrook
// console.log(names.join(' ')) //Asabeneh Mathias Elias Brook
// console.log(names.join(', ')) //Asabeneh, Mathias, Elias, Brook
// console.log(names.join(' # ')) //Asabeneh # Mathias # Elias # Brook
// const numbers = [1,2,3,4,5]; console.log(numbers.slice(1,4)) // -> [2,3,4] // it doesn't include the ending position
// const arr = [1,2,3,4,5,6,7];
// arr.splice(3, 3, 7, 8, 9, 10); //arr = [1,2,3,7,8,9,10,7]
// push
// pop
// shift - removes one element from beginning
// unshift - Adding array element in the beginning of the array.
// reverse 
// sort

// 2d array
// const rows = 3;
// const columns = 4;
// const matrix = Array(rows).fill().map(() => Array(columns).fill(0));

// Functions
// Let us access the arguments object
// function sumAllNums() {
//   console.log(arguments)
// }
// sumAllNums(1, 2, 3, 4) //output : [Arguments] { '0': 1, '1': 2, '2': 3, '3': 4 }
// in this way we can input unlimited parameters

//arrow function
// const functionName = (param) => {}
// Arrow function does not have the function scoped arguments object. To implement a function which takes unlimited number of arguments in an arrow function we use spread operator followed by any parameter name. Any thing we passed as argument in the function can be accessed as array in the arrow function
// const sumAllNums = (...args) => {
//   // console.log(arguments), arguments object not found in arrow function
//   // instead we use a parameter followed by spread operator (...)
//   console.log(args)
// }
// sumAllNums(1, 2, 3, 4)
// // [1, 2, 3, 4]

//annonymous function
// const functionName = function(){}
//call the variable to return a value for output
// Self invoking functions are anonymous functions which do not need to be called to return a value.
// (function(n) {
//   console.log(n * n)
// })(2)
// 4, but instead of just printing if we want to return and store the data, we do as shown below
// let squaredNum = (function(n) {
//   return n * n
// });
// console.log(squaredNum(10));
// OR
// let squaredNum = (function(n) {
//     return n * n
//   })(4);
//   console.log(squaredNum);

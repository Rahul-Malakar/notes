// everything inside js happens inside an execution context

// (memory component also know as variable environment) + (code or thread of execution)

// js is a synchronous (in a specific order) single threaded (execute one command at a time) language

//call stack - stack were different execution contexts are pushed or popped
//at lat cell stack gets empty

// -------------------------------------- HOISTING -------------------------------

//undefined and not defined(this means that a variable was never declared in the program) are not same things

//hoisting - In JavaScript, when the code is being executed, it goes through two phases: the compilation phase and the execution phase. During the compilation phase, the JavaScript engine scans through the code and recognizes variable and function declarations and assigns them memory space. This process is called hoisting.
// the behavior of variable and function declarations being moved to the top of their containing scope during the compilation phase, before the code is executed.

// console.log(myVariable); // Output: undefined
// var myVariable = 10;
// console.log(myVariable); // Output: 10

// only the declarations are hoisted, not the initializations or assignments. Let's take a look at some examples to illustrate this behavior:

// sayHello(); // Output: "Hello!"

// function sayHello() {
//   console.log("Hello!");
// }

// the entire function sayHello() is hoisted during the compilation phase
// function expressions (anonymous functions assigned to variables) are not hoisted in the same way as function declarations. Only the variable declaration is hoisted, not the assignment of the function expression.

// ---------------------------------- /HOISTING ----------------------------------------------------

// ------------------------------------- EMPTY JS FILE - WINDOW -------------------------------------------

// even in an empty js file, js engine is still working
// when we type window we get to see that various functions are being kept ready to be used which is done by js engine
// we can also use "this" keyword to point window in global context
// window is global object which is created along with the global execution context, "this" is also created simultaneously

// ------------------------------------- /EMPTY JS FILE - WINDOW -------------------------------------------

// ------------------------------------- LEXICAL ENVIRONMENT & SCOPE CHAIN -------------------------------------------

// Whenever a execution context is created a lexical envvironment is also created

// lexical means : in hierarchy of in sequence

// lexcical environment is, the local memory along with lexical environment of its parent

// chain of memory blocks of every execution context (towards outer direction) is called SCOPE CHAIN

// ------------------------------------- /LEXICAL ENVIRONMENT & SCOPE CHAIN -------------------------------------------

// ------------------------------------- LET AND CONST & TEMPORAL DEAD ZONE -------------------------------------------

// let and const are hoisted

// temporal dead zone - the time frame between hoisting and initialization
// if we try to access a let or const which is in temporal dead zone - error : cannot access before initialization

// ------------------------------------- /LET AND CONST & TEMPORAL DEAD ZONE -------------------------------------------

// ------------------------------------- BLOCK| BLOCK SCOPE | SHADOWING -------------------------------------------

// { } - this is a block also know as compound statement, used to group multiple statements and use it where JS expects single statement

// BLOCK SCOPE - all the vars and functions we can access inside a block

// SHADOWING - when we have same var outside the block, the var inside shadows the outside var, i.e. -  if we access var will be get the value from initialization inside the block
// in case of var shadowing takes place
// in case of let and const - no shadowing

// illegal shadowing - cannot shadow a let using var but can shadow a let using let
// - can shadow a var using let

// ------------------------------------- /BLOCK| BLOCK SCOPE | SHADOWING -------------------------------------------

// ------------------------------------- CLOSURES -------------------------------------------

// closure - a function which is bind with its lexical environment
// - function along with its lexical scope

// function foo() {
//   var a = 2;
//   function bar() {
//     console.log(a);
//   }
//   return bar;
// }
// var baz = foo();
// baz();

// seeeeeeeeeeeeeeee even after foo is gone from memory block, bar still can be called and has access to its lexical scope
// this reference to the function and its lexical scope is called closure

// ------------------------------------- /CLOSURES -------------------------------------------

// ------------------------------------- FIRST CLASS FUNCTIONS | ANONYMOUS FUNCTIONS ------------------------------------

// Function statement or function declaration
// function a(){
//     console.log("a");
// }

// function expression 
// var b = function(){
//     console.log("b");
// }

// major difference between these two is hoisting
// if we call a before defining the function, we will get an output
// if we call b beofre defining the function, it will give us an error

// anonymous functions - syntax error
// function () {

// }
// anonymous functions are used when the function is used as values 

// named function expression - just naming the function expression
// var b = function xy(){
//     console.log("b");
// }
// we call be to get output from xy function, but if we call xy then we get an error 

// first class functions
// the ability to use functions as values is known as first class function 

// ------------------------------------- /FIRST CLASS FUNCTIONS | ANONYMOUS FUNCTIONS ------------------------------------

// ------------------------------------- CALLBACK FUNCTIONS | EVENT LISTENERS ------------------------------------

// the function that we put inside a function call is called callback function. due to this we can do async things in this sync threaded language - JS 

// what are event listeners

// what is garbage collection in event listeners

// ------------------------------------- /CALLBACK FUNCTIONS | EVENT LISTENERS ------------------------------------

// ------------------------------------- ASYNCHRONOUS JS AND EVENT LOOP ------------------------------------

// EVENT LOOP - continuously monitors call stack and callback queue 

// microtask queue - similar to callback queue but has higher priority
// all the callback functions which comes through promises will go inside microtaskqueue
// mutation observer keeps on checking if there is some mutation in the dom tree

// except promises and mutation observer, everything else goes into callback queue 

// starvation of callback queue? 

// ------------------------------------- /ASYNCHRONOUS JS AND EVENT LOOP ------------------------------------

// Read about JS Engine, Garbage Collector, Mark and Sweep algo, Inlining, copy elision, inline caching, concurency model.

// ------------------------------------- FUNCTIONAL PROGRAMMING | HIGHER ORDER FUNCTIONS ------------------------------------

// A function that takes function as an argument or returns a function is known as higher order function.

// the function that is passed in a higher order function is a callback function 

// MAP | FILTER | REDUCE

// ------------------------------------- /FUNCTIONAL PROGRAMMING | HIGHER ORDER FUNCTIONS ------------------------------------

// ------------ HOISTING --------------------------------------------

// var x =4;

// //allocates memory to function copies all code inside function
// function getName(){
//     console.log("hello world");
// }

// // function behaves like a variable as memory allocated with undefined
// var getName2 = function(){
//     console.log("hello world");
// }

// var getName3 = () => {
//     console.log("hello world");
// }

// getName();
// // getName2();
// // getName3();
// console.log(x);

// ------------ /HOISTING --------------------------------------------

document.getElementById("ClickMe").addEventListener("click", function() {
    console.log("Button Clicked");
});


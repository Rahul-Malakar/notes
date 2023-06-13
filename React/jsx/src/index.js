// import react and react dom libraries

import React from "react";

import ReactDOM from "react-dom/client";

// get a reference to the div with id root

const el = document.getElementById('root');
 
// tell react to take controll of that element
const root = ReactDOM.createRoot(el);
// create a component

function App(){
    return <div><h1>Hello</h1></div>;
}
// show the component on the screen
root.render(<App />);
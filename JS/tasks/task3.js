let coloredbox = document.getElementById('coloredbox')
let redbutton = document.getElementById('redbutton')
let greebutton = document.getElementById('greebutton')
let bluebutton = document.getElementById('bluebutton')

function changetored(){
    coloredbox.style.backgroundColor = 'red';
}
function changetogreen(){
    coloredbox.style.backgroundColor = 'green';
}
function changetoblue(){
    coloredbox.style.backgroundColor = 'blue';
}

redbutton.addEventListener('click',changetored);
greenbutton.addEventListener('click',changetogreen);
bluebutton.addEventListener('click',changetoblue);
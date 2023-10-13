let empty = document.getElementById('empty');

let isprime = (num) => {
    if(num<=1) return false;
    if(num<=3) return true;
    if(num%2==0 || num%3==0){
        return false;
    }
    for(let i=5; i*i<=num; i+=6){
        if(num%i==0 || num%(i+2)==0){
            return false;
        }
    }
    return true;
}

for (let i = 1; i < 101; i++) {
  let temp = document.createElement('div');
  temp.textContent = i;
  temp.classList.add('number');

  if (i & 1) {
    temp.classList.add('odd');
  } else {
    temp.classList.add('even');
  }
  if (isprime(i)) {
    temp.classList.add('prime');
  }
  empty.appendChild(temp);
}

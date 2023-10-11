// function rectangle(a, b) {
//   this.length = a;
//   this.breadth = b;
//   rectangle.prototype.area = function () {
//     return this.length * this.breadth;
//   };
//   rectangle.prototype.perimeter = function () {
//     return 2 * (this.length + this.breadth);
//   };
// }

class rectangle {
  constructor(a, b) {
    this.length = a;
    this.breadth = b;
  }
  area() {
    return this.length * this.breadth;
  }
  perimeter = function () {
    return 2 * (this.length + this.breadth);
  };
}

let rect1 = new rectangle(3, 4);
console.log(rect1.area());
console.log(rect1.perimeter(), '\n');

let rect2 = new rectangle(6, 4);
console.log(rect2.area());
console.log(rect2.perimeter(), '\n');

let rect3 = new rectangle(10, 4);
console.log(rect3.area());
console.log(rect3.perimeter(), '\n');

// ------------------------------------------------

let array = [5, 4, 5, 7, 8, 9, 1, 2, 8];

let removeduplicate = (arr) => {
  arr.sort((a, b) => a - b);
  let unique = 0;
  for (let i = 1; i < arr.length; i++) {
    if (arr[i] !== arr[unique]) {
      unique++;
      arr[unique] = arr[i];
    }
  }
  arr.length = unique+1;
  return arr;
};

let returnsecondmax = (arr) => {
    removeduplicate(arr);
    console.log(arr[arr.length-2]);
}

returnsecondmax(array);

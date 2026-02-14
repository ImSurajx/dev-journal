/*
Functions
- what why or how?
- why function?
    if we write code, it run instantly..
*/
// function declaration
function hello() { // function declartion
    console.log("Hello Suraj!");
}
hello();

let fnc = function () { // function expression
    console.log("its fnc");
}
fnc();

let arrowfnc = () => {
    // fat arrow function
    console.log("its arrow function");
}
arrowfnc();

// function parameter
function dance(animal) {
    console.log(`${animal} is dancing`);
}
dance("horse");

function add(v1, v2) { // parameters
    console.log(v1 + v2);
}
add(89, 110); // arguments

// default rest or spread parameters
function subtract(v1 = 0, v2 = 0) { // default values
    console.log(v1 - v2);

}
subtract(3, 2);

// when there are many arguments, so we have to create same amount of parameteres
// to avoid that we use rest or spread operator
// if we use ...val in funtion it's rest
// if we use ...val in array or objects then it's spread
function abcd(a, b, c, ...val) { // rest or spread
    // a,b,c -> three value in varible
    // ...val -> is a array
    console.log(val);
}
abcd(1, 2, 3, 4, 5, 6, 7, 8, 9, 0);

// return : 
function xyz() {
    return 12;
}
console.log(xyz());

// first class function: a function which can be treat as values
let x = function () {
}

function jky(val) {
    val(); // calling function as value
}

// passing function as value;
jky(
    function () {
        console.log("hello....");
    }
);

// higher order function: a function which return a function or accept function as a parameter
// function as parameter
function f(val) {
    val();
}

f(function () {
    console.log("Hello");
});
// return a function
function fx() {
    return function () {
        console.log("i'm a hof");
    };
}
fx()(); // calling function inside a function

//  pure vs impure function
// pure: a function which don't change outside values is a pure function
function u() {
    console.log("Hey");
}
// impure: a function which change the value of outside is impure function
let a = 0;
function change() {
    a++; // modifying outside value
}

// closures: a higher order function which return a function & the function who is returning using a varible from it's parent function
function anc() {
    let a = 12;
    return function () {
        console.log(a);
    }
}

// lexical scoping : we use varible inside that particular function.
function akc() {
    let a = 12;
    function defg() {
        let b = 13;
        function ghij() {
            let c = 14;
        }
    }
}

// iife: call at declartion
(function () {
    console.log("Hello, How are You?");
})();

// hoisting: it work only js for function statements
xhc();
function xhc() {
    console.log("Hello");

}
mhg(); // can't access before initilization because it's function expression
let mhg = function akpc() {
    console.log("Cool");

}

// ques: use rest parameter to accpept any number of scores and return the total
function getScore(...val) {
    let total = 0;
    for (let i = 0; i < val.length; i++) {
        total += val[i];
    }
    return total;
}
console.log(getScore(1, 2, 3, 4, 5, 6, 7, 8, 9));

// ques: pass a function into antoher function and execute it inside;
function abc(val) {
    val();
}

abc(function () {
    console.log("Hello Suraj");
});

// ques: what is a closure? when is it created.
function abcd() {
    let val = 0;
    return function () {
        console.log(val); // when a function is return a function & using parent function variable
    };
}

function outer() {
    let count = 0;
    return function () {
        count++;
        console.log(count);
    }
}
const counter = outer();
counter(); // 1
counter(); // 2

// ques: convert a function into iife
let shery = (function () {
    let score = 0;
    return {
        getScore: function () {
            console.log(score);
        },
        setScore: function (val) {
            score = val;
        },
    };
})();
shery.setScore = 99;

// ques: write a bmi calulator
function bmi(weight, height) {
    return weight / (height * height) * 10;
}
console.log(bmi(74, 5.6).toFixed(2));

// ques: create a reusable discount calculator using closure
function discountCalculator(discount) {
    return function (price) {
        return price - price * (discount / 100);
    }
}
let discount10 = discountCalculator(10);
let discount20 = discountCalculator(20);
let discount30 = discountCalculator(30);
console.log(discount10(1200));
console.log(discount20(1200));
console.log(discount30(1200));

// ques: build a counter using cloure.
function holdCounter() {
    let count = 0;
    return function () {
        count++;
        return count;
    }
}
let counterA = holdCounter();
console.log(counterA());
console.log(counterA());
console.log(counterA());

// ques: create a pure function to transform a value;
function triple(val) {
    return val * val * val;
}
console.log(triple(5));

// create a iffe to isolate variable.
(function () {
    const pass = "sec pass";
    console.log(pass);
})();
console.log(pass);

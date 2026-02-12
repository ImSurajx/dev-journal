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
(function(){
    console.log("Hello, How are You?");
})();

// hoisting: it work only js for function statements
xhc();
function xhc(){
    console.log("Hello");
    
}
mhg(); // can't access before initilization because it's function expression
let mhg = function akpc(){
    console.log("Cool");
    
}
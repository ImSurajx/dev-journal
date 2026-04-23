// word vs keyword
// keyword: any word which has meaning in a language is known as keyword.
// keyword: any word which has not meaning in a language is known as word.

// variables: var, let, const
var username = "suraj kumar";
declaration & initialization
var a; // declare
var a = 12; // declare & initialize
let a; // declare
let a = 12; // declare & initialize
const a; // not allowed
const a = 12; // declare & initialize
a = 12;

/*
- var:
    - add in window
    - function scoped or global scoped
    - redeclare & no error, reassigned
    - don't respect the block {}.
*/
var a = 12; // declare & initialize
var a = 13; // redeclare & initialize

/*
- let:
    - block scope 
    - redeclare is not allowed, but reassigned allowed
*/
let x = 12; // declare & initialize
x = 13; // updation

/*
- const:
    - block scope
    - redeclare or reassignment is not allowed
*/
const y = 13;
y = 15; // not allowed

/*
- temporal dead zone: the are in which js knows that variable exist, but it can't give you the varible value.
    - console.log(a); // can't access before initialization
    - let a = 12;
*/
console.log(a); // can't access before initialization
let a = 12;

/*
- hoisting: when we create a varible in js, that varible breaks in two part, declare part of that peace goes to the initial line of script & other initialize remain on it's position.
    - var:
    var a = undefined; // declare part
    var a = 12; // this part break into two part
    a = 12; // initialize part
    - let: -> hoist -> reference error
    - const: -> hoist -> reference error
*/
var a = undefined;
var a = 12;
a = 12;
let a = undefined;
console.log(x);
x = 12;

// practice
// ques: declare your name and city using const, and your age using let
const name = "Suraj Kumar";
const city = "New Delhi";
let age = 21;

// ques: try this and observe the result
let x = 5;
let x = 10; // error -> redeclaration is not allowed in let

// ques: guess the output
console.log(count); // undefined
var count = 42;

// ques: create a const object and a new key to it -> does it work;
const obj = {
    name: "suraj kumar",
    city: "new delhi",
}
obj.age = 21;
console.log(obj.age);

// ques: try accessing a let variable before declaring it - what error do you see?
console.log(age); // reference error
let age = 39;

// ques: change a const array by pushing a value will it throw an error? -> no error
const arr = [1, 2, 3, 4, 5];
arr.push(6);
console.log(arr[5]);


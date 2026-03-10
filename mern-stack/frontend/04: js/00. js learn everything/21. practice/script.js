// Topic: Scope

// Concept: the concept behind scope is how a variable is defined in a file according to that it will decide from where it is accessible or from where it's not. 
// scope basically decides the visibility and lifetime of variables in a program.

// Code:
let x = 10;
function name() {
    let y = 10;
    var x = 10;
}
{
    let blockScope = 20;
}

// Explanation:
// global scope: accessible from anywhere in the program unless shadowed by another variable with same name.

// functional scope: accessible inside function block & under it's child scopes but not outside of it.

// block scope: only accessible inside these curly brackets {}

// let and const respect block scope but var does not respect block scope. 
// var only respects functional scope.

// lexical scope: child functions can access variables from their parent scope because scope is decided by where code is written.


// Topic: Execution Context

// Concept: execution context is the environment where JavaScript code is evaluated and executed. 
// JavaScript creates two phases for each execution context: creation phase and execution phase.

// Code:
let x = 10;
console.log(x);
console.log(y); // hoisting
var y = 10;
console.log(y);

// Explanation: as we discussed earlier there are two phases one is creation phase & one is execution phase.

// creation phase:
// in this phase JavaScript engine scans the code and allocates memory for variables and functions.
// variables declared with var are initialized with undefined during this phase.
// variables declared with let and const are allocated memory but cannot be accessed yet.

// execution phase:
// in this phase JavaScript executes the code line by line and assigns actual values to variables.

// hoisting:
// hoisting happens because JavaScript first processes declarations during creation phase.
// for example:
// var x = 10;

// internally behaves like:
// var x;
// x = 10;

// temporal dead zone (tdz):
// the time between entering the scope and initializing a variable declared with let or const is called TDZ.
// accessing the variable in this time results in a reference error.

// Topic: Closures
// Concept: when a function returns another function and the inner function uses variables from the outer function scope,
// this structure is known as a closure. the inner function remembers those variables even after the outer function finishes execution.

// Code:
function counter() {
    let count = 1;
    return function () {
        console.log(++count);
    }
}
let a = counter();
a();
a();
let c = counter();
c();
c();
c();
c();

// Explanation: as you can see in above code what will happen when we run this piece of code
// when we are storing returned function in variable a, it also keeps a reference to the variable count
// from the outer function scope.

// even though the counter function execution is finished, the inner function still remembers count.
// this is because closures keep access to their lexical scope.

// each time we call counter(), a new execution context is created and a new count variable is created.
// so the closure stored in variable a has its own count and the closure stored in variable c has its own count.

// therefore a and c do not share the same count value.
// both closures remember their own separate count variable from their respective counter() calls.

// The inner function remembers variables from its lexical scope
// even after the outer function has finished execution.

// this keyword

// Concept: the value of this keyword depends on how a function is called (call-site).
// its value is determined at runtime. arrow functions are special because they do not
// have their own this and instead use the this value from their lexical parent scope.

// Code:

// 1. global scope
console.log(this);
// in browser global scope this refers to the window object.
// in strict mode inside modules it can be undefined.

// 2. normal function
function itThis() {
    console.log(this);
}
// when a normal function is called without an object:
// in non-strict mode → this = window
// in strict mode → this = undefined

// 3. object method
let obj = {
    username: "suraj kumar",
    email: "xyzsurajxd@gmail.com",

    getAdd() {
        console.log(this);
        // here the function is called as obj.getAdd()
        // so this refers to the object obj
    },

    getMob: () => {
        console.log(this);
        // arrow functions do not have their own this.
        // they use the this value from their lexical parent scope.
        // here the parent scope is the global scope.
    },
}

// 4. arrow function
let func = () => {
    console.log(this);
}
// arrow functions inherit this from their lexical scope
// they do not create a new this binding.

// 5. call / apply / bind
function checkThis(a, b) {

}

// call: calls the function immediately and explicitly sets this
checkThis.call(this)

// apply: same as call but arguments are passed as an array
checkThis.apply(this, [1, 2])

// bind: returns a new function with this permanently bound to the provided value
let newCheckThis = checkThis.bind(this)


// Explanation:
// for this keyword everything depends on how the function is called.
// normal functions get their this from the call-site (the object before the dot).
// arrow functions do not have their own this, they inherit it from their lexical parent scope.
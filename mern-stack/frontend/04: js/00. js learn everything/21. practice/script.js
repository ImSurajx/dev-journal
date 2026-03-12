////////////////////////////
// TOPIC: Scope
////////////////////////////

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



////////////////////////////
// TOPIC: Execution Context
////////////////////////////

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



////////////////////////////
// TOPIC: Closures
////////////////////////////

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



////////////////////////////
// TOPIC: this keyword
////////////////////////////

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


////////////////////////////
// TOPIC: Constructor Functions
////////////////////////////

// Concept: constructor functions are used to create multiple objects with the same structure.
// using the new keyword JavaScript creates a new object and binds this to that object,
// so we can assign properties to it dynamically.

// Code
function ItsConstruct(name, email, age) {
    this.name = name;
    this.email = email;
    this.age = age;
};

// creating objects using new keyword
let user1 = new ItsConstruct("Suraj Kumar", "xyzsurajxd@gamil.com", 21);
let user2 = new ItsConstruct("Jatin", "jatin@example.com", 22);

// Explanation:
// constructor function works with the new keyword.

// when we run:
let user1 = new ItsConstruct("Suraj Kumar", "xyzsurajxd@gamil.com", 21);

// JavaScript internally does these steps:

// 1. creates a new empty object
// 2. sets this to point to that new object
// 3. assigns the properties using this.name, this.email, this.age
// 4. returns the created object automatically

// so user1 becomes:
{
    name: "Suraj Kumar",
        email: "xyzsurajxd@gamil.com",
            age: 21
}



////////////////////////////
// TOPIC: Prototype
////////////////////////////

// Concept: the concept behind prototype is shared memory between objects created from the same constructor.
// every JavaScript function automatically has a prototype property.
// objects created using that constructor can access properties and methods stored in that prototype.
// we generally store methods in prototype so that all instances can share the same method instead of creating
// a new copy for every object.

// Code:
function userConstructor(name, age, email) {
    this.user = name;
    this.age = age;
    this.email = email;
}

// adding a method to prototype
userConstructor.prototype.userRole = function (role) {
    this.role = role
};

let user1 = new userConstructor("Suraj Kumar", 21, "xyzsurajxd@gmail.com");
let user2 = new userConstructor("Jatin", 22, "jatin@example.com");

// using prototype method
user1.userRole("normal");
user2.userRole("admin");

console.log(user1);
console.log(user2);


// Explanation:
// here prototype is used to store methods which should be shared across all objects created
// from this constructor.

// when we create objects using new:

let user1 = new userConstructor(...)

// JavaScript does internally:

// 1. creates a new object
// 2. sets that object's internal [[Prototype]] link to userConstructor.prototype
// 3. runs the constructor function with this pointing to that object
// 4. returns the object

// so user1 and user2 both have access to methods stored in userConstructor.prototype.

// important point:
// the method userRole is stored only once in memory,
// but all instances can access it through the prototype chain.



////////////////////////////
// TOPIC: Classes
////////////////////////////

// Concept: classes work similar to constructor functions but they use a cleaner syntax.
// they are syntactic sugar over prototype-based inheritance in JavaScript.
// methods defined inside a class are automatically placed on the prototype.

// Code:
class createUser {
    constructor(name, age, email) {
        this.name = name;
        this.age = age;
        this.email = email;
    }

    getRole(role) {
        // method defined inside class body
        // this method is stored in the prototype of createUser
        this.role = role;
    }
}

let user1 = new createUser("Suraj Kumar", 21, "xyzsurajxd@gmail.com");
let user2 = new createUser("Ritesh", 19, "ritesh@example.com");


// Explanation:
// classes provide a cleaner way to create objects and manage methods.

// when we run:
let user1 = new createUser(...)

// JavaScript internally performs similar steps as constructor functions:

// 1. creates a new empty object
// 2. sets the object's prototype to createUser.prototype
// 3. runs the constructor with this pointing to the new object
// 4. returns the object

// methods defined inside the class (like getRole) are stored in the prototype,
// so they are shared across all instances instead of being recreated for each object.



////////////////////////////
// TOPIC: Inheritance
////////////////////////////

Topic: Inheritance

Concept: inheritance means a class can reuse the properties and methods
of another class. Instead of rewriting the same logic again, we extend
a parent class and inherit its behavior.

// Code:
class UserDetails {
    constructor(name, email, age) {
        this.name = name;
        this.email = email;
        this.age = age;
    }
}

class Admin extends UserDetails {
    // Admin inherits all properties from UserDetails
    constructor(name, email, age, role) {
        super(name, email, age); // call parent constructor
        this.role = role;
    }
}

let user1 = new UserDetails("Suraj Kumar", "email@example.com", 21);
let admin1 = new Admin("Admin Suraj", "admin@example.com", 25, "admin");

console.log(user1);
console.log(admin1);


// Explanation:
// "extends" creates inheritance between classes.
// Admin automatically gets properties from UserDetails.

// super() is used to call the parent constructor.
// Without super() we cannot use "this" in the child class.

// Prototype chain created internally:

// admin1
//   ↓
// Admin.prototype
//   ↓
// UserDetails.prototype
//   ↓
// Object.prototype
//   ↓
// null


////////////////////////////
// TOPIC: Callbacks
////////////////////////////

// Concept: a callback is a function that is passed as an argument
// to another function and is executed later inside that function.

// Code:
function processNumber(num, callback) {
    callback(num);
}

function printDouble(x) {
    console.log(x * 2);
}

processNumber(5, printDouble);


// another example using anonymous function
processNumber(10, function (x) {
    console.log(x + 1);
});


// Explanation:
// here processNumber is a higher order function because it accepts
// a function as an argument.

// printDouble is a callback function because it is passed into
// another function and executed later.

// flow:
// processNumber(5, printDouble)
// ↓
// callback(num)
// ↓
// printDouble(5)
// ↓
// output: 10



////////////////////////////
// TOPIC: Promises
////////////////////////////

// Concept:
// Promises are used to handle asynchronous operations in JavaScript. Earlier we used callbacks for async tasks, but when callbacks become nested deeply it creates a problem called "callback hell". Callback hell makes code very hard to read and maintain.

// Promises solve this problem by providing a cleaner way to handle asynchronous flow.

// A promise represents a value that will be available now, later, or never.

// Promise has three states:
// 1. Pending – the operation is still running.
// 2. Fulfilled (Resolved) – the operation completed successfully.
// 3. Rejected – the operation failed.

// When we create a promise we get two functions:
// resolve() – used when the operation succeeds.
// reject() – used when the operation fails.

// Example:

new Promise((resolve, reject) => {
    resolve(5)
})

// To consume promises we use:
// .then() → handles success value
// .catch() → handles error

// Important concept:
// Each .then() receives the value returned from the previous .then().

// Example flow:

// resolve(5)
// ↓
// .then(x => x * 2) → 10
// ↓
// .then(x => x + 3) → 13
// ↓
// .then(console.log)

// Output:
// 13

// Promise chaining allows us to write asynchronous logic in a clean step-by-step flow instead of nested callbacks.



////////////////////////////
// TOPIC: Async / Await and Promise Flow
////////////////////////////

// Async / Await is a modern way to work with Promises in JavaScript. It allows asynchronous code to look and behave like synchronous code, making it easier to read and maintain.

// Async Function:
// When a function is declared with the "async" keyword, it automatically returns a Promise. Even if we return a normal value, JavaScript wraps it inside Promise.resolve().

// Example:
// async function test(){
//     return 7;
// }

// This is internally equivalent to:
// Promise.resolve(7)

// Await Keyword:
// The await keyword pauses the execution of an async function until the Promise resolves or rejects. It can only be used inside an async function.

// Example:
async function getData() {
    let data = await fetch("url");
    console.log(data);
}

// Here, execution waits until the fetch promise resolves.

// Error Handling:
// If a promise rejects while using await, it throws an error and stops the remaining execution of the function. To handle errors safely we use try/catch.

// Example:
async function getData() {
    try {
        let user = await getUser();
        let posts = await getPosts(user);
        console.log(posts);
    } catch (error) {
        console.log("Error occurred:", error);
    }
}

// Promise Chain Flow:
// Each .then() receives the value returned by the previous .then().

// Example:
// resolve(5)
// ↓
// .then(x => x * 2) → 10
// ↓
// .then(x => x + 3) → 13
// ↓
// .then(console.log)

// Async functions can also return values after awaiting multiple promises.

// Example:
async function test() {
    let a = await Promise.resolve(5);
    let b = await Promise.resolve(3);
    return a + b;
}

test().then(console.log)

// Output:
// 8

// Promise Shortcuts

// Promise.resolve(value)
// → creates resolved promise

// Promise.reject(error)
// → creates rejected promise

// Async Function Behavior

// return value → Promise.resolve(value)
// throw error → Promise.reject(error)



// Problem: Test 1
async function checkNum(num) {
    if (num % 2 == 0) return "Even Num";
    else throw "Odd Num";
}
checkNum(10).then(console.log);
checkNum(5).catch(console.log);



// Problem: Test 2
function getValue() {
    return Promise.resolve(10);
}

getValue()
    .then(x => x * 2)
    .then(console.log);

async function getValues(num) {
    let res = Promise.resolve(num);
    res.then(x => x * 2)
        .then(console.log);
}
getValues(10);

async function getValues() {
    let x = await getValue();
    let result = x * 2;
    console.log(result); // await replaces .then()
}

getValues();



// Problem: Test 3
function getA() {
    return Promise.resolve(5);
}
function getB() {
    return Promise.resolve(3)
}
async function calulate() {
    let a = await getA();
    let b = await getB();
    return a + b;
}
calulate().then(console.log)



////////////////////////////
// TOPIC: Fetch API
////////////////////////////

// Topic: Fetch API

// The Fetch API is used in browsers to make HTTP requests to servers.

// fetch(url) sends an HTTP request and returns a Promise that resolves to a Response object.

// Example:
// let res = await fetch(url)

// The Response object contains information about the HTTP response such as:
// - status
// - headers
// - body stream

// However, the body data is not directly usable yet.

// To read the body we use:
// res.json()

// Example:

// let res = await fetch(url)
// let data = await res.json()

// res.json() reads the response body and converts JSON data into a JavaScript object.

// Since res.json() also returns a Promise, it must be awaited.

// Example complete flow:

async function getData() {
    let res = await fetch(url)
    let data = await res.json()
    return data
}

// getData().then(console.log)


// Problem 1 : 
async function getToDo() {
    let res = await fetch("https://jsonplaceholder.typicode.com/todos/2");
    let data = await res.json();
    return data;
}
getToDo().then((res) => {
    console.log(res.title);
})



// Problem 2:
async function getUser() {
    let res = await fetch("https://jsonplaceholder.typicode.com/users");
    let data = await res.json();
    return data;
}
getUser().then((data) => {
    data.forEach(element => {
        console.log(element.name);
    });
})



// Problem 3:
async function taskStatus() {
    let res = await fetch("https://jsonplaceholder.typicode.com/todos/1");
    let data = await res.json();
    return data.completed;
}
taskStatus().then((flag) => {
    if (flag === true) console.log("Task Completed");
    else console.log("Task Pending");
});



////////////////////////////
// TOPIC: HTTP Basics
////////////////////////////

// Topic: HTTP Basics

// HTTP stands for HyperText Transfer Protocol. It is the protocol used for communication between a client (browser) and a server on the internet.

// When a browser requests data from a server, it sends an HTTP request. The server processes the request and sends back an HTTP response.

// Common HTTP Methods:

// GET
// Used to retrieve data from the server. It should not change the server data.

// POST
// Used to send data from the client to the server, usually to create or submit data.

// Example use cases:
// GET → fetch user data
// POST → submit form data

// HTTP Status Codes:

// 200 OK
// The request was successful and the server returned the requested data.

// 404 Not Found
// The requested resource does not exist on the server.

// 500 Internal Server Error
// The server encountered an error while processing the request.
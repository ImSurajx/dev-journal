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

// Topic: Constructor Functions

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

// Topic: Prototype

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
userConstructor.prototype.userRole = function(role){
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

// Topic: Classes

// Concept: classes work similar to constructor functions but they use a cleaner syntax.
// they are syntactic sugar over prototype-based inheritance in JavaScript.
// methods defined inside a class are automatically placed on the prototype.

// Code:
class createUser{
    constructor(name, age, email){
        this.name = name;
        this.age = age;
        this.email = email;
    }

    getRole(role){ 
        // method defined inside class body
        // this method is stored in the prototype of createUser
        this.role = role;
    }
}

let user1 = new createUser("Suraj Kumar", 21 ,"xyzsurajxd@gmail.com");
let user2 = new createUser("Ritesh", 19 ,"ritesh@example.com");


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

// Topic: Callbacks

// Concept: a callback is a function that is passed as an argument
// to another function and is executed later inside that function.

// Code:
function processNumber(num, callback){
    callback(num);
}

function printDouble(x){
    console.log(x * 2);
}

processNumber(5, printDouble);


// another example using anonymous function
processNumber(10, function(x){
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
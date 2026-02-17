var a = "suraj";
let b = "kumar";
const c = "ImSurajx";

a = "Updated";
b = "Updated";
// c = "Updated"; // not allowed

{
    let name = "suraj kumar";
}
console.log(name); // not possible because let respect brackets

// const usefull
// id of something
// dob of user
// father name or relation name

let fullName = "Suraj Kumar";
let age = "21";
let city = "Delhi";
console.log(fullName);
console.warn(age);
console.error(city);

alert("welcome");
let userInput = prompt("enter a number: ");
console.log(typeof(userInput));
let agex = prompt("enter age");
console.log(agex+5); // the input we take through prompt is a string

let msg = 'i love macs';
console.log(msg.slice(2,6)); // love
console.log(msg.split(' ')); // array of three word i love macs
console.log(msg.replace('love', 'hate')); // replace first love with hate
let name = "suraj"
console.log(`Hey ${name}, welcom to JS!`); // hey suraj, welcome to js
console.log(msg.includes("love")); // true


console.log("suraj kumar") // works without semicolon
console.log("21")
console.log("man")
// let a = 30 b = 40 // breaks

suraj kumar
/*
my code solves a basic 
problem of calculation 
for small shop owners
*/

// console.log("i'm hidden by comments");

// expression: is kind of equation which return a value
console.log(5+10); // gives value immediately

// statement : statment which don't return any value it just hold the value
let x = 10;

let y = (5+10) * 2;
console.log(y); // 30

// data types
let age = 25;
let name = "Suraj";
let isStudet = true;
let skilss = ["JS", "HTML"];
let user = { city: "Delhi" };
let x = null;
let y;
let z = Symbol("id");
console.log(typeof (age));
console.log(typeof (name));
console.log(typeof (isStudet));
console.log(typeof (skills));
console.log(typeof (user));
console.log(typeof (x));
console.log(typeof (y));
console.log(typeof (z));

// special values
console.log(1/0); // infinity
console.log(0/0); // NaN
console.log(Number("abc")); // NaN
console.log(undefined+1); // NaN
// null : when we don't have default values to give
// undefined : when we declarea varible but not initialized

// primitive vs reference
let x = 5;
let y = x;
y = 10; 
console.log(x,y); // just a copy of origial change one, doesn't modify other

let obj1 = {
    name: "suraj kumar",
}
let obj2 = obj1;
obj2.name = "dheeraj",
console.log(obj1.name); // change in original object


// log vs info
console.log("Hello Suraj");
console.info("Hi"); // on some browser info sign comes.
console.warn("warning");
console.error("invalid");

// array of objects
const users = [
    { id: 1, name: "Alice", role: "Admin" },
    { id: 2, name: "Bob", role: "User" },
    { id: 3, name: "Charlie", role: "User" }
];
console.table(users);

// prompt: to take input
let name = prompt("enter your name: ");
console.log(name);

// string "", '', `` -> template string/litral;
`${1+2} Hello`

// split('through which you want to split'), divide strings into parts..
// replace('x', 'y') replace x with y...
// replaceAll('x', 'y') replace all x with y...

// comments
//  //   -> single line commnet
// /* */ -> multi line comment

// data types: type of data we use like number, bool etc
// float: 12.5
let realNum = 12.5;
// number: 123
let integer = 1;
// string: 'Hello'
let str = "Hello, How are you?";
// boolean: true/false
let bool = true;
// null: when we don't have any values to give.
let defaultValue = null;
// array: collection of similar type of data, for many peoples
let arr = [1,2,3,4,5];
// object: for single person hold more than one properties
let user = {
    name: "suraj kumar",
    age: "21",
    degree: "BCA",
}
// symbol: unique properties value mostly used while using a library

// undefined: variable declares but not initilized
let a; // unefined
console.log(a);

// NaN: a operation which can't perform with a number can give NaN.
let operation = 12 * "Suraj";
console.log(operation);

// infinity: 1/0 -> infinity
console.log(1/0);

// relative and primitive datatypes in js
// primitive: create a copy directly
// relative: copy by refernce, if you modify it original data will be modified
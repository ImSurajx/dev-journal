// data types:

// primitive: when you copy a primitive data type, you create a seprate copy of it.
// string, number, boolean, null, undefined, symbol, bigint

/*
- string: wrap data inside quotes
    " " -> double quotes
    ' ' -> single quotes
    ` ` -> backtics
- number: store numbers
    - 12  -> number
    - 12.5 -> real number
- boolean: true/false
    - store only true or false
- null: when you don't want to give a value.
    - let age = null;
    - age = 21;
- undefined: when we declare a value but not. initialize it's default value will be undefined.
    let age; // age = undefined
- symbol: create unique immutable value.
    - in future when we use some libraries, in these libraries there are some fields which is similar to us & maybe our field repace  that libraies field
    - to avoid this we use symbol.
    - let u1 = Symbol(uid);
    - let u2 = Symbol(uid);
- bigint
    - 
*/
// symbol ex:
let obj = {
    uid: 1,
    name: "suraj kumar",
    age: 12,
    email: "xyzsurjxd@gmail.com",
}
let u1 = Symbol("uid");
obj.u1 = "001";

// bigint 
let k = 9007199254740991n;
let k += 3n;

// no-primitive (reference): whe you copy a refernce data type, you get it's reference.
// array [], objects{}, functions()
/*
- array:
*/
let a = [1,2,3];
let b = a;
b.pop();
/*
- objects:
*/
let obj = {
    name: "suraj",
}
obj.name = kumar;
/*
- functions:
*/
function name(params) {

}

// dynamic typing: js has no static typing, you can change data because it's support dynamic typing.
// values: changes on the go.
let a = 12;
a = true;
a = "suraj kumar";
a = null;
a = [];
a = {};

// typeof : show type of data
let x = 3;
console.log(typeof(x));
let y = NaN;
console.log(typeof(y));
let z = null;
console.log(typeof(z)); -> object -> bug
let k = false;
console.log(typeof(k));
let m = "suraj";
console.log(typeof(m));

// truthy vs falsy values
// 0, false, "", null, undefined, NaN,  document.all;
console.log(!!0);
console.log(!!false);
console.log(!!"");
console.log(!!undefined);
console.log(!!null); 
console.log(!!NaN); 
console.log(!!document.all);


// type coercion : one type convert into another
console.log("5" + 1); // concatination & also add. string priorities -> 51
console.log(5 - "1"); // subtract number priorities -> 4

// loose vs strict equality
// == compare value with type converse
// === compares value + type (no conversion) -> always prefer
// NaN === 'number' // for failed numberic operation.

// practice
// ques: predit the output
console.log(null+1); // 1
console.log("5" + 3); // 53
console.log("5" - 3); // 2
console.log(true + false); // 1

// ques: check types
console.log(typeof []);   // object
console.log(typeof null); // object
console.log(typeof 123n); // bigint

// ques: truthy or falsy
console.log(Boolean(0)); // falsy
console.log(Boolean("0")); // true
console.log(Boolean([])); // true
console.log(Boolean(undefined)); // falsy

// ques: write a function isEmpty(value) that check if a given is null, undefined or ""/
function isEmpty(value){
    if(value === null){
        console.log(null);
    } else if(value === undefined){
        console.log(undefined);
    } else if(value === ""){
        console.log("");
    }
}
isEmpty(null);
isEmpty(undefined);
isEmpty("");

// ques: compare with loose vs strict
console.log(5=="5"); // true
console.log(5==="5"); // false 











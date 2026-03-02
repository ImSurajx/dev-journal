// // 'this' keyword -> b/c this keyword change it's nature according to where it's used..

// // global scope: window
// console.log(this);


// // function scopt: window
// function abcd() {
//     console.log(this);
// }
// abcd();

// // method: a function which is inside a object is known as method..
// // if you are using this insid a object 
// // -> key : value -> the value must be a normal function 
// /*
//     arrow function -> take it's this value from parent, where parent is present.

//     so, for outer layer use normal function if you want this value === current object, if it's nested function then inside function must be an arrow function else you will loose the this value.
//     key : function (){
//         console.log(this) -> give object
//     }

//     key : () => {
//         console.log(this) -> return window    
//     }

//     if we have nested object 
//     key : function (){
//         let defg = () => {
//                 console.log(this) -> give object
//         }
//         defg();
//     }
//     key : function (){
//         let defg {
//             console.log(this) -> return window
//         }
//         defg();
//     }

// */
// let user = {
//     name: "suraj kumar",
//     sayName: function () {
//         // this: the value of this inside a object is object it self.. only for normal function, if you use arrow function this will loose it's value.
//         console.log(this); // here this represent the current object & it's all methods etc.
//         function defg(){
//             console.log(this); // inside nested function if we use this here this will loose it's value so prevent this to loosing the value of object here you have to use arrow function
//         }
//         defg();
//     },
//     age: 21,
// }
// user.sayName();

// // event handler: 
// let h1 = document.querySelector("h1");
// h1.addEventListener("click", function(){
//     console.log(this); // this: the element on which event listner called.
// });

// // class: inside class value of this is blank object..
// class Abcd{
//     constructor(){
//         console.log("Hello");
//         this.a = 12; 
//     }
// }
// let val = new Abcd();
// console.log(val);

// call, apply & bind..

// call: while calling function we can set that what will be the value of it's this keyword..
let obj = {
    name: "suraj kumar",
    age: 26,
}
function abcd() {
    console.log(this);
}
abcd.call(obj); // function_name.call(object-name), also we can function_name.call(object-name, a, b, c);

// apply: if you are sending more than one parameter then you can only send two parameter, one will be value of this another one will be array of parameters which is required to run function.
let xobj = {
    name: 'suraj kumar',
    age: '21',
};

function ax(a, b, c) {
    console.log(this, a, b, c);
}
ax.apply(obj, [1, 2, 3]) // which mean function_name.apply(object-name, [a,b,c]);

// bind : 
let fnc = ax.bind(xobj, 1, 2, 3) // create a copy of current function with the following current this value & current parameters
console.log(fnc);
fnc();

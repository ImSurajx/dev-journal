// scope: any variable which is created by you, & in which block you can use it..

// functional scope: only accessable inside a function, outside of function the varible doesn't exist..
function abc(){
    var a = 12;
    console.log(a);
}
abc();
console.log(a);

// global scope: can be used in any where in the file, like
let x = 10; // global scope.

// block scope: can be used only inside a block of code like
{
    let x = 30;
    console.log(x);
}
console.log(x);

// execution context: when js sees your function then it will create a execution context which is a process & this process runs in two phases one is memory phase another one is execution phase.
// memory phase: when memory allocate to the functions of variable..
// execution phase: when the stored code of block run that phase is known as execution phase..


lexical scope vs dynamic scope: 

// lexical scoping: basically where are we present, is depends which values we can access..
function abcd() {
    let a = 12;
    function defg() {
        console.log(a);
    }
    defg();
}
abcd();

// dynamic scoping: from where you are calling a varible, the value will be depends on that..
let a = 12;
function abcd(){
    console.log(a);
}
function defg(){
    let a = 13;
    abcd();
}
defg();

// closure defination & how variable are preserved

// closure: are function which is inside a parent function & where parent function returning a function but the returning function must use parent function variable..
// can create private variables & stop global pollution.
// it's true that when a function is executed the varibles of function will be destroyed from memory but when closure was created then function & it's varibale has a backlink & it's name as [[enviroment]]
function abcd() {
    let a = 12;
    return function () {
        console.log(a++);
    }
}
let abc = abcd();
abc();
abc();
abc();

// private counter
function countForMe(){
    let c = 0;
    return function(){
        c++;
        console.log(c);
    }
}
let countOne = countForMe();
countOne();
countOne();
countOne();
countOne();
countOne();
let countTwo = countForMe();
countTwo();
countTwo();
countTwo();
countTwo();

// encapsulation: hide inner logic, only needed things are accessable.
function clickLimiter(){
    let click = 0;
    return function(){
        if(click < 5){
            click++;
            console.log(`clicked: ${click} times`);
        } else{
            console.error('limit exceeded, try after some times');
            
        }
    }
}
let fnc = clickLimiter();
fnc();
fnc();
fnc();
fnc();
fnc();
fnc();


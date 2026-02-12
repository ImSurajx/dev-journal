// arithmetic, coparison, logical, assignment, unary, ternary
/*
- artihmetic:
    + -> add or concat
    - -> subtract
    / -> devide
    * -> multiplication
    % -> modulus, find remainder
    ** -> exponiation x^y
 */
/*
- comparision
    = assignment
    == compare two value loosley
    === compare two values strictly
    != not equal to loose
    !== not equal to tight
    >= greater than equal to
    <= less than equal to
    > greater than
    < less than
*/
/*
- assignment
     = assign
    += add someting in exising
    -= subtract ....
    *= multiply ....
    /= divide   ....
*/
/*
- logical
    && || !
    - &&
    - true && true -> both side must be true
    - true && true -> true;
    - true && false -> false;
    || 
    - true || true -> any one must be true
    - true || true -> true;
    - true || false -> false;
    ! -> not
    - if value is false return true..
    - if value is true return false..
*/
/*
- unary operator
    + -  ! typeof 
    +
    if you have a number in the form of string add + sign just befor it to convert it into number
    typeof, what is the type of data
    a++,++a, a--, a++ : increment/decrement
    ! -> not
*/
/*
ternary operator
conditon? if true : if false
*/
/*
instance of
typeof null -> wrong
typeof arr -> wrong
typeof NaN -> wrong

instanceof -> work with reference values
a instanceof Array -> that mean is a part of array.
*/

// ques: predict the output
console.log("10" + 1); // 101
console.log("10" - 1); // 9
console.log(true + false); // 1
console.log(!!"Sheryians"); // true

// convert using unary+
let str = "42";
let num = +str;
console.log(num); // 42
console.log(typeof(num)); // number

// ques: user ternary
let age = 17;
let msg = age >= 18? "Adult" : "Minor";
console.log(msg); // "Minor"

// build a calculator
function calc(a,b, operator){
    if(operator == '+'){
        console.log(a+b);
    } else if(operator == '-'){
        console.log(a-b);
    } else if(operator == '*'){
        console.log(a*b);
    } else if(operator == '/'){
        console.log(a/b);

    }
}
calc(10,3,'+');
calc(10,3,'-');
calc(10,3,'*');
calc(10,3,'/');

// score logic
let marks = 90;
marks >= 90 ? console.log("Excellent") : marks >= 40 ? console.log("Average") : console.log("Fail");








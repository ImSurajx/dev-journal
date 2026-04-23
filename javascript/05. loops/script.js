/*
- for, while, do-while, foreach, break, continue

- for:
    - from where
    - till where
    - how we go
    for(let i = 0; i < n; i++){
        console.log(i);
    }
- while
    - from where
    - when we stop
    - how we go
    let i = 10;
    while(i>=0){
        console.log(i);
        i--;
    }
- do-while
    - run atleast one time
    - from where
    - when we stop
    - how we go
    let i = 1;
    do {
        console.log(i);
        i++;
    }
    while(i<2);
- break: break loop on particular condtion
    for(let i = 0; i < n; i++){
        if(i==10){
                console.log(i);
                break;
        }
    }
- continue: skip a particular instance
    for(let i = 0; i < n; i++){
        if(i==10){
                console.log(i);
                break;
        }
    }
*/
// quse 1: print number from 1 to 10 using a loop.
for (let i = 1; i <= 10; i++) {
    console.log(i) << ", ";
}

// ques 2: print numbers form 10 to 1 using while loop.
let i = 10;
while (i > 0) {
    console.log(i);
    i--;
}

// ques 3: print even numbers from 1 to 20 using a for loop
for (let i = 1; i <= 20; i++) {
    if (i % 2 == 0) {
        console.log(i) << ", ";
    }
}

// ques 4: print odd numbers from 1 to 15 using a while loop.
i = 1;
while (i <= 15) {
    if (i % 2 != 0) {
        console.log(i);
    }
    i++;
}
// ques5: print the multiplication table of 5 (i.e., 5 x 1 = 5 ... 5 x 10 = 15);
for (let i = 1; i <= 10; i++) {
    console.log(`5 x ${i} = ${5 * i}\n`);
}

// ques6: find the sum of numbers from 1 to 100 using a loop;
let sum = 0;
for (let i = 1; i <= 100; i++) {
    sum += i;
}
console.log(sum);

// ques7: print all numbers between 1 to 50 that are divisible by 3.
for (let i = 1; i <= 50; i++) {
    if (i % 3 == 0) {
        console.log(i);
    }
}

// ques8: ask the user for a number and print whether each n
// let num = prompt("enter a number: ");
// for(let i = 1; i <= num; i++){
//     if(i%2==0){
//         console.log(`${i} is even`);
//     }else{
//         console.log(`${i} is odd`);
//     }
// }

// ques9: count how many numbers b/w 1 to 100 are divisible by both 3 and 5
let count = 0;
for (let i = 1; i <= 100; i++) {
    if (i % 3 == 0 && i % 5 == 0) {
        count++;
    }
}
console.log(count);

// ques10: stop at first multiple of 7
for (let i = 1; i <= 100; i++) {
    console.log(i);
    if (i % 7 == 0) {
        break;
    }
}

// ques11: skip multiple of 3
for (let i = 1; i <= 20; i++) {
    if (i % 3 == 0) {
        continue;
    }
    console.log(i);
}

// ques12: first 5 odd number
count = 0;
for (let i = 1; i <= 100; i++) {
    if (i % 2 != 0) {
        console.log(i);
        count++;
    }
    if (count == 5) {
        break;
    }
}

// revrese a string using loop in js
let str = "hello suraj";
let revstr = "";
for (let i = str.length - 1; i >= 0; i--) {
    revstr += str[i];
}
console.log(revstr);

// print all character of name using for-of
let name = "suraj";
for (let ch of name) {
    console.log(ch);
}

// print all objects keys and values using for-in
let student = {
    name: "Suraj",
    age: 21,
    course: "BCA",
    city: "Delhi"
};
for (let key in student) {
    console.log(`${key} : ${student[key]}`);

}

// use continue to skip a specific number
for (let i = 0; i < 10; i++) {
    if (i == 3) {
        continue;
    }
    console.log(i);
}

// guess number game use while to ask until correct
// let secretNum = 9;
// let x = +prompt("enter number: ");
// while (x != secretNum) {
//     if (x > secretNum) {
//         alert("top high");
//     } else {
//         alert("too low");
//     }
//     x = +prompt("enter number: ");

// }
// alert("congrats");

//  print triangle using *
for(let i = 0;  i < 3; i++){
    let str = ""
    for(let j = 0; j < i+1; j++){
        str += "*";
    }
    console.log(str);
}

// sum of even numbers in an array using forEach
let arr = [1,2,3,4,5,6];
sum = 0;
for(let i = 0 ; i < arr.length; i++){
    if(arr[i]%2==0){
        sum+= arr[i];
    };
}
console.log(sum);

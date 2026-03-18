// Seprate the code and logic 
const btn = document.querySelector('button');
const ul = document.querySelector('ul');
function add() {
    const num1 = Math.floor(Math.random() * 10);
    const num2 = Math.floor(Math.random() * 10);
    return num1 + num2;
}
btn.addEventListener("click", function () {
    let li = document.createElement('li');
    li.textContent = add();
    ul.appendChild(li);
})

// Custom Utilites
// map -> ek array ke top pe chalta hain and us array ke sabhi members us map function ke andar aate hain and map function ek naya array return karta hain and us naye array mein jo bhi map ne return kiya hoga wahi placed hota hain.

const arr = [1, 2, 3, 4, 5]
function myMap(arr, callback) {
    let newarr = [];
    for (let i = 0; i < arr.length; i++) {
        newarr.push(callback(arr[i], i, arr));
    }
    return newarr;
}
let ans = myMap([1, 2, 3, 4], (num) => num + 2);
console.log(ans);


// How js work in browser
// Call Stack (Execution Stack)
// JS single threaded hai -> ek time par ek hi kaam karta hain, jab tum function call karta ho -> wo stack ke top pe chala jata hain, function complete hone ke baad stack se nikal jaata hain (pop ho jaata hain.)
function a(){
    console.log("a");
}
function b(){
    a();
    console.log("b");
}
function c(){
    b();
    console.log("c");
}

// web apis
// console, setTimeout, setInerval, alert, prompt is not the part of js language but part of browser..

// Event Loop
setTimeout(function(){
    console.log("Hey1");
}, 1000)
setTimeout(function(){
    console.log("Hey2");
}, 1200)
setTimeout(function(){
    console.log("Hey3");
}, 1100)
setTimeout(function(){
    console.log("Hey4");
}, 1500)

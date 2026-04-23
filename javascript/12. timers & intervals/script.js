// setTimeout(function(){}, time in ms); -> runs one time only
let sm = setTimeout(function () {
    console.log("i'm timeout");
}, 5000);

// clearTimeout
clearTimeout(sm);
// setInterval(function(){}, time in ms); -> runs multiple times in a interval
let interval = setInterval(function () {
    console.log("i'm interval");
}, 3000);
// clear interval
clearInterval(interval);
let count = 10;
let tenSec = setInterval(function () {
    if (count > 0) {
        console.log(count--);
    } else {
        clearInterval(tenSec);
    }
}, 1000)

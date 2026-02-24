// localStorage: where we store data but after even after closing the browser, browser data remains same. -> 5mb
// we are only able to store strings in  localStorage, if we try to store different data then it won't & cause issues.
// store -> setItem
localStorage.setItem("name", "suraj");

// data fetch -> getItem
let value = localStorage.getItem("name");
console.log(value);

// remove -> removeItem
value = localStorage.removeItem("name");
console.log(value);

// update -> setItem also use to update
localStorage.setItem("name", "suraj kumar");

// clear -> clear everything which we store earlier
localStorage.clear();

// SessionStorage: where our data is temporarily store, closing tab -> removes data -> 5mb
// everything remain same like local storage..
// store -> setItem
sessionStorage.setItem("name", "suraj");

// data fetch -> getItem
sessionStorage.getItem("name");
console.log(value);

// remove -> removeItem
sessionStorage.removeItem("name");
console.log(value);

// update -> setItem also use to update
sessionStorage.setItem("name", "suraj kumar");

// clear -> clear everything which we store earlier
sessionStorage.clear();

// Cookies: save small amount of data like in kbs, so next time browser can load faster same site next time
// the data we store in cookies whenever we reload the webpage the cookes data will send to the server..
document.cookie = "email = suraj@test.com";

localStorage.clear;
localStorage.setItem("friends", JSON.stringify(["jatin", "govind", "sunny", " dushyant", "ritesh"]));
let arr = JSON.parse(localStorage.getItem("friends"));
console.log(arr);


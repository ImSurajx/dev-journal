/*
// array: we use to store multiples values together..
let arr = [];
*/
// - create
let arr = [1, 2, 3, 4, 5];
let arrfun = new Array();

// - modify
arr[2] = 3;

/// array methods
arr.push(700); // push value at the end
console.log(arr);
arr.pop(); // remove value from last
console.log(arr);
arr.shift(); // remove value from start
console.log(arr);
arr.unshift(10); // add value from start
console.log(arr);
arr.splice(2, 3); // remove value splice(from_where, how many values) -> change actual array also use to add values sees ques
console.log(arr);
arr = [1, 2, 3, 4, 5];
let x = arr.slice(2, 5); // slice(from_where, to_where) don't modify exising array & create a new array
console.log(x);
arr.reverse(); // reverse the array, modify exising array
let sr = arr.sort(function (a, b) {
    return a - b; // sort in accending order
    return b - a; // sort in decending order
})

// forEach map filter reduce -> all of them take function as parameter

// foreach
arr.forEach(function (a) { // for each one function will run
    console.log(a + 5);
});

// map: we use map when we want to create an array using any other array.
let newarray = arr.map(function (val) {
    return val + 10;
});
console.log(newarray);

// filter: we use filter when we want to create array using another array, but it only send those value who match the condtion
let newarrx = arr.filter(function (val) {
    if (val > 4) return true;
})
console.log(newarrx);

// reduce: a array is reduce to a single array;
let sum = arr.reduce(function (accum, value) {
    return accum + value;
}, 0);
console.log(sum);

// find: when we want to find some values in array using condition & it's returns the first value which match that condition
let va = arr.find(function (v) {
    return v == 1;
})
console.log(va);

// some: give true or false if condition hit / that value exists in array
let some = arr.some(function (val) {
    return val > 5;
});
console.log(some);


// every: all value must pass condition
let every = arr.every(function (val) {
    return val > 0;
});
console.log(every);

// destructure operator
arr = [1, 2, 3, 4, 5, 6, 7, 8, 9, 0];
let [a, b, c,] = arr;
console.log(a);
console.log(b);
console.log(c);

// spread operator
arr = [1, 2, 3, 4, 5, 6, 7, 8, 9, 0];
let blank_array = [...arr]; // copy all the values of array into another array

// ques: create an array with  fruits and print the second fruit
let fruits = ['apple', 'pineapple', 'coconut', 'orange', 'graps', 'guava', 'papaya', 'mango', 'banana'];
console.log(fruits[1]);

// ques: add mango at the end and pineapple at the beginnig
fruits.push('mango');
fruits.unshift('pineapple');
console.log(fruits);

// ques: replace banana with kiwi in the array
fruits[9] = 'kiwi';
console.log(fruits);

// ques: remove the last item this array using a methos
let nums = [1, 2, 3, 4, 5];
nums.pop();
console.log(nums);

// ques: insert "Red" and "Blue" at index 1 in this array.
let colors = ["green", "black", "white"];
colors.splice(1, 0, "red", "blue"); // use splice to add values
console.log(colors);

// ques: extract onlty the middle 3 elelment from the array
let colorItem = colors.slice(1, 4);
console.log(colorItem);

// ques: sort this array alphabetically and then reverse it
const names = ["Rahul", "Ankit", "Sanya", "Kavya", "Arjun"];
names.sort();
let reverse_name = names.reverse();
console.log(reverse_name);

// ques: use .map() to square each numbers
nums = [1, 2, 3, 4, 5];
let square = nums.map(function (val) {
    return val * val;
})
console.log(square);

// ques: use .filter() to keep numbers greater than 10..
nums = [10, 9, 20, 45, 6, 50];
let greater10 = nums.filter(function (val) {
    return val > 10;
})
console.log(greater10);

// ques: use reduce() to find sum of this array
sum = nums.reduce(function (acc, val) {
    return acc + val;
}, 0);
console.log(sum);

// ques: use find() to get the furst number less than 10;
let firstNum = nums.find(function (val) {
    return val < 10;
})
console.log(firstNum);

// ques: use some() to check if any student has scored below 35;
let val = nums.some(function (a) {
    return a < 35;
});
console.log(val);

// ques: use every() to check  if all numbers are even
val = arr.every(function (val) {
    return val % 2 == 0;
});
console.log(val);

// ques: destructure this array to get firstName or lastName
let fullName = ["Suraj", "Kumar"];
let [firstName, lastName] = fullName;
console.log(firstName);
console.log(lastName);

// ques: merge two arrays using spread operator
let mergeArray = [...fruits, ...colors];
console.log(mergeArray);

// ques: add india to the start of this using spread.
const countries = [
    "Afghanistan", "Albania", "Algeria", "Andorra", "Angola", "Antigua and Barbuda",
    "Argentina", "Armenia", "Australia", "Austria", "Azerbaijan",
    "Bahamas", "Bahrain", "Bangladesh", "Barbados", "Belarus", "Belgium", "Belize", "Benin", "Bhutan", "Bolivia",
    "Bosnia and Herzegovina", "Botswana", "Brazil", "Brunei", "Bulgaria", "Burkina Faso", "Burundi",
    "Cabo Verde", "Cambodia", "Cameroon", "Canada", "Central African Republic", "Chad", "Chile", "China", "Colombia", "Comoros", "Congo (Congo-Brazzaville)",
    "Costa Rica", "Croatia", "Cuba", "Cyprus", "Czechia",
    "Democratic Republic of the Congo", "Denmark", "Djibouti", "Dominica", "Dominican Republic",
    "Ecuador", "Egypt", "El Salvador", "Equatorial Guinea", "Eritrea", "Estonia", "Eswatini", "Ethiopia",
    "Fiji", "Finland", "France",
    "Gabon", "Gambia", "Georgia", "Germany", "Ghana", "Greece", "Grenada", "Guatemala", "Guinea", "Guinea-Bissau", "Guyana",
    "Haiti", "Honduras", "Hungary",
    "Iceland", "Indonesia", "Iran", "Iraq", "Ireland", "Israel", "Italy",
    "Jamaica", "Japan", "Jordan",
    "Kazakhstan", "Kenya", "Kiribati", "Kuwait", "Kyrgyzstan",
    "Laos", "Latvia", "Lebanon", "Lesotho", "Liberia", "Libya", "Liechtenstein", "Lithuania", "Luxembourg",
    "Madagascar", "Malawi", "Malaysia", "Maldives", "Mali", "Malta", "Marshall Islands", "Mauritania", "Mauritius", "Mexico", "Micronesia", "Moldova", "Monaco", "Mongolia", "Montenegro", "Morocco", "Mozambique", "Myanmar",
    "Namibia", "Nauru", "Nepal", "Netherlands", "New Zealand", "Nicaragua", "Niger", "Nigeria", "North Korea", "North Macedonia", "Norway",
    "Oman",
    "Pakistan", "Palau", "Palestine", "Panama", "Papua New Guinea", "Paraguay", "Peru", "Philippines", "Poland", "Portugal",
    "Qatar",
    "Romania", "Russia", "Rwanda",
    "Saint Kitts and Nevis", "Saint Lucia", "Saint Vincent and the Grenadines", "Samoa", "San Marino", "Sao Tome and Principe", "Saudi Arabia", "Senegal", "Serbia", "Seychelles", "Sierra Leone", "Singapore", "Slovakia", "Slovenia", "Solomon Islands", "Somalia", "South Africa", "South Korea", "South Sudan", "Spain", "Sri Lanka", "Sudan", "Suriname", "Sweden", "Switzerland", "Syria",
    "Tajikistan", "Tanzania", "Thailand", "Timor-Leste", "Togo", "Tonga", "Trinidad and Tobago", "Tunisia", "Turkey", "Turkmenistan", "Tuvalu",
    "Uganda", "Ukraine", "United Arab Emirates", "United Kingdom", "United States", "Uruguay", "Uzbekistan",
    "Vanuatu", "Vatican City", "Venezuela", "Vietnam",
    "Yemen",
    "Zambia", "Zimbabwe"
];
let allContries = ["india", ...countries];
console.log(allContries);















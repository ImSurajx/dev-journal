/*
object: when we talk about single enitity & it's properties
obj{
    key: value,
    key: value,
}
*/
let obj = {
    name: "suraj kumar",
    age: 26,
}
console.log(obj.name);
console.log(obj[name]);
console.log(obj['name']);

// nesting
let user = {
    name: "suraj kumar",
    address: {
        city: "delhi",
        pin: 110091,
        location: {
            lat: 23.2,
            lng: 77.4,
        },
    },
};

// deep accessing
console.log(user.name);
console.log(user.address);
console.log(user.address.city);
console.log(user.address.pin);
console.log(user.address.location);
console.log(user.address.location.lat);
console.log(user.address.location.lng);

// object destructring
let { lat, lng } = user.address.location;
console.log(lat);
console.log(lng);

// loops on object
user = {
    id: 101,
    name: "Suraj Kumar",
    age: 21,
    email: "surajxcode@gmail.com",
    isActive: true,
    skills: ["HTML", "CSS", "JavaScript", "C++"],
    address: {
        city: "Delhi",
        country: "India"
    }
};

for (let key in user) {
    console.log(key);
    console.log(user[key]);
}

let keys = Object.keys(user);
console.log(keys); // array of keys

let entries = Object.entries(user);
console.log(entries); // array of arrays, each key valu become a array

// cloning
let user2 = { ...user }; // create copy of object, but nested remain pass by reference not a real copy.
console.log(user2);
let obj2 = Object.assign({}, obj); // same like spread

// deep cloning using stringify
let obj1 = JSON.stringify(user); // object convert into string
let obj3 = JSON.parse(obj1); // string convert into object
console.log(obj3);
obj3.address.city = "new delhi";
console.log(obj3);
console.log(user);

// optional chaining
console.log(user?.address?.city);

// computer properites
let role = "admin";
let admin = {
    [role]: "suraj kumar",
}
console.log(role);

// ques: create an bject for a student with name, age, and isEnrolled
let student = {
    name: "suraj kumar",
    age: 22,
    isEnrolled: true,
}
console.log(student);

// ques: can an object key be a number or boolean? try this
student = {
    name: "suraj kumar",
    age: 22,
    isEnrolled: true,
    true: true,     // possible
    false: false,  // possible
}
console.log(student);

// ques: access the value of "first name" from this object
const userstr = {
    "first-name": "suraj kumar"
}
console.log(userstr["first-name"]);

// ques: given a dynamic key let key = "age", how will you access user[key]?
let key = "age";
const x = {
    age: 26,
}
console.log(x[key]);

// ques: from the object below, print the latitude
const locations = {
    city: "delhi",
    coordinates: {
        lat: 23.2,
        lng: 77.4,
    },
};
console.log(locations?.coordinates?.lat);

// ques: destructure the city lat from the locations object
let { city } = locations;
let { lat } = locations.coordinates;

// ques: destructure the key "first-name" as a variable called firstName.
const user = {
    "first-name": "harsh",
}
let { "first-name": firstName } = user; // something new pass key : variable name
console.log(firstName);

// ques: use for-in to log all keys in this object
const course = {
    title: "JavaScript",
    duration: "4 Weeks",
};

for (let key in course) {
    console.log(key);
}

// ques: use Object.entries() to print all key-value pairs
let entries = Object.entries(course);
console.log(entries);

entries.forEach(function (val) {
    console.log(val[0], " : ", val[1]);
})

// ques: copy objects
const original = {
    a: 1,
    b: 2,
}
const copy = {...original};
console.log(copy);

// ques: deep cline
const obj1 = {
    info: {
        score: 80,
    },
}
let objcloned = JSON.parse(JSON.stringify(obj1));
console.log(objcloned);
















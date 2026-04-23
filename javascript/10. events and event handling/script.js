// event: any movement on the browser, event will be raised..., any action
// event listener: action to reaction.
// elemenet.addEventListener("event_name", function(){});

// if user single click
let h1 = document.querySelector('h1');
h1.addEventListener("click", function () {
    h1.style.color = "red";
})


function dblclick() {
    h1.style.color = "orange";
}
// if user double click
h1.addEventListener("dblclick", dblclick)

// remove event listener (event, function)
h1.removeEventListener("dblclick", dblclick);

// event: input
let input = document.querySelector('input');
input.addEventListener("input", function (evl) {
    if (evl.data !== null) {
        console.log(evl.data);
    }
})

// event: change -> when there is change in your input select, textarea...
let select = document.querySelector('select');
let h3 = document.querySelector('h3');
select.addEventListener("change", function(event){
    h3.textContent = `${event.target.value} Device Selected`;
})

window.addEventListener("keydown", function (event) {
    if (event.code === "Space") {
        document.querySelector('h1').textContent = "space";
    }
    else {
        document.querySelector('h1').textContent = event.key;
    }
})

let btn = document.querySelector("button");
let fileInput = document.querySelector("#fileinp");
btn.addEventListener("click", function(){
    fileInput.click();
})

fileInput.addEventListener("change", function(data){
    let files = data.target.files[0];
    if(files){
        btn.textContent = files.name;
    }
})

let form = document.querySelector('form');
let inputs = document.querySelectorAll('input');
// prevent submit clears input field
form.addEventListener("submit", function (event) {
    event.preventDefault();
    // create card
    let card = document.createElement('div');
    card.classList.add('card');

    let profile = document.createElement('div');
    profile.classList.add('profile');
    let img = document.createElement('img');
    img.setAttribute(
        "src",
        `${inputs[0].value}`
    );
    profile.appendChild(img);
    card.appendChild(profile);


    let details = document.createElement('div');
    details.classList.add('details');
    let name = document.createElement('h1');
    name.innerText = inputs[1].value;
    let email = document.createElement('p');
    email.innerText = inputs[2].value;
    details.appendChild(name);
    details.appendChild(email);
    card.appendChild(details);

    document.body.appendChild(card);
    inputs.forEach(function (evl) {
        if (evl.value !== "submit") {
            evl.value = "";
        }
    })
})

let mouseEffect = document.querySelector('#mouse-effect');
mouseEffect.addEventListener("mouseover", function (data) {
    mouseEffect.style.backgroundColor = "coral";
})
mouseEffect.addEventListener("mouseout", function (data) {
    mouseEffect.style.backgroundColor = "royalblue";
})

window.addEventListener("mousemove", function(data){
    mouseEffect.style.top = `${data.clientY}px`;
    mouseEffect.style.left = `${data.clientX}px`;
})

let abcd = document.querySelector("#abcd");
abcd.addEventListener("click", function(e){
    console.log(e);
})

let form = document.querySelector("form");
form.addEventListener("click", function(e){
    e.preventDefault();
})

event bubbling: when listner is not present on element, then event will jump to the parent & while doing this event will move upward till the listner is found., child to parent
document.querySelector("#nav").addEventListener("click", function(event){
    alert("it clicked");
});

document.querySelector("ul").addEventListener("click", function(e){
    e.target.classList.toggle("line-through");
})
let a = document.querySelector('.a');
let b = document.querySelector('.b');
let c = document.querySelector('.c');
let btn = document.querySelector('button');
btn.addEventListener("click", function (el) {
    console.log("button clicked");
})
c.addEventListener("click", function (el) {
    console.log("c clicked");
})
b.addEventListener("click", function (el) {
    console.log("b clicked");
})
a.addEventListener("click", function (el) {
    console.log("a clicked");
})

event capturing : event move toward parent to child, -> enable using true, ("evt", function(e){}, true)
when we raise a event, the flow of event will be in two direction
phase 1: event raised from top to bottom raised event
phase 2: event raised from bottom to top raised event
phase 1: always happen first but by default it is off if we on it then the response we will get is of the phase 1..
a = document.querySelector('.a');
b = document.querySelector('.b');
c = document.querySelector('.c');
btn = document.querySelector('button');
btn.addEventListener("click", function (el) {
    console.log("button clicked");
}, true
)
c.addEventListener("click", function (el) {
    console.log("c clicked");
}, true
)
b.addEventListener("click", function (el) {
    console.log("b clicked");
}, true
)
a.addEventListener("click", function (el) {
    console.log("a clicked");
}, true
)

let inputField = document.querySelector('input');
let span = document.querySelector('span');
inputField.addEventListener("input", function () {
    let left = 20 - inputField.value.length;
    span.textContent = left;
    if (left < 0) {
        span.style.color = "red";
    } else {
        span.style.color = "black";
    }
})
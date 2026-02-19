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

// SELECT ELEMENTS
let addNote = document.querySelector("#add-note");
let formContainer = document.querySelector(".form-container");
let closeForm = document.querySelector(".closeForm");
const form = document.querySelector("#noteForm")
const { imageUrl, fullName, homeTown, purpose, category } = form.elements;
let textField = [imageUrl, fullName, homeTown, purpose, category];
const stack = document.querySelector('.stack');
const upBtn = document.querySelector("#upBtn");
const downBtn = document.querySelector("#downBtn");


// load saved cards by default
document.addEventListener("DOMContentLoaded", function () {
    let tasks = localStorage.getItem("tasks");

    if (!tasks) return;

    tasks = JSON.parse(tasks);

    tasks.forEach(task => {
        showCards(task);
    });
});

function saveToLocal(obj) {
    let tasks = localStorage.getItem("tasks");
    // if (!tasks) {
    //     let objArr = [];
    //     objArr.push(obj);
    //     localStorage.setItem("tasks", JSON.stringify(objArr));
    // }
    // else {
    //     let objArr = JSON.parse(tasks);
    //     objArr.push(obj);
    //     localStorage.setItem("tasks", JSON.stringify(objArr));
    // }

    // cleaner version
    let objArr = [];

    if (tasks) {
        try {
            objArr = JSON.parse(tasks);
        } catch (error) {
            objArr = [];
        }
    }

    objArr.push(obj);
    localStorage.setItem("tasks", JSON.stringify(objArr));

}

function showCards() {
    let allTasks = JSON.parse(localStorage.getItem("tasks"));
    allTasks.forEach(function (task) {
        // create card container
        const card = document.createElement('div');
        card.classList.add('card');

        // avatar image
        const avatar = document.createElement('img');
        avatar.src = task.imageUrl;
        avatar.alt = "profile";
        avatar.classList.add("avatar");
        card.appendChild(avatar);

        // name
        const name = document.createElement("h2");
        name.textContent = task.fullName;
        card.appendChild(name);

        // info : home town
        const homeTownInfo = document.createElement("div");
        homeTownInfo.classList.add("info");

        const homeTownLabel = document.createElement("span");
        homeTownLabel.textContent = "Home town";

        const homeTownValue = document.createElement("span");
        homeTownValue.textContent = task.homeTown;

        homeTownInfo.appendChild(homeTownLabel);
        homeTownInfo.appendChild(homeTownValue);
        card.appendChild(homeTownInfo);

        // info: purpose
        const bookingsInfo = document.createElement("div");
        bookingsInfo.classList.add("info");

        const bookingsLabel = document.createElement("span");
        bookingsLabel.textContent = "Purpose";

        const bookingsValue = document.createElement("span");
        bookingsValue.textContent = task.purpose;

        bookingsInfo.appendChild(bookingsLabel);
        bookingsInfo.appendChild(bookingsValue);

        card.appendChild(bookingsInfo);

        // Buttons container
        const buttonsDiv = document.createElement("div");
        buttonsDiv.classList.add("buttons");

        // Call button
        const callBtn = document.createElement("div");
        callBtn.classList.add("call");
        callBtn.innerHTML = '<i class="ri-phone-line"></i> Call';

        // Message button
        const msgBtn = document.createElement("div");
        callBtn.innerHTML = '<i class="ri-message-line"></i> Message';
        msgBtn.classList.add("message");

        // append buttons
        buttonsDiv.appendChild(callBtn);
        buttonsDiv.appendChild(msgBtn);

        // append buttonsDiv to card
        card.appendChild(buttonsDiv);

        // add card to stack
        stack.appendChild(card);
    });

}

addNote.addEventListener("click", function () {
    formContainer.style.display = "initial";
    closeForm.addEventListener("click", function () {
        formContainer.style.display = "none";
    })
});


form.addEventListener("submit", function (evt) {
    evt.preventDefault();
    for (let field of textField) {
        if (field.value.trim() == "") {
            alert(`Enter ${field.name}`);
            return;
        }
    }
    let selectCategory = form.querySelector('input[name="category"]:checked');
    if (!selectCategory) {
        alert("Select a category");
        return;
    }
    saveToLocal({
        "imageUrl": imageUrl.value,
        "fullName": fullName.value,
        "homeTown": homeTown.value,
        "purpose": purpose.value,
        "category": selectCategory.value,
    });
    showCards();
    formContainer.style.display = "none";
    form.reset();
});


upBtn.addEventListener("click", function () {
    if (stack.firstChild) {
        stack.insertBefore(stack.firstChild, stack.lastChild);
    } 
})
downBtn.addEventListener("click", function () {
    if (stack.lastChild) {
        stack.insertBefore(stack.lastChild, stack.firstChild);
    }
})
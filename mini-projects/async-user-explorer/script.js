// manage state of our program, like when or what or why?
let state = {
    "loading": true,
    "users": [],
    "searchQuery": "",
}




render();
// fetch data from api
async function fetchUser() {
    let res = await fetch("https://randomuser.me/api/?results=30");
    let data = await res.json();
    state.users = data.results;
    state.loading = false;
    render();

}
fetchUser();

// check input from user;
document.querySelector('#inputField').addEventListener("input", (el) => {
    state.searchQuery = el.target.value.toLowerCase();
    render();
})

function render() {
    let filteredUsers;
    const container = document.querySelector(".cards-container");
    container.innerHTML = ""
    if (state.loading) {
        container.innerHTML = "loading user...";
    }
    else if (state.users.length == 0) {
        container.innerHTML = "no user found";
    }
    else {
        if (state.searchQuery) {
            filteredUsers = state.users.filter((user) => {
                let name = (user.name.first + " " + user.name.last).toLowerCase();
                return name.includes(state.searchQuery);
            })
        } else {
            filteredUsers = state.users;
        }
        if(filteredUsers.length == 0){
            container.innerHTML = "no user found";
        }
        else {
            let data = filteredUsers;
            // create card & append in card container.
            data.forEach(user => {
                // create card
                const card = document.createElement("div");
                card.className = "card";

                // add HTML inside card
                card.innerHTML = `
                            <div class="profile">
                                <img src=${user.picture.large} alt="">
                            </div>
                            <div class="name">${user.name.first + " " + user.name.last}</div>
                            <div class="email">${user.email}</div>
                            <div class="location">${user.location.state}</div>
                            <div class="location">${user.phone}</div>
                        `;

                // append card to container
                container.appendChild(card);
            });
        }
    }
}

// reload new users
document.querySelector('button').addEventListener('click', function () {
    state.loading = true;
    render();
    fetchUser();
})

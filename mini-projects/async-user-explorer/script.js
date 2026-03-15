// fetch data from api
async function fetchUser() {
    let res = await fetch("https://randomuser.me/api/?results=20");
    let userData = await res.json();
    return userData.results;
}
fetchUser().then((data) => {
    // create card & append in card container.
    data.forEach(user => {
        console.log(user);
        
        const container = document.querySelector(".cards-container");

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
});

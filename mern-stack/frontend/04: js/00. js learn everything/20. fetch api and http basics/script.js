fetch("https://randomuser.me/api/?results=50")
    .then(raw => raw.json())
    .then((data) => {
        data.results.forEach((user) => {
            console.log(user);
            let fullName = user.name.title + " " + user.name.first + " " + user.name.last;
            let email = user.email;
            let phone = user.phone;
            container.appendChild(
                createUserCard(fullName, email, `${phone}`)
            );
        });
    });

function createUserCard(name, email, status) {
    const card = document.createElement("div");

    card.className =
        "bg-gray-800 rounded-lg shadow-md hover:shadow-lg transition-shadow p-6";

    card.innerHTML = `
      <div class="flex items-center justify-center mb-4">
          <img src="https://i.pravatar.cc/48?img=${Math.floor(Math.random() * 70)}"
          class="w-16 h-16 rounded-full border-4 border-blue-500 shadow-md">
      </div>
      <h2 class="text-xl font-bold text-center text-white mb-2">${name}</h2>
      <p class="text-center text-gray-400 mb-2">${email}</p>
      <p class="text-center text-sm text-green-400 font-semibold">${status}</p>
  `;

    return card;
}

const container = document.querySelector(".container");


const wrapper = document.querySelector(".flex");
const cardsContainer = document.createElement("div");
cardsContainer.className = "cards-container";
wrapper.appendChild(cardsContainer);
const users = [
    {
        name: "Suraj Kumar",
        pic: "https://i.pravatar.cc/300?img=1",
        bio: "Frontend developer who loves clean UI."
    },
    {
        name: "Aarav Sharma",
        pic: "https://i.pravatar.cc/300?img=2",
        bio: "Full stack developer and problem solver."
    },
    {
        name: "Riya Verma",
        pic: "https://i.pravatar.cc/300?img=3",
        bio: "UI/UX designer with creative mindset."
    },
    {
        name: "Kabir Singh",
        pic: "https://i.pravatar.cc/300?img=4",
        bio: "Backend engineer and API specialist."
    },
    {
        name: "Ananya Gupta",
        pic: "https://i.pravatar.cc/300?img=5",
        bio: "Tech enthusiast and open source contributor."
    },
    {
        name: "Aditya Rao",
        pic: "https://i.pravatar.cc/300?img=6",
        bio: "React developer building scalable apps."
    },
    {
        name: "Meera Joshi",
        pic: "https://i.pravatar.cc/300?img=7",
        bio: "Creative coder and design lover."
    },
    {
        name: "Rohan Mehta",
        pic: "https://i.pravatar.cc/300?img=8",
        bio: "MERN stack developer and freelancer."
    },
    {
        name: "Sneha Kapoor",
        pic: "https://i.pravatar.cc/300?img=9",
        bio: "JavaScript expert and content creator."
    },
    {
        name: "Arjun Nair",
        pic: "https://i.pravatar.cc/300?img=10",
        bio: "Software engineer focused on performance."
    },
    {
        name: "Ishita Roy",
        pic: "https://i.pravatar.cc/300?img=11",
        bio: "Mobile app developer and UI thinker."
    },
    {
        name: "Vivaan Patel",
        pic: "https://i.pravatar.cc/300?img=12",
        bio: "Node.js developer and database expert."
    },
    {
        name: "Diya Malhotra",
        pic: "https://i.pravatar.cc/300?img=13",
        bio: "Creative frontend developer."
    },
    {
        name: "Kunal Arora",
        pic: "https://i.pravatar.cc/300?img=14",
        bio: "DevOps learner and automation geek."
    },
    {
        name: "Priya Menon",
        pic: "https://i.pravatar.cc/300?img=15",
        bio: "Web developer passionate about animations."
    },
    {
        name: "Yash Thakur",
        pic: "https://i.pravatar.cc/300?img=16",
        bio: "Competitive programmer and tech blogger."
    },
    {
        name: "Tanya Sethi",
        pic: "https://i.pravatar.cc/300?img=17",
        bio: "UI specialist and branding enthusiast."
    },
    {
        name: "Rahul Desai",
        pic: "https://i.pravatar.cc/300?img=18",
        bio: "Backend developer and cloud learner."
    },
    {
        name: "Neha Bansal",
        pic: "https://i.pravatar.cc/300?img=19",
        bio: "JavaScript and React mentor."
    },
    {
        name: "Dev Khanna",
        pic: "https://i.pravatar.cc/300?img=20",
        bio: "Passionate about building digital products."
    }
];
// show all the users
function showUsers(arr) {
    arr.forEach(function (user) {
        const card = document.createElement("div");
        card.className = "card";

        // Image
        const img = document.createElement("img");
        img.className = "bg-img";
        img.src = user.pic;
        img.alt = "";

        // Blurred Layer
        const blur = document.createElement("div");
        blur.className = "blurred-layer";
        blur.style.backgroundImage = `url(${user.pic})`;

        // Content
        const content = document.createElement("div");
        content.className = "content";

        // Heading
        const h3 = document.createElement("h3");
        h3.textContent = user.name;

        // Paragraph
        const p = document.createElement("p");
        p.textContent = user.bio;

        // Structure build
        content.appendChild(h3);
        content.appendChild(p);

        card.appendChild(img);
        card.appendChild(blur);
        card.appendChild(content);

        // Add to body (or any container)
        cardsContainer.appendChild(card);
    });
}
showUsers(users);
inputField.addEventListener("input", function (e) {
    // filter on each input
    let searchValue = e.target.value.toLowerCase();
    let newUsers = users.filter((user) => {
        return user.name.toLowerCase().includes(searchValue);
    });
    cardsContainer.innerHTML = "";
    // show the filter user
    showUsers(newUsers);
});

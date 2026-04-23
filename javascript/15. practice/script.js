const users = [
    { name: "Aarav Sharma", pic: "https://i.pravatar.cc/300?img=1", bio: "Frontend developer passionate about UI." },
    { name: "Vivaan Patel", pic: "https://i.pravatar.cc/300?img=2", bio: "Backend engineer and API specialist." },
    { name: "Aditya Rao", pic: "https://i.pravatar.cc/300?img=3", bio: "Full stack developer building scalable apps." },
    { name: "Vihaan Gupta", pic: "https://i.pravatar.cc/300?img=4", bio: "Software engineer focused on clean code." },
    { name: "Arjun Singh", pic: "https://i.pravatar.cc/300?img=5", bio: "React developer and open-source contributor." },
    { name: "Sai Krishna", pic: "https://i.pravatar.cc/300?img=6", bio: "Node.js developer and database expert." },
    { name: "Reyansh Verma", pic: "https://i.pravatar.cc/300?img=7", bio: "Creative UI/UX designer." },
    { name: "Kabir Khan", pic: "https://i.pravatar.cc/300?img=8", bio: "MERN stack developer." },
    { name: "Ishaan Mehta", pic: "https://i.pravatar.cc/300?img=9", bio: "Tech enthusiast and problem solver." },
    { name: "Rohan Das", pic: "https://i.pravatar.cc/300?img=10", bio: "Competitive programmer and mentor." },

    { name: "Ananya Gupta", pic: "https://i.pravatar.cc/300?img=11", bio: "Creative frontend developer." },
    { name: "Diya Malhotra", pic: "https://i.pravatar.cc/300?img=12", bio: "UI specialist and branding lover." },
    { name: "Ishita Roy", pic: "https://i.pravatar.cc/300?img=13", bio: "Mobile app developer." },
    { name: "Meera Joshi", pic: "https://i.pravatar.cc/300?img=14", bio: "Design thinker and coder." },
    { name: "Sneha Kapoor", pic: "https://i.pravatar.cc/300?img=15", bio: "JavaScript expert." },
    { name: "Tanya Sethi", pic: "https://i.pravatar.cc/300?img=16", bio: "Creative technologist." },
    { name: "Priya Menon", pic: "https://i.pravatar.cc/300?img=17", bio: "Web animations enthusiast." },
    { name: "Neha Bansal", pic: "https://i.pravatar.cc/300?img=18", bio: "React mentor and content creator." },
    { name: "Riya Verma", pic: "https://i.pravatar.cc/300?img=19", bio: "UI/UX specialist." },
    { name: "Aditi Rao", pic: "https://i.pravatar.cc/300?img=20", bio: "Software engineer." },

    { name: "Rahul Desai", pic: "https://i.pravatar.cc/300?img=21", bio: "Cloud computing learner." },
    { name: "Kunal Arora", pic: "https://i.pravatar.cc/300?img=22", bio: "DevOps enthusiast." },
    { name: "Yash Thakur", pic: "https://i.pravatar.cc/300?img=23", bio: "Tech blogger and coder." },
    { name: "Dev Khanna", pic: "https://i.pravatar.cc/300?img=24", bio: "Digital product builder." },
    { name: "Harsh Vardhan", pic: "https://i.pravatar.cc/300?img=25", bio: "Software developer." },
    { name: "Nikhil Jain", pic: "https://i.pravatar.cc/300?img=26", bio: "Problem solver and engineer." },
    { name: "Manav Bhatia", pic: "https://i.pravatar.cc/300?img=27", bio: "Full stack engineer." },
    { name: "Aryan Kapoor", pic: "https://i.pravatar.cc/300?img=28", bio: "Frontend UI specialist." },
    { name: "Lakshya Mehra", pic: "https://i.pravatar.cc/300?img=29", bio: "Backend developer." },
    { name: "Siddharth Nair", pic: "https://i.pravatar.cc/300?img=30", bio: "Tech enthusiast." },

    { name: "Emily Johnson", pic: "https://i.pravatar.cc/300?img=31", bio: "Frontend engineer." },
    { name: "Olivia Brown", pic: "https://i.pravatar.cc/300?img=32", bio: "UX designer." },
    { name: "Sophia Williams", pic: "https://i.pravatar.cc/300?img=33", bio: "React developer." },
    { name: "Ava Jones", pic: "https://i.pravatar.cc/300?img=34", bio: "Creative coder." },
    { name: "Isabella Garcia", pic: "https://i.pravatar.cc/300?img=35", bio: "App developer." },
    { name: "Mia Martinez", pic: "https://i.pravatar.cc/300?img=36", bio: "Full stack engineer." },
    { name: "Charlotte Anderson", pic: "https://i.pravatar.cc/300?img=37", bio: "Software engineer." },
    { name: "Amelia Thomas", pic: "https://i.pravatar.cc/300?img=38", bio: "UI designer." },
    { name: "Harper Taylor", pic: "https://i.pravatar.cc/300?img=39", bio: "Frontend developer." },
    { name: "Evelyn Moore", pic: "https://i.pravatar.cc/300?img=40", bio: "Web developer." },

    { name: "Liam Smith", pic: "https://i.pravatar.cc/300?img=41", bio: "Backend engineer." },
    { name: "Noah Wilson", pic: "https://i.pravatar.cc/300?img=42", bio: "Node.js developer." },
    { name: "Oliver Davis", pic: "https://i.pravatar.cc/300?img=43", bio: "Software architect." },
    { name: "Elijah Clark", pic: "https://i.pravatar.cc/300?img=44", bio: "Cloud engineer." },
    { name: "James Lewis", pic: "https://i.pravatar.cc/300?img=45", bio: "DevOps engineer." },
    { name: "Benjamin Walker", pic: "https://i.pravatar.cc/300?img=46", bio: "Full stack developer." },
    { name: "Lucas Hall", pic: "https://i.pravatar.cc/300?img=47", bio: "Frontend specialist." },
    { name: "Henry Allen", pic: "https://i.pravatar.cc/300?img=48", bio: "UI developer." },
    { name: "Alexander Young", pic: "https://i.pravatar.cc/300?img=49", bio: "Backend API developer." },
    { name: "Daniel Hernandez", pic: "https://i.pravatar.cc/300?img=50", bio: "Tech mentor." },

    // 50 more realistic names below (condensed for readability)

    { name: "Matthew King", pic: "https://i.pravatar.cc/300?img=51", bio: "Full stack engineer." },
    { name: "Joseph Wright", pic: "https://i.pravatar.cc/300?img=52", bio: "Frontend UI expert." },
    { name: "David Lopez", pic: "https://i.pravatar.cc/300?img=53", bio: "React developer." },
    { name: "Samuel Hill", pic: "https://i.pravatar.cc/300?img=54", bio: "Node.js engineer." },
    { name: "John Scott", pic: "https://i.pravatar.cc/300?img=55", bio: "Cloud computing enthusiast." },
    { name: "Sebastian Green", pic: "https://i.pravatar.cc/300?img=56", bio: "Backend developer." },
    { name: "Jack Adams", pic: "https://i.pravatar.cc/300?img=57", bio: "Software developer." },
    { name: "Owen Baker", pic: "https://i.pravatar.cc/300?img=58", bio: "Creative UI designer." },
    { name: "Wyatt Gonzalez", pic: "https://i.pravatar.cc/300?img=59", bio: "App developer." },
    { name: "Julian Nelson", pic: "https://i.pravatar.cc/300?img=60", bio: "Web engineer." },

    { name: "Levi Carter", pic: "https://i.pravatar.cc/300?img=61", bio: "Tech problem solver." },
    { name: "Isaac Mitchell", pic: "https://i.pravatar.cc/300?img=62", bio: "Frontend developer." },
    { name: "Gabriel Perez", pic: "https://i.pravatar.cc/300?img=63", bio: "Full stack coder." },
    { name: "Anthony Roberts", pic: "https://i.pravatar.cc/300?img=64", bio: "Backend API engineer." },
    { name: "Dylan Turner", pic: "https://i.pravatar.cc/300?img=65", bio: "React and JS developer." },
    { name: "Luke Phillips", pic: "https://i.pravatar.cc/300?img=66", bio: "Cloud architect." },
    { name: "Grayson Campbell", pic: "https://i.pravatar.cc/300?img=67", bio: "UI specialist." },
    { name: "Jayden Parker", pic: "https://i.pravatar.cc/300?img=68", bio: "DevOps learner." },
    { name: "Mateo Evans", pic: "https://i.pravatar.cc/300?img=69", bio: "Full stack engineer." },
    { name: "Hudson Edwards", pic: "https://i.pravatar.cc/300?img=70", bio: "Creative developer." },

    { name: "Nathan Collins", pic: "https://i.pravatar.cc/300?img=1", bio: "Backend engineer." },
    { name: "Aaron Stewart", pic: "https://i.pravatar.cc/300?img=2", bio: "Frontend UI developer." },
    { name: "Christian Sanchez", pic: "https://i.pravatar.cc/300?img=3", bio: "Node.js coder." },
    { name: "Cameron Morris", pic: "https://i.pravatar.cc/300?img=4", bio: "React engineer." },
    { name: "Eli Rogers", pic: "https://i.pravatar.cc/300?img=5", bio: "Web developer." },
    { name: "Colton Reed", pic: "https://i.pravatar.cc/300?img=6", bio: "Software architect." },
    { name: "Landon Cook", pic: "https://i.pravatar.cc/300?img=7", bio: "Full stack engineer." },
    { name: "Hunter Morgan", pic: "https://i.pravatar.cc/300?img=8", bio: "Tech enthusiast." },
    { name: "Jonathan Bell", pic: "https://i.pravatar.cc/300?img=9", bio: "Frontend specialist." },
    { name: "Connor Murphy", pic: "https://i.pravatar.cc/300?img=10", bio: "Backend developer." }
];

const cardContainer = document.querySelector(".card-container");
const inputText = document.querySelector("#input-text");
// show all the elements
function showUsers(arr) {
    arr.forEach(function (user) {
        const card = document.createElement("div");
        card.className = "card";
        card.innerHTML = `
        <img src="${user.pic}" alt="">
        <div class="user-details">
            <h1>${user.name}</h1>
            <p>${user.bio}</p>
        </div>`;
        cardContainer.appendChild(card);
    });
}
showUsers(users);

inputText.addEventListener("input", function (t) {
    let searchValue = t.target.value.toLowerCase();
    let newUser = users.filter(function (user) {
        return user.name.toLowerCase().includes(searchValue);
    })
    cardContainer.innerHTML = "";
    showUsers(newUser);
});



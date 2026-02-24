let body = document.querySelector('body');
let toggle = document.querySelector('#toggle-theme');

if (localStorage.getItem("theme")) {
    body.classList.add(localStorage.getItem("theme"));
}

toggle.addEventListener("click", function (e) {
    if (body.classList.contains("light")) {
        body.classList.remove("light");
        body.classList.add("dark");
        localStorage.setItem("theme", "dark");
    }
    else if (body.classList.contains("dark")) {
        body.classList.remove("dark");
        body.classList.add("light");
        localStorage.setItem("theme", "light");
    }
});
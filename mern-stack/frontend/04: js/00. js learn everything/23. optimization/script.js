// debouncing: you are performing some action on webpage & you don't want nothing will happen on that particular action but when there is some gap in our action then we have to perform some reaction.
// ek delay bataoge tum, utna delay jab bhi aayega action ka reaction milega..
function debounce(fnc, delay) {
    let timer;
    // ...args => event details
    return function (...args) {
        clearTimeout(timer);
        timer = setTimeout(function () {
            fnc(...args);
        }, delay);
    };
}
document.querySelector('input').addEventListener("input", debounce(function () {
    console.log("Hello");
}, 1000));


// throttle -> interval par chalunga, action ager hota raha and aapne ek interval bataya to utne interval me aapko event chalega.
function throttle(fnc, delay) {
    let timer = 0;
    // on each 1000ms gap this function will run..
    return function (...args) {
        let now = Date.now();
        // only run when now - timer is greater than delay..
        if (now - timer >= delay) {
            timer = now;
            fnc(...args)
        }
    }
}
document.querySelector('input').addEventListener("input", throttle(function () {
    console.log("Hello");
}, 1000));


// Lazy Loading
const images = document.querySelectorAll(".lazy-image");

const observer = new IntersectionObserver((entries, observer) => {
    entries.forEach(entry => {
        if (!entry.isIntersecting) return;

        const img = entry.target;

        // Replace src with data-src
        img.src = img.dataset.src;

        // When image loads
        img.onload = () => {
            img.classList.add("loaded");
            img.parentElement.classList.add("loaded");
        };

        // Stop observing this image
        observer.unobserve(img);
    });
}, {
    root: null,          // viewport
    threshold: 0.1,      // trigger when 10% visible
    rootMargin: "0px 0px 100px 0px" // preload before entering
});

// Start observing
images.forEach(img => observer.observe(img));

// moduler programming
document.addEventListener("click", async () => {
    let heavy = await import("./heavyFunction.js");
    heavy.veryHeavy();
}
)

// load ui in parts: like attaching class in css, load only required part 
let ul = document.querySelector('ul');
let space = document.createDocumentFragment();
for(let i = 0; i < 100; i++){
    const li = document.createElement('li');
    li.textContent = i;
    space.appendChild(li);
}
ul.appendChild(space);

// memory leaks: 
let count = 1;
const int = setInterval(() => {
    if (count <= 10) {
        console.log(count++);

    }
    else {
        clearInterval(int);
    }
}, 1000)
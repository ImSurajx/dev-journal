let progressBar = document.querySelector('.progress-bar');
let progressPer = document.querySelector('.progress-percentage');
let h1 = document.querySelector('h1');

let width = 0;
let clearIn = setInterval(function () {
    let value = (width += 5);
    progressBar.style.width = `${value}%`;
    progressPer.textContent = `${value}%`;
    if (width == 100) {
        value = 0;
        progressBar.style.width = `${value}%`;
        progressPer.textContent = `${value}%`;
        h1.textContent = "Downloaded";
        clearInterval(clearIn);
        h1.textContent = "Downloading...";

    }
}, 30);
let parent = document.querySelector('.parent');
function createToaster(config) {
    return function (msg) {
        let div =
            `<div
            class="inline-block  ${config.theme === "dark" ? "bg-gray-800 text-white " : "bg-gray-100 text-black"}  px-4 py-2 rounded shadow-lg pointer-events-none transition-opacity duration-300">
            <i class="ri-checkbox-circle-fill"></i> <span>${msg}</span>
        </div>`
        parent.insertAdjacentHTML('beforeend', div);
        let toastElemet = parent.firstElementChild;
        if (config.positionX !== "left" || config.positionY !== "top") {
            parent.className += `${config.positionX === "right" ? " right-5" : " left-5"} ${config.positionY == "bottom" ? " bottom-5" : " top-5"}`
        }
        setTimeout(() => {
            toastElemet.remove();
        }, config.duration * 1000)
    }
}

let toaster = createToaster({
    positionX: "left",
    positionY: "bottom",
    theme: "dark",
    duration: 3,
});

toaster("this is our message");
setTimeout(() => {
    toaster("download done..");
}, 2000)
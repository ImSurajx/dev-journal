// form validation
let names = document.querySelector("#name");
let form = document.querySelector("form");

form.addEventListener("submit", function (e) {
    e.preventDefault();
    if (names.value.length <= 2) {
        let small = document.createElement('small');
        let br = document.createElement('br');
        small.textContent = "your name should be greater than 2 character.";
        names.after(small);
        names.after(br);
        // regex
        let userRegx = /^[A-Za-z][A-Za-z0-9_]{2,19}$/;
        let passRegx = /^(?=.*[a-z])(?=.*[A-Z])(?=.*\d)(?=.*[@$!%*?&])[A-Za-z\d@$!%*?&]{8,}$/;
        let emailRegx = /^[^\s@]+@[^\s@]+\.[^\s@]+$/;
        let nameRegx = /^[A-Za-z\s]{2,50}$/
        let checkPass = passRegx.test("Suraj@123");
        console.log(checkPass);
        
    } 
});
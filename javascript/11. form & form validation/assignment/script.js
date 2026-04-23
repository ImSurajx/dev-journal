let form = document.querySelector('form');
let email = document.querySelector('#email');
let pass = document.querySelector('#password');

form.addEventListener("submit", function (e) {
    e.preventDefault();
    document.querySelector('.email-error-message').textContent = "";
    document.querySelector('.pass-error-message').textContent = "";
    document.querySelector('.common-error-message').textContent = "";
    let passRegx = /^(?=.*[a-z])(?=.*[A-Z])(?=.*\d)(?=.*[@$!%*?&])[A-Za-z\d@$!%*?&]{8,}$/;
    let emailRegx = /^[^\s@]+@[^\s@]+\.[^\s@]+$/;
    validateEmail = emailRegx.test(email.value);
    validatePass = passRegx.test(pass.value);
    console.log(validateEmail);
    if (!validateEmail) {
        document.querySelector('.email-error-message').textContent = "Please enter a valid email address.";
    }
    if (!validatePass) {
        document.querySelector('.pass-error-message').textContent = "Please enter a valid password.";
    }
    if (!validateEmail || !validatePass) {
        document.querySelector('.common-error-message').textContent = "Faild to submbit.";

    }
})
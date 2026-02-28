/*
approach:
1. We will create a function called `showToast` that will be responsible for displaying the toast notification.
2. Inside this function, we will create a new div element that will represent the toast notification.
3. We will add the necessary classes to style the toast notification and set its content.
4. We will append the toast notification to the body of the document.
5. We will use `setTimeout` to remove the toast notification after a certain duration (e.g., 3 seconds).
6. User can add multiple toaster at different postion in display and each toaster will stay for 3 sec and then disappear.
7. First toaster will stay for 3 sec next toaster after 2 sec and so on..
*/
// function showToast(message, type) {
//     let toast = `
//     <div class="toast-container top-right">
//         <div class="toast ${type}">
//             <i class="ri-checkbox-circle-fill"></i>
//             ${message}
//         </div>
//     </div>
//     `
//     if (type === `success`) {
//         document.querySelector(`.toast-container.top-right`).insertAdjacentHTML('beforeend', toast);
//     } else if (type === `error`) {
//         document.querySelector(`.toast-container.top-left`).insertAdjacentHTML('beforeend', toast);
//     } else if (type === `warning`) {
//         document.querySelector(`.toast-container.bottom-right`).insertAdjacentHTML('beforeend', toast);
//     } else if (type === `information`) {
//         document.querySelector(`.toast-container.bottom-left`).insertAdjacentHTML('beforeend', toast);
//     }
// }

// function removeToast() {
//     let toasts = document.querySelectorAll(`.toast`);
//     toasts.forEach((toast) => {
//         setTimeout(() => {
//             toast.remove();
//         }, 3000);
//     });
// }
// showToast(`This is a success message`, `success`);
// showToast(`This is an error message`, `error`);
// showToast(`This is a warning message`, `warning`);
// showToast(`This is an information message`, `information`);
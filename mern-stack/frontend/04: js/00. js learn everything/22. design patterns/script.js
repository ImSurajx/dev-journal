// // design patterns

// // module pattern: a design pattern in which our code is writen inside self executed function (IIFE) so our varibles can be privte.
// // we only return those things which we want to use outside.
// // than main benift of this pattern is data hiding(encapsulation) and clean strucutre, so our code can be secure, reusable aur manageble

// // create iffe
// let  Bank = (function(){
//     let bankbalance = 12000; // private varible
//     function checkBalance(){
//         console.log(bankbalance);
//     }
//     function setBalance(val){
//         bankbalance = val;
//     }
//     function withdraw(val){
//         if(val<=bankbalance) bankbalance -= val;
//         console.log(bankbalance);

//     }
//     // we return object, so we can access function of IFFE.
//     return {
//         checkBalance,
//         setBalance,
//         withdraw,
//     }
// })();
// console.log(Bank.checkBalance());
// console.log(Bank.withdraw(1000));
// console.log(Bank.checkBalance());

// // revealing module pattern
// let  BankReveal = (function(){
//     let bankbalance = 12000; // private varible
//     function checkBalance(){
//         console.log(bankbalance);
//     }
//     function setBalance(val){
//         bankbalance = val;
//     }
//     function withdraw(val){
//         if(val<=bankbalance) bankbalance -= val;
//         console.log(bankbalance);

//     }
//     // we return object, so we can access function of IFFE.
//     // revealing: we can send custom names
//     return {
//         check: checkBalance,
//         set: setBalance,
//         draw: withdraw,
//     }
// })();
// console.log(BankReveal.check());
// console.log(BankReveal.draw(1000));
// console.log(BankReveal.check());




// factory function pattern
// a function which creates a object (function = object creation machine)

// a desing pattern in which we write a simple function which create new objects & return it without using class & new keyword.

// this pattern mean control object creation through our function.

// each time when we call a factory function, it return a new object each time in which that object has it's own methods also your private data.

// this pattern is usefull when you are needed similar type of objects like users, products, tasks, etc.

function createProduct(name, price) {
    let stock = 10;
    return {
        name,
        price,
        chekStock() {
            console.log(`${stock}`);
        },
        buy(qty) {
            if (qty <= stock) {
                stock -= qty;
                console.log(`booked: ${stock} pieces left.`);
            }
            else {
                console.error(`we only have ${stock} many pieces`);
            }
        },
        refill(qty) {
            stock += qty;
            console.log(`refilled stock: ${stock} pieces now.`);
        }
    }
}

let iPhone = createProduct("iPhone", 70000);
console.log(iPhone);




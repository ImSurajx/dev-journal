// create blueprint
class CreatePencil {
    // defind variable inside constructor.
    constructor(name, company, price, color) {
        this.name = name;
        this.company = company;
        this.price = price;
        this.color = color;
    }
    // create method outside constructor
    write(text) {
        let h1 = document.createElement('h1');
        h1.textContent = text;
        h1.style.color = this.color;
        document.body.appendChild(h1);
    }
    erase() {
        document.querySelectorAll("h1").forEach((elem) => {
            // Access the inline style property directly to match your input string
            if (elem.style.color === this.color) {
                elem.remove();
            }
        });
    }
}

let p1 = new CreatePencil("Apsra", "Natraj", 10, "Black");
let p2 = new CreatePencil("Apsra", "DOMS", 10, "Red");

class User {
    constructor(name, address, username, email) {
        this.name = name;
        this.address = address;
        this.username = username;
        this.email = email;
    }

    write(text) {
        let h1 = document.createElement('h1');
        h1.textContent = `${this.name} : ${text}`;
        document.querySelector('body').appendChild(h1);
    }
}

//  admin is extended from user class with some extra properties.
class Admin extends User {
    constructor(name, address, username, email) {
        super(name, address, username, email);
        this.role = "admin";
    }
    remove() {
        document.querySelectorAll('h1').forEach(function (elem) {
            elem.remove();
        })
    }
}
let u1 = new User("Suraj", "Delhi", "ImSurajx", "xyzsurajxd@gmail.com");
let u2 = new User("Jatin", "Delhi", "Jatin999", "hello@example.com");
let admin = new Admin("admin", "India", "admin", "a@admin.com");

// inheritance: class inheritance from another class in genral..

// clasical inheritance: every language
// creating classes & extend that class known as classical inheritance.

// prototypal inheritacne: object inheritance from another object..
// ek object hain aap chaaho to uski saari props/methods ko inherit kara dete ho dusre object me.
let coffee = { 
    color: "dark",
    dirnk: function(){
        console.log("gut gut gut");
    }
}

let arabiataCoffe = Object.create(coffee);
arabiataCoffe.taste = "bitter";
arabiataCoffe.dirnk();
console.log(arabiataCoffe);
console.log(coffee);

function CreateBiscuits(name, price, qty, company, category) {
    this.name = name;
    this.price = price;
    this.qty = qty,
        this.company = company;
    this.category = category;
}

let biscuit1 = new CreateBiscuits("Oreo", 10, 9, "Cadbury", "regular");
let biscuit2 = new CreateBiscuits("Fantsy", 8, 4, "Cadbury", "choclate");

// we have to create learn how to create a blue print, like how each object will look,  & each time we can create a new object with different values
// - never write a fixed thing in constructor part...
function CreatePencil(name, price, color, company) {
    this.name = name;
    this.price = price;
    this.color = color;
    // this.company = "sheryians";
    this.write = function () { // we can also attach this write function to prototype..
        document.body.append(document.createElement('h1').textContent = "Hey, How are you?");
    }
}
// - never write a fixed thing in constructor part...
// if our constructor function attach any field to it's prototype, that mean when in future we will create a instance the this field will be set automatically.., kind of shared memory for all instance..
CreatePencil.prototype.company = "sheryians";
CreatePencil.prototype.usecase = "write";

let pencil1 = new CreatePencil("Natarraj", 10, "Black", "Apsra"); // here new means blank object..
let pencil2 = new CreatePencil("Doms", 5, "Green", "Apsra"); // here new means blank object..
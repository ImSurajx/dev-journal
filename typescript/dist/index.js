"use strict";
Object.defineProperty(exports, "__esModule", { value: true });
function greet(person) {
    return `Hello ${person}, Welcome`;
}
const username = "ImSurajx";
console.log(greet(username));
// types in ts:
// inference: auto detect type
let drink = "chai";
let cups = Math.random() > 0.5 ? 10 : '5';
let channelName = "SurajKumar";
// type anoataion: define type manually,
let chaiFlavour = "Masala Chai";
chaiFlavour = "Ginger Tea";
let chaiOrder;
// Union and Any
let subs = '1M';
// on production: define value & use it..
let apiRequestStatus = 'pending';
apiRequestStatus = 'success';
let airLineSeat = 'middle'; // you can only give any three value out of these..
airLineSeat = 'window';
const orders = ['12', '20', '28', '42'];
let currentOrder; // we can also create our own data type...
for (let order of orders) {
    if (order == '28') {
        currentOrder = order; // any: i don't care about data types
    }
}
console.log(currentOrder); // string or undefined.
// type narrowing: we close to know the real suggestions
function getChai(kind) {
    if (typeof kind == 'string') {
        return `making ${kind} chai...`;
    }
    return `chai order: ${kind}`;
}
// truthyness
function saveChai(msg) {
    if (msg) {
        return `serving ${msg} `;
    }
    return `serving default masala chai`;
}
// exostive checks
function orderChai(size) {
    if (size === 'small')
        return `small cutting chai`;
    else if (size === 'medium' || size === 'large')
        return `make extra chai`;
    else
        return `chai order #${size}`;
}
class KulhadChai {
    serve() {
        return `serving kulhad chai`;
    }
}
class Cutting {
    serve() {
        return `serving cutting chai`;
    }
}
function serve(chai) {
    if (chai instanceof KulhadChai) {
        return chai.serve();
    }
    return chai.serve();
}
// if anything go through this function that mean we can also use type or sugar keys on that value too..
function isChaiOrder(obj) {
    return (typeof obj == 'object' &&
        obj != null &&
        typeof obj.type == "string" &&
        typeof obj.sugar === "number");
}
function serveOrder(item) {
    if (isChaiOrder(item)) {
        return `Serving ${item.type} chai with ${item.sugar} sugar`;
    }
    return `serving custom chai ${item}`;
}
// pass that type into & function according to your needs
function makeChai(order) {
    switch (order.type) {
        case 'masala':
            return 'masala chai';
        case 'elaichi':
            return 'elaichi chai';
        case 'ginger':
            return 'ginger chai';
    }
}
function brew(order) {
    if ('spicelevel' in order) {
        return `masala chai`;
    }
}
// function isStringArray(arr: unknown): arr is string[]{
//     // return arr[];
// }
//# sourceMappingURL=index.js.map
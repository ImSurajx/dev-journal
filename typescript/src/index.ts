function greet(person: string): string {
    return `Hello ${person}, Welcome`
}

const username: string = "ImSurajx";
console.log(greet(username));

// types in ts:
// inference: auto detect type
let drink = "chai"
let cups = Math.random() > 0.5 ? 10 : '5';
let channelName = "SurajKumar";

// type anoataion: define type manually,
let chaiFlavour: string = "Masala Chai";
chaiFlavour = "Ginger Tea"
let chaiOrder: boolean;

// Union and Any
let subs: number | string = '1M';

// on production: define value & use it..
let apiRequestStatus: 'pending' | 'success' | 'error' = 'pending';
apiRequestStatus = 'success'

let airLineSeat: 'aisle' | 'window' | 'middle' = 'middle'; // you can only give any three value out of these..
airLineSeat = 'window'

const orders = ['12', '20', '28', '42'];
let currentOrder: string | undefined; // we can also create our own data type...
for (let order of orders) {
    if (order == '28') {
        currentOrder = order; // any: i don't care about data types
    }
}
console.log(currentOrder); // string or undefined.

// type narrowing: we close to know the real suggestions
function getChai(kind: string | number) {
    if (typeof kind == 'string') {
        return `making ${kind} chai...`
    }
    return `chai order: ${kind}`;
}

// truthyness
function saveChai(msg?: string) {
    if (msg) {
        return `serving ${msg} `;
    }
    return `serving default masala chai`;
}

// exostive checks
function orderChai(size: 'medium' | 'small' | 'large' | number) {
    if (size === 'small') return `small cutting chai`;
    else if (size === 'medium' || size === 'large') return `make extra chai`;
    else return `chai order #${size}`;
}

class KulhadChai {
    serve() {
        return `serving kulhad chai`
    }
}
class Cutting {
    serve() {
        return `serving cutting chai`
    }
}

function serve(chai: KulhadChai | Cutting) {
    if (chai instanceof KulhadChai) {
        return chai.serve();
    }
    return chai.serve();
}

// create your own type:
type ChaiOrder = {
    type: string,
    sugar: number,
}
// if anything go through this function that mean we can also use type or sugar keys on that value too..
function isChaiOrder(obj: any): obj is ChaiOrder {
    return (
        typeof obj == 'object' &&
        obj != null &&
        typeof obj.type == "string" &&
        typeof obj.sugar === "number"
    )
}

function serveOrder(item: ChaiOrder | string) {
    if (isChaiOrder(item)) {
        return `Serving ${item.type} chai with ${item.sugar} sugar`;
    }
    return `serving custom chai ${item}`;
}

// create custom type
type MasalaChai = { type: 'masala'; spicelevel: number }
type GingerChai = { type: 'ginger'; amount: number }
type ElaichiChai = { type: 'elaichi'; aroma: number }
// use that custom type as a variable value in another type
type chai = MasalaChai | GingerChai | ElaichiChai;
// pass that type into & function according to your needs
function makeChai(order: chai) {
    switch (order.type) {
        case 'masala':
            return 'masala chai'
        case 'elaichi':
            return 'elaichi chai'
        case 'ginger':
            return 'ginger chai'
    }
}

function brew(order: MasalaChai | GingerChai) {
    if ('spicelevel' in order) {
        return `masala chai`;
    }
}

function isStringArray(arr: unknown): arr is string[]{
    // return arr[];
}
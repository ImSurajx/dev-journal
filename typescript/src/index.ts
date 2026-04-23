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

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

// type annoataion: define type manually,
let chaiFlavour: string = "Masala Chai";
chaiFlavour = "Ginger Tea"
let chaiOrder: boolean;
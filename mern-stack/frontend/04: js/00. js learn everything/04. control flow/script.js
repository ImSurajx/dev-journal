/*
// if else else if
if (conditon) {
    if conditon true then code will work
} else if(condition) {
    if above condition is false then this control flow will be visit;
} else{
    if both of them are false then this one will run
}
// switch case
    switch (key) {
    case value:
        
        break;

    default:
        break;
    }
// early return pattern
function getVal(val) {
    if (val < 25) return 'D';
    else if (val < 50) return 'C';
    else if (val < 75) return 'B';
    else return "A";
}
console.log(getVal(12));
*/
// ques: wap that prints A, B, C, D, or F based on marks
function grade(marks) {
    if (marks > 100) {
        console.log('invalid marks');
    }
    else if (marks >= 90 && marks <= 100) {
        console.log('Grade A');
    } else if (marks >= 80 && marks <= 89) {
        console.log('Grade B');
    } else if (marks >= 70 && marks <= 89) {
        console.log('Grade C');
    } else if (marks >= 40 && marks <= 69) {
        console.log('Grade D');
    } else {
        console.log('Grade E'); // fail

    }
}
console.log(grade(30));
console.log(grade(50));
console.log(grade(75));
console.log(grade(85));
console.log(grade(96));
console.log(grade(101));

// ques: rock-paper-scissors
function game(user, computer) {
    if (user === computer) return "draw";
    else if (user == "scissors" && computer == "paper") return "user";
    else if (user == "paper" && computer == "rock") return "user";
    else if (user == "rock" && computer == "scissors") return "user";
    else {
        return "computer"
    }
}
console.log(game("scissors", "paper"));
console.log(game("paper", "rock"));
console.log(game("rock", "scissors"));
console.log(game("paper", "scissors"));
console.log(game("rock", "paper"));
console.log(game("scissors", "rock"));
console.log(game("scissors", "scissors"));

// ques: login message
let isLoggedIn = true;
let isAdmin = false;
if (isLoggedIn) {
    console.log("user loged in...");
} else if (isAdmin) {
    console.log("admin loged in...");
}

// ques: weather advice
let weather = "rainy";
switch (weather){
    case "rainy":
        console.log("keep umbrella.");
        break;
    case "sunny":
        console.log("weather is good.");
        break;
    case "clod":
        console.log("wear jacket, cold out there.");
        break;
    default:
        console.log("not to hot, not to cold.");
        break;
}

// ques: age checker
function ageChecker(age) {
    if (age > 0 && age <= 5) {
        console.log("baby");
    } else if (age <= 12 && age >= 6) {
        return "kid";
    } else if (age >= 13 && age <= 19) {
        console.log("teen");
    } else if (age >= 20 && age <= 50) {
        console.log("adult");
    } else {
        console.log("senior");

    }
}
console.log(ageChecker(3));
console.log(ageChecker(8));
console.log(ageChecker(14));
console.log(ageChecker(22));
console.log(ageChecker(60));




// any code run in js each code run line by line, but sometimes in some cases, where your code wait & in that particular time period another pieace of code will run.

// sync & async
// sync: a code which runs line by line is known as sync code.
// async: when a code is ready to execute is known as async code.

// callback pattern & callback hell

// callback: if you are sending a function inside a function as a parameter that parameter function is known as callback..
function runAfterSomeTime(fnc) {
    setTimeout(fnc, Math.floor(Math.random()) * 3000)
}
runAfterSomeTime(function () {
    console.log("Hello Suraj!");
});


function getProfile(username, callfnc) {
    console.log('fetching profile...');
    setTimeout(() => {
        console.log(`profile fetched of ${username}`);
        callfnc({ _id: 12122, username, age: 26, email: 'xyzsurajxd@gmail.com' });
    }, 2000);
}

function getPost(id, callback) {
    console.log('fetching posts..');
    setTimeout(() => {
        callback({
            _id: id,
            posts: ['hey', 'hello', 'good morning'],
        }, 3000);
    })
}

function getSavedPost(id, cb) {
    console.log('fecthing saved post....');
    setTimeout(() => {
        cb({ _id: id, saved: [1, 2, 3, 4, 5,], })
    }, 4000)
}

// callback hell....
getProfile("suraj", function (data) {
    console.log(data);
    getPost(data._id, function (posts) {
        console.log(posts);
        getSavedPost(data._id, function (saved) {
            console.log(saved);
        });
    });
});

// promises: you create a promise which can goes into any one stage out of twos like one is resolve & one is reject, but we have to write code for both..
// pr has three states: pending, full-field with res, full-field with rej
let pr = new Promise(function (res, rej) {
    setTimeout(() => {
        let rn = Math.floor(Math.random() * 10);
        if (rn > 5) {
            res("resolve with " + rn)
        } else {
            rej("rejected with " + rn);
        }
    }, 1000);
})
pr.then(function (val) {
    console.log(val);
}).catch(function (val) {
    console.log(val);
})

async function abcd(){
    try{
        let val = await pr;
        console.log(val);
    } catch(err){
        console.log(err);
    }
}

abcd();
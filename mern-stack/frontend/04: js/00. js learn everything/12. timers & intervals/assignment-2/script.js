let card = document.querySelector('.alertCard');
let btn = document.querySelector('button');
setTimeout(function(){
    card.classList.remove("hidden");
    btn.addEventListener("click", function(el){
        card.classList.toggle("hidden");
    })
},3000);

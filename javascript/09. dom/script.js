/*
- DOM Manipulation:
    - select element from html
        - class, id, or all
        - document.getElementById('id')
        - document.getElementByClassName('class_name');
        - document.querySelector('._classname or #id_name, id');
        - document.querySelectorAll('._classname or #id_name, id');

    - change text
        - textContent: faster, extract content event if it's hidden
        - innerText: only extract which content is visible

    - change html
        - innerHTML
        
    - change attribute
        - setAttribute("attribute_name", "value");
        - getAttribute("attribute_name");
        - removeAttribute("attribute_name");
        
    - create element
        - document.createElement('tag_name');
        - append/prepend where do you want that element;
        - append: add at the last, prepend: add at the start
        - element.remove(); -> remove from dom.

    - change css
        - select element
        - use css properties in camelCase like backgroundColor = "red", textTransform = "capitalize".
        - define class in html & append that class in that particular element -> recommended way
            -> element.classList.add("class-name"); -> method, add class
            -> elemenet.classList.remove("class-name"); -> remove class
            -> elemenet.classList.toggle("class-name"); -> if class is present remove that if not add that..
*/
let h2 = document.querySelector("h2");
h2.textContent = "hello suraj kese ho?"; // change text using textContent or innerText.
h2.innerHTML = "<i>Hello</i>";
let a = document.querySelector("a");
a.setAttribute("href", "https://www.google.com");
console.dir(a);
console.dir(h2);
let h1 = document.createElement('h1');
h1.textContent = 'Hello Suraj';
document.body.append(h1);
document.querySelector('h1').innerText = "Welcome to Sheriyans.";
document.querySelectorAll('li').forEach(function(el){
    console.log(el.innerText);
})
document.querySelector('p').innerHTML = "<b>Updated</b> by JavaScript."
console.log(document.querySelector('img').getAttribute("src"));
let a  = document.querySelector('a');
document.querySelector('a').setAttribute("href", "https://github.com//imsurajx");
console.log(a);
document.querySelector('div').setAttribute("title", "some info");
document.querySelector('button').removeAttribute("disabled");






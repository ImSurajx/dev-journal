import React from "react";
import ReactDOM from "react-dom/client";

// hard way of doing things
const h1 = React.createElement("h1", { id: "heading" }, "I'm Heading 1");
console.log(h1);

// JSX: is something which look like html/xml.
// babel: JSX -> transpilation -> react element
const JSXh1 = <h1>I'm Heading from JSX</h1>
const age = 21;

// parentheses keep track of jsx from where it start or from where it end so, babel can compile.
const JSX = (
    <div>
        <h1 id="hello" className="container">Hello I'm Suraj Kumar. I'm {age} years old.</h1>
    </div>
)

// component
// class based component -> OLD way to writing react code.
// functional based components -> new way to writing code.
const Heading = () => {
    return (
        <h1 id="Hello"> Heading</h1>
    )
}
const Heading2 = () => {
    return <h1 id="Hello"> Heading</h1>
}
const Heading3 = () => (
    <div>
        <Heading2/>
        <Heading2></Heading2>
        {Heading2()}
        <h1 id="hello" className="container">Hello I'm Suraj Kumar. I'm {age} years old.</h1>
    </div>
)

// pass a component
// root.render(<Heading2/>)
const Heading4 = () => <h1 id="Hello"> Heading</h1>
console.log(JSXh1);
const root = ReactDOM.createRoot(document.querySelector('body'));
root.render(<Heading3/>);

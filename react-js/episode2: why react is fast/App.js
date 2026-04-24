// create a ReactElement
import React from "react";
import ReactDOM from "react-dom/client";

const container = React.createElement("div", { id: "container" },
    [
        React.createElement('div', { id: "container1" },
            [
                React.createElement('h1', { id: "h1" }, "Hello, I'm Heading One"),
                React.createElement('h2', { id: "h2" }, "Hello, I'm Heading Two")
            ]
        ),
        React.createElement('div', { id: "container2" },
            [
                React.createElement('h1', { id: "h1" }, "Hello, I'm Heading One"),
                React.createElement('h2', { id: "h2" }, "Hello, I'm Heading Two")
            ]
        )
    ]
)
const root = ReactDOM.createRoot(document.getElementById('root'));
root.render(container)
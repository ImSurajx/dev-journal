import React from "react";
import ReactDOM from "react-dom/client";
import { ProductsCard } from "./components/ProductCard";
/*
Reconciliation Algorithm: React's reconciliation algorithm is responsible for efficiently updating the DOM when the state of a component changes. It compares the new virtual DOM with the previous one and determines the minimum number of changes needed to update the actual DOM. This process is optimized to minimize re-rendering and improve performance.

Diffing Algorithm: The diffing algorithm is a part of the reconciliation process. It compares the new virtual DOM tree with the previous one and identifies the differences. It uses a heuristic approach to determine which parts of the DOM need to be updated, added, or removed. This allows React to efficiently update only the necessary parts of the DOM, rather than re-rendering the entire tree.

Virtual DOM: The virtual DOM is a lightweight representation of the actual DOM. It is a JavaScript object that mirrors the structure of the real DOM. When a component's state changes, React creates a new virtual DOM tree and compares it with the previous one using the diffing algorithm. This allows React to efficiently update the real DOM by only making the necessary changes, rather than re-rendering the entire tree.

React Fiber: React Fiber is a reimplementation of the React reconciliation algorithm. It introduces a new architecture that allows for incremental rendering and better handling of asynchronous updates. With React Fiber, React can pause and resume work on the virtual DOM, allowing for smoother user experiences and improved performance, especially in complex applications.
*/
const App = () => {
  return <ProductsCard />;
};
const root = ReactDOM.createRoot(document.getElementById("root"));
root.render(<App />);

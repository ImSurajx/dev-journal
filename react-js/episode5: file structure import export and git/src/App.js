import React from "react";
import ReactDOM from "react-dom/client";
import {ProductsCard} from "./components/ProductCard";

const App = () => {
    return (
        <ProductsCard />
    )
}
const root = ReactDOM.createRoot(document.getElementById("root"));
root.render(<App />)


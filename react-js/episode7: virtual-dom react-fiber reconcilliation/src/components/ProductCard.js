import { ProductsData } from "../utils/constant";
import { Card } from "./Card";
import { useState } from "react";

export const ProductsCard = () => {
  const [newProducts, setNewProducts] = useState(ProductsData);
  return (
    <div className="card-container">

      <div onClick={() => {
        const newProducts = ProductsData.filter((product) => product.rating.stars > 4.5);
        setNewProducts(newProducts);

      }} className="button">
        Click Me
      </div>
      {newProducts.map((products, index) => {
        return <Card key={products.id} product={products} />;
      })}
    </div>
  );
};

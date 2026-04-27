import { ProductsData } from "../utils/constant";
import { Card } from "./Card";
export const ProductsCard = () => {
  return (
    <div className="card-container">
      {ProductsData.map((products, index) => {
        return <Card key={products.id} product={products} />;
      })}
    </div>
  );
};

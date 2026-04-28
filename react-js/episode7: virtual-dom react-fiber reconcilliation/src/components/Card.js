export const Card = ({ product }) => {
  return (
    <div className="card">
      <div className="img-cont">
        <img src={product.image} alt="product image" />
      </div>
      <div className="details">
        <h1>{product.name}</h1>
        <div className="rp-cont">
          <h2>Ratings: {product.rating.stars}</h2>
          <h2>Price: {product.priceCents}</h2>
        </div>
      </div>
    </div>
  );
};

===FILENAME:src/App.jsx===
import "./App.css";

// Our list of products - you don't need to change this
const products = [
    { id: 1, name: "Laptop", price: 900 },
        { id: 2, name: "Mouse", price: 20 },
            { id: 3, name: "Keyboard", price: 40 },
                { id: 4, name: "Monitor", price: 150 },
                    { id: 5, name: "USB Cable", price: 10 },
                    ];

                    function ProductCard(props) {
                        function handleClick() {
                                alert(`Product Selected: ${props.product.name}`);
                                    }

                                        const borderStyle = props.product.price > 50
                                                ? "2px solid rgb(255, 0, 0)"
                                                        : "2px solid rgb(128, 128, 128)";

                                                            return (
                                                                    <div
                                                                                className="product-card"
                                                                                            role="article"
                                                                                                        style={{ border: borderStyle }}
                                                                                                                >
                                                                                                                            <h3>{props.product.name}</h3>
                                                                                                                                        <p>Price: ${props.product.price}</p>
                                                                                                                                                    <button onClick={handleClick}>Select</button>
                                                                                                                                                            </div>
                                                                                                                                                                );
                                                                                                                                                                }

                                                                                                                                                                export function App() {
                                                                                                                                                                    return (
                                                                                                                                                                            <div className="container">
                                                                                                                                                                                        {products.map((product) => (
                                                                                                                                                                                                        <ProductCard key={product.id} product={product} />
                                                                                                                                                                                                                    ))}
                                                                                                                                                                                                                            </div>
                                                                                                                                                                                                                                );
                                                                                                                                                                                                                                }

                                                                                                                                                                                                                                export default App;
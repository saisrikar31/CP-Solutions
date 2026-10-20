===FILENAME:src/App.jsx===
// Export a function component named DiscountMessage that takes a prop 'isPremiumMember'
export function DiscountMessage({ isPremiumMember }) {
    if (isPremiumMember) {
            return <h2>You get a 20% discount!</h2>;
                } else {
                        return <h2>Sign up for premium to unlock discounts!</h2>;
                            }
                            }

                            function App() {
                                const isPremiumMember = true;
                                    
                                        return (
                                                <div>
                                                            <DiscountMessage isPremiumMember={isPremiumMember} />
                                                                    </div>
                                                                        );
                                                                        }

                                                                        export default App; // Export the App component as default
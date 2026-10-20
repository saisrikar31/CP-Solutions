===FILENAME:src/App.jsx===
// This component displays the light status based on the `isLightOn` prop.
export function LightStatus({ isLightOn }) {
    {/* If `isLightOn` is true, it shows "Lights ON", otherwise "Lights OFF" */}
        return (
                <h1>{isLightOn ? "Lights ON" : "Lights OFF"}</h1>
                    );
                    }

                    // Main App component
                    export default function App() {
                        return (
                                <LightStatus isLightOn={true} />
                                    );
                                    }
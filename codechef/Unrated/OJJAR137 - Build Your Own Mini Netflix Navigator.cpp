===FILENAME:src/App.jsx===

import { NavLink, Routes, Route } from 'react-router-dom';
import Home from './pages/Home';
import Movies from './pages/Movies';
import Series from './pages/Series';
import About from './pages/About';

function App() {
  return (
      <>
            <header>
                    <nav className="nav">
                              <NavLink to="/" end>Home</NavLink>
                                        <NavLink to="/movies">Movies</NavLink>
                                                  <NavLink to="/series">Series</NavLink>
                                                            <NavLink to="/about">About</NavLink>
                                                                    </nav>
                                                                          </header>

                                                                                <main>
                                                                                        <Routes>
                                                                                                  <Route path="/" element={<Home />} />
                                                                                                            <Route path="/movies" element={<Movies />} />
                                                                                                                      <Route path="/series" element={<Series />} />
                                                                                                                                <Route path="/about" element={<About />} />
                                                                                                                                        </Routes>
                                                                                                                                              </main>
                                                                                                                                                  </>
                                                                                                                                                    );
                                                                                                                                                    }

                                                                                                                                                    export default App;
                                                                                                                                                    
===FILENAME:src/pages/Home.jsx===

function Home() {
  return (
      <>
            <style>{`
                    .home {
                              display: flex;
                                        justify-content: center;
                                                  align-items: center;
                                                            height: 100vh;
                                                                    }
                                                                          `}</style>

                                                                                <div className="home">
                                                                                        <div>
                                                                                                  <h1>Welcome to FunFlix 🍿</h1>
                                                                                                            <p>Your gateway to unlimited fun!</p>
                                                                                                                    </div>
                                                                                                                          </div>
                                                                                                                              </>
                                                                                                                                );
                                                                                                                                }

                                                                                                                                export default Home;
                                                                                                                                
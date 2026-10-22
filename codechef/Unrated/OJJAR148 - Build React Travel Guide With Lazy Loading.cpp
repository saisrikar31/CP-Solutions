===FILENAME:src/App.jsx===

import { lazy, Suspense } from 'react';
import { Routes, Route } from 'react-router-dom';
import Navbar from './components/Navbar';

const Home = lazy(() => import('./pages/Home'));
const Destinations = lazy(() => import('./pages/Destinations'));
const About = lazy(() => import('./pages/About'));
const Contact = lazy(() => import('./pages/Contact'));

export default function App() {
  return (
      <div className="app">
            <Navbar />
                  <div className="content">
                          <Suspense fallback={<div>Loading...</div>}>
                                    <Routes>
                                                <Route path="/" element={<Home />} />
                                                            <Route path="/destinations" element={<Destinations />} />
                                                                        <Route path="/about" element={<About />} />
                                                                                    <Route path="/contact" element={<Contact />} />
                                                                                              </Routes>
                                                                                                      </Suspense>
                                                                                                            </div>
                                                                                                                </div>
                                                                                                                  );
                                                                                                                  }
                                                                                                                  
===FILENAME:src/pages/Home.jsx===

import React from 'react';

export default function Home() {
  return (
      <div>
            <style>{`
                    body {
                              background-color: #f0f0f0;
                                      }

                                              h1 {
                                                        font-size: 36px;
                                                                  font-weight: bold;
                                                                            color: #2c3e50;
                                                                                      margin-bottom: 20px;
                                                                                              }

                                                                                                      p {
                                                                                                                font-size: 18px;
                                                                                                                          color: #555;
                                                                                                                                  }
                                                                                                                                        `}</style>

                                                                                                                                              <h1>🏡 Welcome to Travel Guide</h1>
                                                                                                                                                    <p>Discover amazing places around the world!</p>
                                                                                                                                                        </div>
                                                                                                                                                          );
                                                                                                                                                          }
                                                                                                                                                          
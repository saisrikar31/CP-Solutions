===FILENAME:src/App.jsx===

import { Routes, Route } from 'react-router-dom';
import Home from './Home';
import Dashboard from './Dashboard';
import Profile from './Profile';
import Settings from './Settings';

function App() {
  return (
      <Routes>
            <Route path="/" element={<Home />} />

                  <Route path="/dashboard" element={<Dashboard />}>
                          <Route path="profile" element={<Profile />} />
                                  <Route path="settings" element={<Settings />} />
                                        </Route>
                                            </Routes>
                                              );
                                              }

                                              export default App;
                                              
===FILENAME:src/Dashboard.jsx===

import { Link, Outlet } from 'react-router-dom';

function Dashboard() {
  return (
      <div>
            <h1>Dashboard</h1>

                  <nav>
                          <Link to="/dashboard/profile">Profile</Link>
                                  {' | '}
                                          <Link to="/dashboard/settings">Settings</Link>
                                                </nav>

                                                      <Outlet />
                                                          </div>
                                                            );
                                                            }

                                                            export default Dashboard;
                                                            
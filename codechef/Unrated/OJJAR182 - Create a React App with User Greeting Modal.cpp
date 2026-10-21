===FILENAME:src/App.jsx===

import { useContext } from 'react';
import { UserProvider, UserContext } from './context/UserContext';
import useFetchUser from './hooks/useFetchUser';
import Modal from './components/Modal';
import './App.css';

const InnerApp = () => {
  const { user, isModalOpen, setIsModalOpen } = useContext(UserContext);

    useFetchUser();

      return (
          <div className="App">
                <h1>🌟 React Welcome Modal</h1>

                      {user ? (
                              <p>
                                        You are logged in as <strong>{user.name}</strong>.
                                                </p>
                                                      ) : (
                                                              <p>Loading user...</p>
                                                                    )}

                                                                          {isModalOpen && user && <Modal />}

                                                                                {!isModalOpen && user && (
                                                                                        <button
                                                                                                  className="modal-button"
                                                                                                            onClick={() => setIsModalOpen(true)}
                                                                                                                    >
                                                                                                                              Show Welcome Again
                                                                                                                                      </button>
                                                                                                                                            )}
                                                                                                                                                </div>
                                                                                                                                                  );
                                                                                                                                                  };

                                                                                                                                                  const App = () => (
                                                                                                                                                    <UserProvider>
                                                                                                                                                        <InnerApp />
                                                                                                                                                          </UserProvider>
                                                                                                                                                          );

                                                                                                                                                          export default App;
                                                                                                                                                          
===FILENAME:src/components/Modal.jsx===

import { useContext } from 'react';
import { UserContext } from '../context/UserContext';

const Modal = () => {
  const { user, setIsModalOpen } = useContext(UserContext);

    return (
        <div className="modal-backdrop">
              <div className="modal">
                      <h2>👋 Hello, {user.name}!</h2>
                              <p>Welcome to the app. We're glad you're here!</p>

                                      <button onClick={() => setIsModalOpen(false)}>
                                                Close
                                                        </button>
                                                              </div>
                                                                  </div>
                                                                    );
                                                                    };

                                                                    export default Modal;
                                                                    
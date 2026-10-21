===FILENAME:src/App.jsx===

import './App.css';

// Generic Card component
function Card({ headerContent, children, footerContent }) {
  return (
      <div className="card">
            <div className="card-header">
                    {headerContent}
                          </div>

                                <div className="card-body">
                                        {children}
                                              </div>

                                                    <div className="card-footer">
                                                            {footerContent}
                                                                  </div>
                                                                      </div>
                                                                        );
                                                                        }

                                                                        // Generic layout component
                                                                        function CardWrapper({ children }) {
                                                                          return (
                                                                              <div className="card-wrapper">
                                                                                    {children}
                                                                                        </div>
                                                                                          );
                                                                                          }

                                                                                          // Generic layout component
                                                                                          function MainContentArea({ children }) {
                                                                                            return (
                                                                                                <main className="main-content-area">
                                                                                                      {children}
                                                                                                          </main>
                                                                                                            );
                                                                                                            }

                                                                                                            // Top-level page component
                                                                                                            function UserProfilePage() {
                                                                                                              const userData = {
                                                                                                                  name: 'Alice Wonderland',
                                                                                                                      bio: 'Curious explorer of digital rabbit holes.',
                                                                                                                          actionText: 'View Profile',
                                                                                                                            };

                                                                                                                              return (
                                                                                                                                  <div className="app">
                                                                                                                                        <MainContentArea>
                                                                                                                                                <CardWrapper>
                                                                                                                                                          <Card
                                                                                                                                                                      headerContent={<h2>{userData.name}</h2>}
                                                                                                                                                                                  footerContent={
                                                                                                                                                                                                <button>
                                                                                                                                                                                                                {userData.actionText} {userData.name}
                                                                                                                                                                                                                              </button>
                                                                                                                                                                                                                                          }
                                                                                                                                                                                                                                                    >
                                                                                                                                                                                                                                                                <p>{userData.bio}</p>
                                                                                                                                                                                                                                                                          </Card>
                                                                                                                                                                                                                                                                                  </CardWrapper>
                                                                                                                                                                                                                                                                                        </MainContentArea>
                                                                                                                                                                                                                                                                                            </div>
                                                                                                                                                                                                                                                                                              );
                                                                                                                                                                                                                                                                                              }

                                                                                                                                                                                                                                                                                              export default UserProfilePage;
                                                                                                                                                                                                                                                                                              
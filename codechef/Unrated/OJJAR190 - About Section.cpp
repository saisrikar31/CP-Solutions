===FILENAME:src/components/About.jsx===

function About() {
  return (
      <section id="about" className="about-section">
            <h2>About Me</h2>

                  <p>
                          I am a Computer Science Engineering student passionate
                                  about software development and creating innovative
                                          web applications. I enjoy learning new technologies
                                                  and solving real-world problems through code.
                                                        </p>

                                                              <h3>My Skills</h3>

                                                                    <ul className="skills-list">
                                                                            <li>HTML5</li>
                                                                                    <li>CSS3</li>
                                                                                            <li>JavaScript</li>
                                                                                                    <li>React</li>
                                                                                                            <li>Node.js</li>
                                                                                                                    <li>MongoDB</li>
                                                                                                                          </ul>

                                                                                                                                <div className="about-actions">
                                                                                                                                        <a
                                                                                                                                                  href="/resume.pdf"
                                                                                                                                                            className="btn btn-primary"
                                                                                                                                                                      download
                                                                                                                                                                              >
                                                                                                                                                                                        Download Resume
                                                                                                                                                                                                </a>
                                                                                                                                                                                                      </div>
                                                                                                                                                                                                          </section>
                                                                                                                                                                                                            );
                                                                                                                                                                                                            }

                                                                                                                                                                                                            export default About;
                                                                                                                                                                                                            
===FILENAME:src/App.jsx===
import './App.css';

// Import Components
import Header from './components/Header';
import Hero from './components/Hero';
import About from './components/About';
import Projects from './components/Projects';
import Blog from './components/Blog';
import Contact from './components/Contact';
import Footer from './components/Footer';

function App() {
  return (
      <div className="App">
            <Header />
                  <main>
                          <Hero />
                                  <About />
                                          <Projects />
                                                  <Blog />
                                                          <Contact />
                                                                </main>
                                                                      <Footer />
                                                                          </div>
                                                                            );
                                                                            }

                                                                            export default App;
===FILENAME:src/components/About.jsx===

function About() {
  return (
      <div>
            <p>This is the About component.</p>
                </div>
                  );
                  }

                  export default About;
                  
===FILENAME:src/components/Blog.jsx===

function Blog() {
  return (
      <div>
            <p>This is the Blog component.</p>
                </div>
                  );
                  }

                  export default Blog;
                  
===FILENAME:src/components/Contact.jsx===

function Contact() {
  return (
      <div>
            <p>This is the Contact component.</p>
                </div>
                  );
                  }

                  export default Contact;
                  
===FILENAME:src/components/Footer.jsx===

function Footer() {
  return (
      <div>
            <p>This is the Footer component.</p>
                </div>
                  );
                  }

                  export default Footer;
                  
===FILENAME:src/components/Header.jsx===
function Header() {
      return (
          <div>
                <p>This is the Header component.</p>
                    </div>
                      );
                      }

                      export default Header;

===FILENAME:src/components/Hero.jsx===

function Hero() {
  return (
      <div>
            <p>This is the Hero component.</p>
                </div>
                  );
                  }

                  export default Hero;
                  
===FILENAME:src/components/Projects.jsx===

function Projects() {
  return (
      <div>
            <p>This is the Projects component.</p>
                </div>
                  );
                  }

                  export default Projects;
                  
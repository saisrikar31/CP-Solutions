===FILENAME:src/App.jsx===
import styles from './Notification.module.css';

export function Notification({ message }) {
  return (
  <div className={styles.notification}>
                {message}
                                </div>
  );
}

function App() {
  return (
    <div>
      <Notification message="Success! Your changes have been saved." />
      <Notification message="File uploaded successfully!" />
    </div>
  );
}

export default App;


===FILENAME:src/Notification.module.css===

.notification {
    /* Green background */
    /* Displays text in white */
    /* Uses padding of 12px */
    /* Uses margin of 10px 0 */
    /* Rounded corners (uses border-radius 4px) */
}
  
.notification:hover {
    /* Darker green on hover */
}
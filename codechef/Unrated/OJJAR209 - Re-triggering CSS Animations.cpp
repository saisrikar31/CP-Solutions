===FILENAME:src/PriceDisplay.jsx===

import styles from './styles.module.css';

function PriceDisplay({ price }) {
  console.log(`Rendering PriceDisplay with price: ${price}, key: ${price}`);

    return (
        <div className={styles.wrapper}>
              <div key={price} className={styles.animated}>
                      {'$' + price}
                            </div>
                                </div>
                                  );
                                  }

                                  export default PriceDisplay;
                                  
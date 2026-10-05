===FILENAME:index.js===
// Simulated weather API function
function fetchWeather(city) {
    return new Promise((resolve, reject) => {
          setTimeout(() => {
                  const success = Math.random() > 0.5;
                          if (success) {
                                    resolve({ city, temp: "30°C", condition: "Sunny" });
                                            } else {
                                                      reject(`Error: Could not fetch weather for ${city}`);
                                                              }
                                                                    }, 50);
                                                                        });
                                                                          }
                                                                            
                                                                              // 1️⃣ Using async/await
                                                                                async function getWeatherAsync(city) {
                                                                                    try {
                                                                                          const data = await fetchWeather(city);
                                                                                                console.log("Async/Await:", data);
                                                                                                    } catch (err) {
                                                                                                          console.error("Async/Await Error:", err);
                                                                                                              }
                                                                                                                }
                                                                                                                  
                                                                                                                    // 2️⃣ Using .then()/.catch()
                                                                                                                      function getWeatherPromise(city) {
                                                                                                                          fetchWeather(city)
                                                                                                                                .then(data => {
                                                                                                                                        console.log("Promise:", data);
                                                                                                                                              })
                                                                                                                                                    .catch(err => {
                                                                                                                                                            console.error("Promise Error:", err);
                                                                                                                                                                  });
                                                                                                                                                                    }
                                                                                                                                                                      
                                                                                                                                                                        // 3️⃣ Using callback style
                                                                                                                                                                          function fetchWeatherWithCallback(city, callback) {
                                                                                                                                                                              setTimeout(() => {
                                                                                                                                                                                    const success = Math.random() > 0.5;
                                                                                                                                                                                          if (success) {
                                                                                                                                                                                                  callback(null, { city, temp: "30°C", condition: "Sunny" });
                                                                                                                                                                                                        } else {
                                                                                                                                                                                                                callback(`Error: Could not fetch weather for ${city}`, null);
                                                                                                                                                                                                                      }
                                                                                                                                                                                                                          }, 50);
                                                                                                                                                                                                                            }
                                                                                                                                                                                                                              
                                                                                                                                                                                                                                function getWeatherCallback(city) {
                                                                                                                                                                                                                                    fetchWeatherWithCallback(city, (err, data) => {
                                                                                                                                                                                                                                          if (err) {
                                                                                                                                                                                                                                                  console.error("Callback Error:", err);
                                                                                                                                                                                                                                                        } else {
                                                                                                                                                                                                                                                                console.log("Callback:", data);
                                                                                                                                                                                                                                                                      }
                                                                                                                                                                                                                                                                          });
                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                              
                                                                                                                                                                                                                                                                                // ✅ Example usage
                                                                                                                                                                                                                                                                                  getWeatherAsync("Delhi");
                                                                                                                                                                                                                                                                                    getWeatherPromise("Mumbai");
                                                                                                                                                                                                                                                                                      getWeatherCallback("Bangalore");
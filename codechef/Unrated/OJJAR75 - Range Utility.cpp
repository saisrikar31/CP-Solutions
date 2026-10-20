===FILENAME:src/App.jsx===
const range = (start, end, step = 1) => {
  let result = [];

  if (typeof end === 'undefined') {
    end = start;
    start = 0;
  }

  for (let i = start; i < end; i += step) {
    result.push(i);
  }

  return result;
};

// update this function 
function NumberBoxes({ count }) {  
  return (  
    <ul>
        {range(1, count + 1).map((num) => (
                                                        <li key={num}>{num}</li>
                                                                                                            ))}
        




    </ul>
  );  
}

export default function App() {
  return (
    <NumberBoxes count={3} />
  );
}
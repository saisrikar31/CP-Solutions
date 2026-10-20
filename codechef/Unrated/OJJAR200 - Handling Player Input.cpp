===FILENAME:src/App.jsx===
import { useState } from 'react'; // Ensure useEffect is imported
import './App.css';

// (Previous code for SIZE, getEmptyBoard, getRandomInt, addRandomTile remains the same)
const SIZE = 4;

function getEmptyBoard() {
  return Array(SIZE).fill(null).map(() => Array(SIZE).fill(0));
}

function getRandomInt(max) {
  return Math.floor(Math.random() * max);
}

function addRandomTile(board) {
  const newBoard = board.map(row => [...row]);
  const emptyTiles = [];
  for (let r = 0; r < SIZE; r++) {
    for (let c = 0; c < SIZE; c++) {
      if (newBoard[r][c] === 0) {
        emptyTiles.push([r, c]);
      }
    }
  }
  if (emptyTiles.length === 0) {
    return newBoard;
  }
  const [r, c] = emptyTiles[getRandomInt(emptyTiles.length)];
  newBoard[r][c] = Math.random() < 0.9 ? 2 : 4;
  return newBoard;
}

function App() {
  const [board, setBoard] = useState(() => {
    let startingBoard = getEmptyBoard();
    startingBoard = addRandomTile(startingBoard);
    startingBoard = addRandomTile(startingBoard);
    return startingBoard;
  });

  // --- TODO: Implement Part 3: Handling Player Input ---

  // STEP 1: Create a keydown event handler function.
  // This function will be called whenever a key is pressed.
  // It receives an 'event' object as an argument.
  // Inside this function:
  //   - Check `event.key` to see which key was pressed.
  //   - If it's 'ArrowLeft', console.log("ArrowLeft pressed").
  //   - If it's 'ArrowRight', console.log("ArrowRight pressed").
  //   - If it's 'ArrowUp', console.log("ArrowUp pressed").
  //   - If it's 'ArrowDown', console.log("ArrowDown pressed").


  // STEP 2: Use the `useEffect` hook to add and remove the event listener.
  //   - The effect should run once when the component mounts.
  //   - It should add an event listener for the 'keydown' event on the `window` object,
  //     calling your `handleKeyDown` function.
  //   - It should return a cleanup function that removes the event listener
  //     when the component unmounts. This is important to prevent memory leaks.

  // --- End of TODO for Part 3 ---

  return (
    <div className="container">
      <h1>2048 Game</h1>
      <div className="board">
        {board.map((row, rowIndex) => (
          <div key={rowIndex} className="row">
            {row.map((cell, cellIndex) => (
              <div key={cellIndex} className={`cell cell-${cell}`}>
                {cell !== 0 ? cell : ''}
              </div>
            ))}
          </div>
        ))}
      </div>
    </div>
  );
}

export default App;
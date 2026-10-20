===FILENAME:src/App.jsx===
import { useEffect, useState } from 'react';
import './App.css';

const SIZE = 4;

function getEmptyBoard() {
  return Array(SIZE).fill().map(() => Array(SIZE).fill(0));
}

function getRandomInt(max) {
  return Math.floor(Math.random() * max);
}

function addRandomTile(board) {
  const emptyTiles = [];
  for (let r = 0; r < SIZE; r++) {
    for (let c = 0; c < SIZE; c++) {
      if (board[r][c] === 0) emptyTiles.push([r, c]);
    }
  }
  if (emptyTiles.length === 0) return board;
  const [r, c] = emptyTiles[getRandomInt(emptyTiles.length)];
  board[r][c] = Math.random() < 0.9 ? 2 : 4;
  return board;
}

function reverse(board) {
  return board.map(row => [...row].reverse());
}

function compress(board) {
  let newBoard = board.map(row => {
    let newRow = row.filter(val => val !== 0);
    while (newRow.length < SIZE) newRow.push(0);
    return newRow;
  });
  return newBoard;
}

function moveLeft(board) {
  let newBoard = compress(board);
  return newBoard;
}

function moveRight(board) {
  let reversed = reverse(board);
  let newBoard = moveLeft(reversed);
  return reverse(newBoard);
}

function App() {
  const [board, setBoard] = useState(addRandomTile(addRandomTile(getEmptyBoard())));

  const handleKeyDown = (event) => {
    let newBoard;
    if (event.key === 'ArrowLeft') {
      newBoard = moveLeft(board);
    } else if (event.key === 'ArrowRight') {
      newBoard = moveRight(board);
    } else if (event.key === 'ArrowUp') {
      console.log('ArrowUp pressed');
      return;
    } else if (event.key === 'ArrowDown') {
      console.log('ArrowDown pressed');
      return;
    }
    else return ;


    const updatedBoard = addRandomTile([...newBoard]);
    setBoard(updatedBoard);
    
  };

  useEffect(() => {
    window.addEventListener('keydown', handleKeyDown);
    return () => window.removeEventListener('keydown', handleKeyDown);
  });

  return (
    <div className="container">
      <h1>2048 Game</h1>
      <div className="board">
        {board.map((row, rowIndex) => (
          <div key={rowIndex} className="row">
            {row.map((cell, cellIndex) => (
              <div key={cellIndex} className={`cell cell-${cell}`}>{cell !== 0 ? cell : ''}</div>
            ))}
          </div>
        ))}
      </div>
    </div>
  );
}

export default App;
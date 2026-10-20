===FILENAME:src/App.jsx===

import { useEffect, useState } from 'react';
import './App.css';

const SIZE = 4;

function getEmptyBoard() {
  return Array(SIZE).fill(null).map(() => Array(SIZE).fill(0));
  }

  function getRandomInt(max) {
    return Math.floor(Math.random() * max);
    }

    function addRandomTile(board) {
      const emptyCells = [];

        board.forEach((row, r) => {
            row.forEach((cell, c) => {
                  if (cell === 0) {
                          emptyCells.push([r, c]);
                                }
                                    });
                                      });

                                        if (emptyCells.length === 0) return board;

                                          const [r, c] = emptyCells[getRandomInt(emptyCells.length)];
                                            const newBoard = board.map(row => [...row]);
                                              newBoard[r][c] = Math.random() < 0.9 ? 2 : 4;

                                                return newBoard;
                                                }

                                                function getInitialBoard() {
                                                  let board = getEmptyBoard();
                                                    board = addRandomTile(board);
                                                      board = addRandomTile(board);
                                                        return board;
                                                        }

                                                        function compress(board) {
                                                          return board.map(row => {
                                                              const tiles = row.filter(cell => cell !== 0);

                                                                  return [
                                                                        ...tiles,
                                                                              ...Array(SIZE - tiles.length).fill(0)
                                                                                  ];
                                                                                    });
                                                                                    }

                                                                                    // Merge adjacent identical, non-zero tiles in each row.
                                                                                    function merge(board) {
                                                                                      for (let r = 0; r < SIZE; r++) {
                                                                                          for (let c = 0; c < SIZE - 1; c++) {
                                                                                                if (
                                                                                                        board[r][c] !== 0 &&
                                                                                                                board[r][c] === board[r][c + 1]
                                                                                                                      ) {
                                                                                                                              board[r][c] *= 2;
                                                                                                                                      board[r][c + 1] = 0;
                                                                                                                                            }
                                                                                                                                                }
                                                                                                                                                  }

                                                                                                                                                    return board;
                                                                                                                                                    }

                                                                                                                                                    function moveLeft(board) {
                                                                                                                                                      const compressedBoard = compress(board);
                                                                                                                                                        const mergedBoard = merge(compressedBoard);
                                                                                                                                                          return compress(mergedBoard);
                                                                                                                                                          }

                                                                                                                                                          function moveRight(board) {
                                                                                                                                                            const reversedBoard = board.map(row => [...row].reverse());
                                                                                                                                                              const movedBoard = moveLeft(reversedBoard);
                                                                                                                                                                return movedBoard.map(row => [...row].reverse());
                                                                                                                                                                }

                                                                                                                                                                function transpose(board) {
                                                                                                                                                                  return board.map((row, r) =>
                                                                                                                                                                      row.map((_, c) => board[c][r])
                                                                                                                                                                        );
                                                                                                                                                                        }

                                                                                                                                                                        function moveUp(board) {
                                                                                                                                                                          return transpose(moveLeft(transpose(board)));
                                                                                                                                                                          }

                                                                                                                                                                          function moveDown(board) {
                                                                                                                                                                            return transpose(moveRight(transpose(board)));
                                                                                                                                                                            }

                                                                                                                                                                            function boardsAreEqual(boardA, boardB) {
                                                                                                                                                                              return boardA.every((row, r) =>
                                                                                                                                                                                  row.every((cell, c) => cell === boardB[r][c])
                                                                                                                                                                                    );
                                                                                                                                                                                    }

                                                                                                                                                                                    function App() {
                                                                                                                                                                                      const [board, setBoard] = useState(getInitialBoard);

                                                                                                                                                                                        useEffect(() => {
                                                                                                                                                                                            function handleKeyDown(event) {
                                                                                                                                                                                                  const key = event.key;

                                                                                                                                                                                                        if (
                                                                                                                                                                                                                !['ArrowLeft', 'ArrowRight', 'ArrowUp', 'ArrowDown'].includes(key)
                                                                                                                                                                                                                      ) {
                                                                                                                                                                                                                              return;
                                                                                                                                                                                                                                    }

                                                                                                                                                                                                                                          event.preventDefault();

                                                                                                                                                                                                                                                let newBoard;

                                                                                                                                                                                                                                                      switch (key) {
                                                                                                                                                                                                                                                              case 'ArrowLeft':
                                                                                                                                                                                                                                                                        newBoard = moveLeft(board);
                                                                                                                                                                                                                                                                                  break;
                                                                                                                                                                                                                                                                                          case 'ArrowRight':
                                                                                                                                                                                                                                                                                                    newBoard = moveRight(board);
                                                                                                                                                                                                                                                                                                              break;
                                                                                                                                                                                                                                                                                                                      case 'ArrowUp':
                                                                                                                                                                                                                                                                                                                                newBoard = moveUp(board);
                                                                                                                                                                                                                                                                                                                                          break;
                                                                                                                                                                                                                                                                                                                                                  case 'ArrowDown':
                                                                                                                                                                                                                                                                                                                                                            newBoard = moveDown(board);
                                                                                                                                                                                                                                                                                                                                                                      break;
                                                                                                                                                                                                                                                                                                                                                                              default:
                                                                                                                                                                                                                                                                                                                                                                                        return;
                                                                                                                                                                                                                                                                                                                                                                                              }

                                                                                                                                                                                                                                                                                                                                                                                                    if (!boardsAreEqual(board, newBoard)) {
                                                                                                                                                                                                                                                                                                                                                                                                            setBoard(addRandomTile(newBoard));
                                                                                                                                                                                                                                                                                                                                                                                                                  }
                                                                                                                                                                                                                                                                                                                                                                                                                      }

                                                                                                                                                                                                                                                                                                                                                                                                                          window.addEventListener('keydown', handleKeyDown);

                                                                                                                                                                                                                                                                                                                                                                                                                              return () => {
                                                                                                                                                                                                                                                                                                                                                                                                                                    window.removeEventListener('keydown', handleKeyDown);
                                                                                                                                                                                                                                                                                                                                                                                                                                        };
                                                                                                                                                                                                                                                                                                                                                                                                                                          }, [board]);

                                                                                                                                                                                                                                                                                                                                                                                                                                            return (
                                                                                                                                                                                                                                                                                                                                                                                                                                                <div className="container">
                                                                                                                                                                                                                                                                                                                                                                                                                                                      <div className="board">
                                                                                                                                                                                                                                                                                                                                                                                                                                                              {board.map((row, rowIndex) => (
                                                                                                                                                                                                                                                                                                                                                                                                                                                                        <div className="row" key={rowIndex}>
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    {row.map((cell, cellIndex) => (
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                  <div
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                  key={cellIndex}
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                  className={`cell cell-${cell === 0 ? 0 : 1}`}
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                >
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
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                        
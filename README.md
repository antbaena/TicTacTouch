
# TicTacTouch GUI - C++ (CLR)

This project is a Graphical User Interface (GUI) implementation of the classic Tic-Tac-Toe game, developed in C++/CLR using Visual Studio Code. The game allows a human player to compete against the computer, with different levels of AI difficulty.

## Features

- **Single-player mode**: Play against the computer.
- **AI Difficulty Levels**:
  - **Easy**: Random moves.
  - **Medium**: Uses simple strategy (attempts to win or block the player).
  - **Hard**: Implements a Minimax algorithm with alpha-beta pruning for unbeatable gameplay.
- **Graphical Game Board**: A 3x3 grid where the player uses "X" and the computer uses "O".
- **Result Detection**: The game detects win conditions, draws, and updates the UI accordingly.
- **Interactive UI**: Buttons represent the Tic-Tac-Toe grid, allowing for smooth gameplay.

## Installation

To set up and run this project on your local machine, follow these steps:

### Prerequisites

- [Visual Studio Code](https://code.visualstudio.com/)
- [C++/CLR Compiler](https://docs.microsoft.com/en-us/cpp/dotnet/dotnet-programming-with-cpp-cli-visual-cpp?view=msvc-160) 
- [.NET Framework](https://dotnet.microsoft.com/download/dotnet-framework) for Windows Forms support

### Clone the Repository

```bash
git clone https://github.com/antbaena/tictactouch.git
cd tictactoe-cpp
```

### Build the Project

1. Open the project in Visual Studio Code.
2. Ensure that you have the **C++/CLR** extension installed, as well as **Windows Forms** support.
3. Compile and run the project using the Visual Studio Code task runner or terminal commands.

## How to Play
1. Select the difficulty level and hit the button to start the game.
2. The game board is displayed as a 3x3 grid of buttons.
3. The player plays as "X" and the computer plays as "O".
4. Click on an empty square to place your mark.
5. The computer will make its move based on the selected difficulty.
6. The game will declare a winner when three marks align in a row (horizontally, vertically, or diagonally), or declare a draw if no more moves are possible.

## AI Levels

- **Easy**: Randomly selects an available square.
- **Medium**: The AI attempts to either win or block the player.
- **Hard**: The AI uses the Minimax algorithm with alpha-beta pruning, making it unbeatable.

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

# Minesweeper Game Documentation

## Overview
This is a C++ implementation of a simple Minesweeper game where the player mines hearts or spades based on the chosen difficulty level. The game generates a grid of letters representing cards, some of which contain hearts (to be mined) while others contain spades. The player aims to uncover all hearts within a limited number of tries to score points.

## Features
- **Difficulty Levels**: The game offers four difficulty levels: Novice, Fresher, Junior, and Expert, each with varying numbers of total hearts and allotted tries.
- **Random Heart Placement**: Hearts are randomly placed on the game grid, making each game session unique.
- **Scoring System**: Points are awarded based on the number of hearts found and the total number of tries.
- **Statistics Tracking**: Game statistics such as game number, score, difficulty level, total hearts, hearts found, and total turns are recorded in a file named `Stats.txt`.
- **Play Again Option**: After completing a game, the player has the option to play again or exit the game.

## How to Run
1. Compile the C++ code using a suitable compiler.
2. Execute the compiled binary.
3. Follow on-screen instructions to play the game:
   - Choose the difficulty level.
   - Enter an alphabet from the game board to mine- Alphabet should always be capital.
   - Continue mining hearts within the allotted tries.
   - Upon completion, choose to play again or exit.

## Files
- **main.cpp**: Contains the source code for the Minesweeper game.
- **Stats.txt**: Stores game statistics including game number, score, difficulty level, total hearts, hearts found, and total turns.

## Dependencies
- **iostream**: Input/output stream handling.
- **time.h**: Provides functionality for time-related operations.
- **stdlib.h**: Standard library functions like `rand()` for generating random numbers.
- **conio.h**: Console input/output functions for Windows platforms (may require adjustments for other platforms).
- **string**: String manipulation capabilities.
- **fstream**: Input/output operations on files.
- **iomanip**: Input/output manipulators for formatting output.

## Notes
- This code assumes a Windows environment due to the use of `conio.h`. Adjustments may be necessary for compatibility with other operating systems.
- Ensure that the appropriate compiler and build environment are set up to compile and run the C++ code.

## License
This project is licensed under the [MIT License](LICENSE).


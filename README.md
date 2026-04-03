## README: Rock Paper Scissors CLI (C Edition)

This repository contains a robust, command-line interface (CLI) implementation of the classic **Rock, Paper, Scissors** game written in C. It features personalized gameplay, customizable round counts, and input validation to ensure a smooth user experience.

---

### ## Key Features

* **Personalized Experience**: The game greets you by name and tracks your specific score against the CPU.
* **Flexible Game Length**: Choose between a quick 3-round match, a 5-round battle, or define your own custom number of rounds.
* **Input Validation**: Includes logic to handle invalid inputs (like letters or out-of-range numbers) without crashing the program.
* **Replayability**: After a tournament ends, you can immediately start a new session without restarting the application.
* **Visual Flair**: Utilizes emojis and clear formatting to make the terminal output engaging.

---

### ## How to Run

1.  **Prerequisites**: Ensure you have a C compiler installed, such as `gcc`.
2.  **Compilation**: Open your terminal and run:
    ```bash
    gcc "Rock paper scissor game.c" -o rps_game
    ```
3.  **Execution**: Run the compiled binary:
    ```bash
    ./rps_game
    ```

---

### ## Game Logic & Rules

The game follows the standard rules of Rock, Paper, Scissors:
* **Rock** beats **Scissors**.
* **Paper** beats **Rock**.
* **Scissors** beats **Paper**.

The CPU's moves are randomized using the `rand()` function seeded with the current time to ensure a different experience every game.

---

### ## Code Structure

| Component | Description |
| :--- | :--- |
| **`main()`** | Handles the primary game loop, name entry, and round selection. |
| **`playRound()`** | Manages individual round logic, compares choices, and updates scores. |
| **`showChoice()`** | A helper function to print the text and emoji representation of a move. |

---

Would you like me to add a section on how to contribute or perhaps help you expand the game to include "Rock Paper Scissors Lizard Spock"?

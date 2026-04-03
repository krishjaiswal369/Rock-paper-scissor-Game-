# 🪨 Paper 🧻 Scissors ✂️ (C Language Edition)

A classic, console-based implementation of **Rock Paper Scissors** written in C. This version features personalized gameplay, customizable round lengths, and robust input validation to ensure a smooth user experience.

## 🚀 Features

* **Personalization:** Enter your name to see customized messages throughout the match.
* **Flexible Match Lengths:** Choose between a Quick Match (3 rounds), a Standard Match (5 rounds), or a Custom length.
* **Input Validation:** The game handles non-numeric inputs and out-of-range choices without crashing.
* **Score Tracking:** Real-time score updates after every round and a final tournament summary.
* **Replayability:** Option to restart a new game immediately after finishing a match.

---

## 🛠️ How to Compile and Run

To run this game, you need a C compiler (like `gcc` or `clang`).

### 1. Compilation
Open your terminal or command prompt and navigate to the folder containing the file:
```bash
gcc rock_paper_scissors.c -o rps_game
```

### 2. Execution
Run the compiled program:
```bash
./rps_game
```

---

## 🎮 How to Play

1.  **Enter your Name:** Start by introducing yourself to the CPU.
2.  **Select Match Length:** Pick how many rounds you want the tournament to last.
3.  **Make Your Move:** In every round, enter a number:
    * `1` for **Rock**
    * `2` for **Paper**
    * `3` for **Scissors**
4.  **Win the Match:** The player with the highest score at the end of the specified rounds is crowned the champion!

---

## 🧠 Logic Breakdown

The game logic follows the standard rules:
* **Rock** beats **Scissors**
* **Paper** beats **Rock**
* **Scissors** beats **Paper**

The CPU move is generated using a pseudo-random number generator:
```c
computerChoice = (rand() % 3) + 1;
```

---

## 📝 Code Structure

| Function | Description |
| :--- | :--- |
| `main()` | Handles the game loop, round selection, and final scoring. |
| `playRound()` | Logic for a single round: gets user input, generates CPU move, and determines the winner. |
| `showChoice()` | A helper function to translate numeric inputs into emoji-friendly text. |

---

## 🔧 Requirements
* A C99-compliant compiler.
* Standard Libraries: `stdio.h`, `stdlib.h`, `time.h`, `locale.h`, `ctype.h`.

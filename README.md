# 🎮 Rock 🪨 Paper 🧻 Scissors ✂️ Game

A fun, interactive **C program** that lets you play Rock–Paper–Scissors against the CPU.  
The game supports multiple rounds, custom round selection, and personalized player names.

---

## ✨ Features
- 🧑 Enter your **name** to personalize the game.
- 🔄 Choose the number of rounds:
  - 3 rounds
  - 5 rounds
  - Custom number of rounds
- 🎲 Random CPU moves using `rand()`.
- 🏆 Keeps track of scores across rounds.
- 🎉 Displays final results with fun emojis.
- 🔁 Option to replay the game.

---

## 📂 File Structure
rock_paper_scissors.c   # Main source code
README.md               # Documentation

Code

---

## ⚙️ How to Compile and Run
1. Open a terminal and navigate to the project folder.
2. Compile the program using `gcc`:
   ```bash
   gcc rock_paper_scissors.c -o rps
Run the executable:

bash
./rps
🕹️ Gameplay Instructions
Enter your name when prompted.

Select the number of rounds (3, 5, or custom).

For each round, choose:

1 → Rock 🪨

2 → Paper 🧻

3 → Scissors ✂️

The CPU will randomly select its move.

Scores are updated after each round.

At the end, the final winner is announced.

📖 Example Run
Code
=== WELCOME TO ROCK 🪨 PAPER 🧻 SCISSORS ✂️ ===
Enter your name, hero: Krish

Hello, Krish! How many rounds would you like to play?
1. 3 Rounds
2. 5 Rounds
3. Custom Number (N)
Selection: 1

--- ROUND 1 of 3 ---
Krish, choose your move (1:Rock, 2:Paper, 3:Scissors): 1
Krish: Rock 🪨
CPU: Scissors ✂️
Result: Krish wins this round! 🎉
🛠️ Dependencies
Standard C libraries:

<stdio.h>

<stdlib.h>

<time.h>

<locale.h>

<ctype.h>

No external dependencies required.

🚀 Future Enhancements
Add multiplayer mode.

Track win history across sessions.

Implement graphical UI version.

👋 Credits
Developed as a simple C programming project to practice:

Input validation

Random number generation

Loops and conditionals

Function usage
Code

Would you like me to also create a **student

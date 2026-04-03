#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>
#include <ctype.h>

// Updated Function Prototypes to accept the player name
void playRound(int *playerScore, int *cpuScore, char name[]);
void showChoice(int choice);

int main() {
    setlocale(LC_ALL, ""); 
    srand(time(NULL));

    char playAgain;
    char playerName[50]; // Buffer to hold the user's name

    printf("\n=== WELCOME TO ROCK 🪨 PAPER 🧻 SCISSORS ✂️ ===\n");
    
    // --- Get User Name ---
    printf("Enter your name, hero: ");
    // Using %49s to prevent buffer overflow and read a single word
    scanf("%49s", playerName); 

    do {
        int playerTotal = 0, cpuTotal = 0;
        int totalRounds = 0;
        int choice;

        // --- Round Selection ---
        printf("\nHello, %s! How many rounds would you like to play?\n", playerName);
        printf("1. 3 Rounds\n");
        printf("2. 5 Rounds\n");
        printf("3. Custom Number (N)\n");
        printf("Selection: ");
        
        if (scanf("%d", &choice) != 1) {
            printf("Invalid input. Defaulting to 3 rounds.\n");
            totalRounds = 3;
            while(getchar() != '\n'); 
        } else {
            if (choice == 1) totalRounds = 3;
            else if (choice == 2) totalRounds = 5;
            else if (choice == 3) {
                printf("Enter number of rounds: ");
                scanf("%d", &totalRounds);
            } else {
                printf("Invalid selection. Defaulting to 3 rounds.\n");
                totalRounds = 3;
            }
        }

        // --- Main Game Loop ---
        for (int i = 1; i <= totalRounds; i++) {
            printf("\n--- ROUND %d of %d ---", i, totalRounds);
            playRound(&playerTotal, &cpuTotal, playerName);
        }

        // --- Final Tournament Result ---
        printf("\n======================================\n");
        printf("FINAL SCORE - %s: %d | CPU: %d\n", playerName, playerTotal, cpuTotal);
        
        if (playerTotal > cpuTotal) {
            printf("CONGRATULATIONS, %s! You are the champion! 🏆\n", playerName);
        } else if (cpuTotal > playerTotal) {
            printf("GAME OVER! The CPU wins the match! 🤖\n");
        } else {
            printf("IT'S A DRAW! Great minds think alike. 🤝\n");
        }
        printf("======================================\n");

        printf("\nWould you like to start a new game? (y/n): ");
        scanf(" %c", &playAgain);
        playAgain = tolower(playAgain);

    } while (playAgain == 'y');

    printf("\nGoodbye, %s! Have a nice day! 👋\n", playerName);

    return 0;
}

void playRound(int *playerScore, int *cpuScore, char name[]) {
    int playerChoice = 0, computerChoice;

    while (playerChoice < 1 || playerChoice > 3) {
        printf("\n%s, choose your move (1:Rock, 2:Paper, 3:Scissors): ", name);
        if (scanf("%d", &playerChoice) != 1 || playerChoice < 1 || playerChoice > 3) {
            printf("❌ Invalid choice! Please enter 1, 2, or 3.\n");
            while(getchar() != '\n'); 
            playerChoice = 0; 
        }
    }

    computerChoice = (rand() % 3) + 1;

    printf("%s: ", name); showChoice(playerChoice);
    printf("CPU: "); showChoice(computerChoice);

    if (playerChoice == computerChoice) {
        printf("Result: It's a Tie! 🤝\n");
    } else if ((playerChoice == 1 && computerChoice == 3) || 
               (playerChoice == 2 && computerChoice == 1) || 
               (playerChoice == 3 && computerChoice == 2)) {
        printf("Result: %s wins this round! 🎉\n", name);
        (*playerScore)++;
    } else {
        printf("Result: CPU Wins this round! 🤖\n");
        (*cpuScore)++;
    }
}

void showChoice(int choice) {
    if (choice == 1) printf("Rock 🪨\n");
    else if (choice == 2) printf("Paper 🧻\n");
    else printf("Scissors ✂️\n");
}


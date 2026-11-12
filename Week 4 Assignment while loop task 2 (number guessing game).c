#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int secretNum, guess;
    int attempts = 0; // Counter for total attempts

    // Initialize random seed based on current time
    srand(time(0));

    // Generate random number between 1 and 20 (inclusive)
    secretNum = (rand() % 20) + 1;

    printf("--- Number Guessing Game (1 to 20) ---\n");

    // Loop until the player guesses correctly
    while (1) {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++; // Increment attempt count on every guess

        if (guess > secretNum) {
            printf("Too high!\n");
        } else if (guess < secretNum) {
            printf("Too low!\n");
        } else {
            printf("Congratulations!\n");
            printf("It took you %d attempts to guess correctly.\n", attempts);
            break; // Exit loop on correct guess
        }
    }

    return 0;
}

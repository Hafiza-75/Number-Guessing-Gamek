#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int random, guess, guess_number = 0;
    srand(time(NULL));

    // Greeting
    printf(" Welcome to the Number Guessing Game!\n");
    printf("\nGuess a number between 1 and 100. Let's see how close you get!\n");

    random = rand() % 100 + 1; // Generating number between 1 and 100

    do {
        printf("\nEnter your guess: ");
        scanf("%d", &guess);
        guess_number++;

        if (guess < random) {
            printf("Too low! Try a bigger number.\n");
        } else if (guess > random) {
            printf("Too high! Try a smaller number.\n");
        } else {
            printf("\nAmazing! You nailed it in %d attempts!\n", guess_number);
        }

    } while (guess != random);

    // Goodbye message
    printf("\nThanks for playing! See you next time!\n");
    printf("Developed by: Hafiza Tahreem Arshad\n");

    return 0;
}

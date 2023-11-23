#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Initialize random number generator with current time
    srand(time(NULL));

    // Generate a random number between 1 and 100
    int randomNumber = rand() % 100 + 1;

    int guess;
    int attempts = 0;

    printf("Welcome to the Number Guessing Game!\n");
    printf("I have selected a random number between 1 and 100.\n");

    do {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;

        if (guess < randomNumber) {
            printf("Too low! Try again.\n");
        } else if (guess > randomNumber) {
            printf("Too high! Try again.\n");
        } else {
            printf("Congratulations! You guessed the number %d in %d attempts!\n", randomNumber, attempts);
        }
    } while (guess != randomNumber);

    return 0;
}

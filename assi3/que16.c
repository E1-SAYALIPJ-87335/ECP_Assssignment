#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int magicNumber, guess;
    int attempts = 0;
    const int maxAttempts = 10;

    
    srand(time(NULL));
    magicNumber = rand() % 1000 + 1; 

    printf("Welcome to the 'Guess the Magic Number' game!\n");
    printf("I have selected a magic number between 1 and 1000.\n");
    printf("You have %d chances to guess the number.\n", maxAttempts);

    do {
        printf("Enter your guess: ");
        scanf("%d", &guess);

        if (guess < magicNumber) {
            printf("Left\n");
        } else if (guess > magicNumber) {
            printf("Right\n");
        } else {
            printf("Congrats! You won.\n");
            break;
        }

        attempts++;
        if (attempts >= maxAttempts) {
            printf("Sorry, you've used all your chances. The magic number was %d.\n", magicNumber);
            break;
        }
    } while (1);

    return 0;
}


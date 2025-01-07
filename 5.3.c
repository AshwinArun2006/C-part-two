#include <stdio.h>

int main() {
    int secret_number = 25; 
    int user_guess, attempts = 0;
    do {
        printf("Guess the secret number between 20 and 30: ");
        scanf("%d", &user_guess);
        attempts++; 
        if (user_guess < secret_number) {
            printf("Too low! Try again.\n");
        } else if (user_guess > secret_number) {
            printf("Too high! Try again.\n");
        }

    } while (user_guess != secret_number);
    printf("Congratulations! You've guessed the secret number %d in %d attempts.\n", secret_number, attempts);
    return 0;
}


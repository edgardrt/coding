#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int secret, guess;

    srand(time(0));
    secret = (rand() % 20) + 1;  // 1–20

    while (true) {
        printf("Enter your guess (1-20, 99 to quit): ");
        scanf("%d", &guess);

        if (guess == 99) {
            printf("You quit the game.\n");
            break;
        } else if (guess < secret) {
            printf("Higher!\n");
        } else if (guess > secret) {
            printf("Lower!\n");
        } else {
            printf("Correct! The number was %d\n", secret);
            break;
        }
    }

    return 0;
}

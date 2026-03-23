#include <stdio.h>

int main() {
    int i = 1;
    while (i <= 10) {
        if (i == 5) {
            printf("Stopping loop at i = %d\n", i);
            break;
        }
        printf("%d\n", i);
        i++;
    }
    return 0;
}

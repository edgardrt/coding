#include <stdio.h>

int main() {
    char light;
    printf("Enter traffic light color (R, Y, G): ");
    scanf(" %c", &light);

    switch (light) {
        case 'R':
            printf("Stop.\n");
            break;
        case 'Y':
            printf("Slow down.\n");
            break;
        case 'G':
            printf("Go.\n");
            break;
        default:
            printf("Invalid color.\n");
    }

    return 0;
}

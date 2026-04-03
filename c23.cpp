#include <stdio.h>

void swap(int *a, int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x, y;

    printf("Masukkan x: ");
    scanf("%d", &x);
    printf("Masukkan y: ");
    scanf("%d", &y);

    swap(&x, &y);

    printf("Setelah ditukar:\n");
    printf("x = %d, y = %d\n", x, y);

    return 0;
}
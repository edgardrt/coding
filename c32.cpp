#include <stdio.h>

int main() {
    float r, luas;
    const float PI = 3.14;

    printf("Masukkan jari-jari: ");
    scanf("%f", &r);

    luas = PI * r * r;

    printf("Luas lingkaran: %.2f\n", luas);
    return 0;
}
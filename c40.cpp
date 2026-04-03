#include <stdio.h>

int main() {
    int a, b, temp;

    printf("Masukkan dua angka:\n");
    scanf("%d %d", &a, &b);

    // Algoritma Euclid
    while(b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }

    printf("FPB (GCD): %d\n", a);

    return 0;
}
#include <stdio.h>

int main() {
    int base, exp, hasil = 1;

    printf("Masukkan angka: ");
    scanf("%d", &base);
    printf("Masukkan pangkat: ");
    scanf("%d", &exp);

    for(int i = 0; i < exp; i++) {
        hasil *= base;
    }

    printf("Hasil: %d\n", hasil);
    return 0;
}
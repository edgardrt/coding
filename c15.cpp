#include <stdio.h>

int main() {
    int n, count = 0;

    printf("Masukkan angka: ");
    scanf("%d", &n);

    while(n != 0) {
        n /= 10;
        count++;
    }

    printf("Jumlah digit: %d\n", count);

    return 0;
}
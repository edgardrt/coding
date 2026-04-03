#include <stdio.h>

int main() {
    int n, rev = 0, sisa;

    printf("Masukkan angka: ");
    scanf("%d", &n);

    while(n != 0) {
        sisa = n % 10;
        rev = rev * 10 + sisa;
        n /= 10;
    }

    printf("Hasil dibalik: %d\n", rev);

    return 0;
}
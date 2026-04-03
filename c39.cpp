#include <stdio.h>
#include <math.h>

int main() {
    int n, original, sisa, jumlah = 0, digit = 0;

    printf("Masukkan angka: ");
    scanf("%d", &n);

    original = n;

    // hitung jumlah digit
    while(n != 0) {
        n /= 10;
        digit++;
    }

    n = original;

    // hitung jumlah pangkat digit
    while(n != 0) {
        sisa = n % 10;
        jumlah += pow(sisa, digit);
        n /= 10;
    }

    if(jumlah == original)
        printf("Armstrong\n");
    else
        printf("Bukan Armstrong\n");

    return 0;
}
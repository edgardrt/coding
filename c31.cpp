#include <stdio.h>

int main() {
    int n;
    float harga, total = 0;

    printf("Jumlah barang: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        printf("Harga barang ke-%d: ", i+1);
        scanf("%f", &harga);
        total += harga;
    }

    printf("Total belanja: %.2f\n", total);

    return 0;
}
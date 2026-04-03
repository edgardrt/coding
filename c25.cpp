#include <stdio.h>

int main() {
    int n, cari, ketemu = 0;

    printf("Jumlah data: ");
    scanf("%d", &n);

    int arr[n];

    for(int i = 0; i < n; i++) {
        printf("Data ke-%d: ", i+1);
        scanf("%d", &arr[i]);
    }

    printf("Cari angka: ");
    scanf("%d", &cari);

    for(int i = 0; i < n; i++) {
        if(arr[i] == cari) {
            printf("Ditemukan di index %d\n", i);
            ketemu = 1;
            break;
        }
    }

    if(!ketemu)
        printf("Data tidak ditemukan\n");

    return 0;
}
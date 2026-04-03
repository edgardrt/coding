#include <stdio.h>

int main() {
    int n, cari;

    printf("Jumlah data: ");
    scanf("%d", &n);

    int arr[n];

    printf("Masukkan data (HARUS URUT):\n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Cari angka: ");
    scanf("%d", &cari);

    int kiri = 0, kanan = n - 1, tengah;

    while(kiri <= kanan) {
        tengah = (kiri + kanan) / 2;

        if(arr[tengah] == cari) {
            printf("Ditemukan di index %d\n", tengah);
            return 0;
        } else if(arr[tengah] < cari) {
            kiri = tengah + 1;
        } else {
            kanan = tengah - 1;
        }
    }

    printf("Data tidak ditemukan\n");
    return 0;
}
#include <stdio.h>

struct Mahasiswa {
    char nama[50];
    float nilai;
};

int main() {
    int n;
    float total = 0, max;
    int indexMax = 0;

    printf("Jumlah mahasiswa: ");
    scanf("%d", &n);

    struct Mahasiswa mhs[n];

    for(int i = 0; i < n; i++) {
        printf("\nMahasiswa ke-%d\n", i+1);
        printf("Nama: ");
        scanf("%s", mhs[i].nama);
        printf("Nilai: ");
        scanf("%f", &mhs[i].nilai);

        total += mhs[i].nilai;

        if(i == 0 || mhs[i].nilai > max) {
            max = mhs[i].nilai;
            indexMax = i;
        }
    }

    printf("\nRata-rata nilai: %.2f\n", total/n);
    printf("Nilai tertinggi: %.2f (oleh %s)\n", max, mhs[indexMax].nama);

    return 0;
}
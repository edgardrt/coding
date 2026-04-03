#include <stdio.h>

int main() {
    int r, c;

    printf("Masukkan jumlah baris: ");
    scanf("%d", &r);
    printf("Masukkan jumlah kolom: ");
    scanf("%d", &c);

    int A[r][c], B[r][c], hasil[r][c];

    printf("Input Matriks A:\n");
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    printf("Input Matriks B:\n");
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    // Penjumlahan
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            hasil[i][j] = A[i][j] + B[i][j];
        }
    }

    printf("Hasil:\n");
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            printf("%d ", hasil[i][j]);
        }
        printf("\n");
    }

    return 0;
}
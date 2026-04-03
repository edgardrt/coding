#include <stdio.h>

int main() {
    int pilihan;

    do {
        printf("\n=== MENU ===\n");
        printf("1. Halo\n");
        printf("2. Hitung 2 + 2\n");
        printf("3. Keluar\n");
        printf("Pilih: ");
        scanf("%d", &pilihan);

        switch(pilihan) {
            case 1:
                printf("Halo user!\n");
                break;
            case 2:
                printf("Hasil: %d\n", 2 + 2);
                break;
            case 3:
                printf("Keluar...\n");
                break;
            default:
                printf("Pilihan tidak valid!\n");
        }

    } while(pilihan != 3);

    return 0;
}
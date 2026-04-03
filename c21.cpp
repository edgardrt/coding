#include <stdio.h>

int main() {
    FILE *fp;
    char teks[100];

    fp = fopen("data.txt", "w");

    if(fp == NULL) {
        printf("File gagal dibuat!\n");
        return 1;
    }

    printf("Masukkan teks: ");
    scanf(" %[^\n]", teks);

    fprintf(fp, "%s", teks);

    fclose(fp);
    printf("Data berhasil disimpan ke file.\n");

    return 0;
}
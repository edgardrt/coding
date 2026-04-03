#include <stdio.h>

int main() {
    FILE *fp;
    char teks[100];

    fp = fopen("data.txt", "a"); // append

    if(fp == NULL) {
        printf("File error!\n");
        return 1;
    }

    printf("Masukkan data: ");
    scanf(" %[^\n]", teks);

    fprintf(fp, "%s\n", teks);

    fclose(fp);
    printf("Data ditambahkan!\n");

    return 0;
}
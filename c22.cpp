#include <stdio.h>

int main() {
    FILE *fp;
    char teks[100];

    fp = fopen("data.txt", "r");

    if(fp == NULL) {
        printf("File tidak ditemukan!\n");
        return 1;
    }

    while(fgets(teks, sizeof(teks), fp)) {
        printf("%s", teks);
    }

    fclose(fp);
    return 0;
}
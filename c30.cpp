#include <stdio.h>

int main() {
    FILE *fp;
    char ch;
    int count = 0;

    fp = fopen("data.txt", "r");

    if(fp == NULL) {
        printf("File tidak ada!\n");
        return 1;
    }

    while((ch = fgetc(fp)) != EOF) {
        if(ch == '\n') {
            count++;
        }
    }

    fclose(fp);

    printf("Jumlah baris: %d\n", count);

    return 0;
}
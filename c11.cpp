#include <stdio.h>

int main() {
    int n, i, prima = 1;

    printf("Masukkan bilangan: ");
    scanf("%d", &n);

    if(n <= 1) {
        prima = 0;
    } else {
        for(i = 2; i <= n/2; i++) {
            if(n % i == 0) {
                prima = 0;
                break;
            }
        }
    }

    if(prima)
        printf("Bilangan Prima\n");
    else
        printf("Bukan Prima\n");

    return 0;
}
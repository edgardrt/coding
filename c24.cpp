#include <stdio.h>

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int *p;

    p = arr; // sama dengan &arr[0]

    printf("Isi array menggunakan pointer:\n");
    for(int i = 0; i < 5; i++) {
        printf("%d ", *(p + i));
    }

    printf("\n");
    return 0;
}
#include <stdio.h>

int main() {
    int n;
    float total = 0;

    printf("Jumlah data: ");
    scanf("%d", &n);

    float arr[n];

    for(int i = 0; i < n; i++) {
        printf("Data ke-%d: ", i+1);
        scanf("%f", &arr[i]);
        total += arr[i];
    }

    printf("Rata-rata: %.2f\n", total/n);

    return 0;
}
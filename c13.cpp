#include <stdio.h>

int main() {
    float c, f, k, r;

    printf("Masukkan suhu dalam Celsius: ");
    scanf("%f", &c);

    f = (c * 9/5) + 32;
    k = c + 273.15;
    r = c * 4/5;

    printf("Fahrenheit: %.2f\n", f);
    printf("Kelvin: %.2f\n", k);
    printf("Reamur: %.2f\n", r);

    return 0;
}
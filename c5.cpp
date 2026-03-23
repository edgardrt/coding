#include <stdio.h>
using namespace std;

int main() {
    char str[20];
    char dob[20];
    printf("Masukkan nama: ");
    scanf("%s",str);

    printf("Masukkan tanggal lahir(DD/MM/YYYY): ");
    scanf("%s",dob);

    printf("Nama: %s\n",str);
    printf("Tanggal lahir: %s\n",dob);
}
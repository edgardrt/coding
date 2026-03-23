#include <stdio.h>

int main() {
    int scores [7] = {-27, 87, 34, 45};

    int total_bytes = sizeof(scores);
    int element_bytes = sizeof(scores[0]);

    int array_length = total_bytes / element_bytes;
    printf("total in bytes: %d\n", total_bytes);
    printf("one element in bytes: %d\n", element_bytes);
    printf("total elements: %d\n", array_length);
}

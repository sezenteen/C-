#include <stdio.h>

int main() {
    int number;
    int digitCount = 0;

    printf("Bvhel too oruulna uu: ");
    scanf("%d", &number);

    // Handle negative numbers by making them positive
    if (number < 0) {
        number = -number;
    }

    // Count digits by repeatedly dividing by 10
    do {
        digitCount++;
        number /= 10;
    } while (number != 0);

    printf("Orongiin too ni: %d\n", digitCount);

    return 0;
}


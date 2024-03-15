#include <stdio.h>

int main() {
    int number;

    printf("Natural too oruulna uu: ");
    scanf("%d", &number);

    if (number <= 1) {
        printf("vrjigdehvvnd zadalj bolohgvi.\n");
    } else {
        printf("vrjigdehvvnd zadalsan ni: %d ", number);
        int divisor = 2;  // Start with the smallest prime number

        while (number > 1) {
            if (number % divisor == 0) {
                printf("%d ", divisor);
                number /= divisor;
            } else {
                divisor++;
            }
        }

        printf("\n");
    }

    return 0;
}


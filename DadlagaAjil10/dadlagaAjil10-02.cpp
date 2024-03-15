#include <stdio.h>

int main() {
    int number;
    int digitSum = 0;

    printf("Too oruulna uu: ");
    scanf("%d", &number);

    // Handle negative numbers by making them positive
    if (number < 0) {
        number = -number;
    }

    // Calculate the sum of digits
    while (number > 0) {
        int digit = number % 10; // Extract the last digit
        digitSum += digit;      // Add the digit to the sum
        number /= 10;           // Remove the last digit
    }

    printf("Tsiifruudiin niilber: %d\n", digitSum);

    return 0;
}


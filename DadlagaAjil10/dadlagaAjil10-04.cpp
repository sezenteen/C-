#include <stdio.h>

int main() {
    int number, originalNumber, reversedNumber = 0, remainder;

    printf("Bvhel too oruulna uu: ");
    scanf("%d", &number);

    originalNumber = number; // Store the original number for later comparison

    // Reverse the number
    while (number > 0) {
        remainder = number % 10;
        reversedNumber = reversedNumber * 10 + remainder;
        number /= 10;
    }

    // Check if the reversed number is equal to the original number
    if (originalNumber == reversedNumber) {
        printf("%d ni palindrome mun.\n", originalNumber);
    } else {
        printf("%d ni palindrome bish.\n", originalNumber);
    }

    return 0;
}


#include <stdio.h>
#include <stdbool.h>

bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    if (num <= 3) {
        return true;
    }
    if (num % 2 == 0 || num % 3 == 0) {
        return false;
    }
    for (int i = 5; i * i <= num; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    printf("Niit elementiin toog oruulna uu: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Utgagvi. 0 ees ih too oruulna uu.\n");
        return 1;
    }

    int arr[n];

    printf("Elementvvdee oruulna uu:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int primeCount = 0;

    printf("Ene massive dahi anhnii toonuud:\n");
    for (int i = 0; i < n; i++) {
        if (isPrime(arr[i])) {
            printf("%d ", arr[i]);
            primeCount++;
        }
    }

    printf("\nEne massive dahi anhnii toonuudiin niit too: %d\n", primeCount);

    return 0;
}


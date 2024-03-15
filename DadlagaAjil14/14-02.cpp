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
    printf("Massiviin elementin too: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Utgagviu. 0ees ih too oruul.\n");
        return 1;
    }

    int a[n]; 

    printf("Elementvvdiig oruul:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Anhnii toonuudiig hassan massive:\n");
    for (int i = 0; i < n; i++) {
        if (!isPrime(a[i])) {
            printf("%d ", a[i]);
        }
    }
    printf("\n");

    return 0;
}


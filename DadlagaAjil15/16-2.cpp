#include <stdio.h>
#include <math.h>

int isPrime(int n) {
    if (n <= 1) {
        return 0; 
    }
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return 0; 
        }
    }
    return 1; 
}

int isPerfect(int n) {
    int sum = 1; 
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            if (i == n / i) {
                sum += i;
            } else {
                sum += (i + n / i);
            }
        }
    }
    return (n == sum);
}

int isPalindromic(int n) {
    int original = n;
    int reversed = 0;
    while (n > 0) {
        reversed = reversed * 10 + n % 10;
        n /= 10;
    }
    return (original == reversed);
}


int isArmstrong(int n) {
    int original = n;
    int numDigits = 0;
    int sum = 0;

    while (n != 0) {
        numDigits++;
        n /= 10;
    }

    n = original; 

    while (n != 0) {
        int digit = n % 10;
        sum += pow(digit, numDigits);
        n /= 10;
    }

    return (original == sum);
}

int main() {
    int num;

    printf("Natural too oruul: ");
    scanf("%d", &num);

    if (isPrime(num)) {
        printf("a. Anhnii too\n");
    } else {
        printf("a. Anhnii too bish\n");
    }

    if (isPerfect(num)) {
        printf("b. Tugs too\n");
    } else {
        printf("b. Tugs too bish\n");
    }

    if (isPalindromic(num)) {
        printf("c. Palindrom too\n");
    } else {
        printf("c. Palindrom too bish\n");
    }

    if (isArmstrong(num)) {
        printf("d. Armstrong too\n");
    } else {
        printf("d. Armstrong too bish\n");
    }

    return 0;
}


#include <stdio.h>

int main() {
    int num;

    printf("Too oruulna uu: ");
    scanf("%d", &num);

    int isPrime = 1; 

    if (num <= 1) {
        isPrime = 0; 
    } else {
        for (int i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                isPrime = 0; 
                break;
            }
        }
    }

    if (isPrime) {
        printf("%d bol anhnii too.\n", num);
    } else {
        printf("%d bol anhnii too bish.\n", num);
    }

    return 0;
}


#include <stdio.h>

// factorial
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main() {
    int num;

    // a:
    printf("Too oruul: ");
    scanf("%d", &num);

    int originalNum = num; 
    int numPlaces = 0;

    while (num != 0) {
        num /= 10;
        numPlaces++;
    }

    printf("a. Orongiin too: %d\n", numPlaces);


    num = originalNum;

    // b:
    printf("b. Hurvuulsen too: %o (Octal), %x (Hexadecimal)\n", num, num);

    // c:
    int sum = 0;

    while (num != 0) {
        sum += num % 10;
        num /= 10;
    }

    printf("c. Tsiifrvvdiin niilber: %d\n", sum);

    //  d: n!
    int factorialResult = factorial(originalNum);
    printf("d. %d! = %d\n", originalNum, factorialResult);

    return 0;
}


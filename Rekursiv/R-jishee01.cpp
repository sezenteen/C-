#include <stdio.h>

unsigned int f, x;

unsigned int factorial(unsigned int a) {
    if (a == 0)
        return 1;
    else
        return a * factorial(a - 1);
}

int main() {
    printf("1-ees 8-iin hoorond too oruul: ");
    scanf("%d", &x);

    f = factorial(x);
    printf("%d-iin factorial = %d\n", x, f);

    return 0;
}


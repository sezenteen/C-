#include <stdio.h>

int main() {
    double num1, num2, sum;

    printf("ehnii too: ");
    scanf("%lf", &num1);

    printf("daraachiin too: ");
    scanf("%lf", &num2);

    sum = num1 + num2;

    printf(" %.2lf + %.2lf = %.2lf\n", num1, num2, sum);

    return 0;
}


#include <stdio.h>
#include <math.h>

int main() {
    int n, m;
    double result_nm, result_mn;

    printf("N iin utga oruul: ");
    scanf("%d", &n);

    printf("M iin utga oruul: ");
    scanf("%d", &m);

    // Calculate n^m and m^n
    result_nm = pow(n, m);
    result_mn = pow(m, n);

    printf("%d^%d = %.2lf\n", n, m, result_nm);
    printf("%d^%d = %.2lf\n", m, n, result_mn);

    return 0;
}


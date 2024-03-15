#include <stdio.h>

int main() {
    int n, sum_of_divisors = 0;

    printf("Natural too oruul: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Eyreg too oruulna uu.\n");
        return 1;
    }

    
    for (int i = 1; i < n; i++) {
        if (n % i == 0) {
            sum_of_divisors += i;
        }
    }

    // Check if the sum of divisors equals the original number
    if (sum_of_divisors == n) {
        printf("%d tugs too mun.\n", n);
    } else {
        printf("%d tugs too mun.\n", n);
    }

    return 0;
}


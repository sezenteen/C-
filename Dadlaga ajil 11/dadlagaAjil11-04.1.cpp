#include <stdio.h>
#include <math.h>

int is_prime(int number) {
    if (number <= 1) {
        return 0;
    }
    if (number <= 3) {
        return 1;
    }
    if (number % 2 == 0 || number % 3 == 0) {
        return 0;
    }

    for (int i = 5; i * i <= number; i += 6) {
        if (number % i == 0 || number % (i + 2) == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int limit;
    printf("Enter the upper limit to find perfect numbers: ");
    scanf("%d", &limit);

    for (int p = 2; ; p++) {
        if (!is_prime(pow(2, p) - 1)) {
            break;
        }

        unsigned long long perfect = (unsigned long long)(pow(2, p - 1)) * (unsigned long long)(pow(2, p) - 1);

        if (perfect <= limit) {
            printf("Perfect number: %llu\n", perfect);
        } else {
            break;
        }
    }

    return 0;
}


#include <stdio.h>

// Function to calculate the GCD using the Euclidean algorithm
int calculateGCD(int n, int m) {
    while (m != 0) {
        int temp = m;
        m = n % m;
        n = temp;
    }
    return n;
}

int main() {
    int n, m;

    printf("2 udaa bvhel too oruulna uu: ");
    scanf("%d %d", &n, &m);

    // Ensure both numbers are positive
    if (n < 0) {
        n = -n;
    }
    if (m < 0) {
        m = -m;
    }

    // Calculate the LCM
    int gcd = calculateGCD(n, m);
    int lcm = (n * m) / gcd;

    printf("Hamgiin baga erunhii huvaagch ni: %d\n", lcm);

    return 0;
}


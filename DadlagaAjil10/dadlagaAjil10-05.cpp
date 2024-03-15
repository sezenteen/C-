#include <stdio.h>

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

    while (m != 0) {
        int temp = m;
        m = n % m;
        n = temp;
    }

    printf("Hamgiin ih erunhii huvaagch ni: %d\n", n);

    return 0;
}


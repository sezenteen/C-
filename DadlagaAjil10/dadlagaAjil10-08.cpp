#include <stdio.h>

int main() {
    int n, m;

    printf("(n bolon m)-d utga onoo: ");
    scanf("%d %d", &n, &m);

    // Check for division by zero
    if (m == 0) {
        printf("Error: 0t huvaaj bolohgvi.\n");
        return 1; // Exit with an error code
    }

    int result = 0;

    // Perform division using subtraction
    while (n >= m) {
        n -= m;
        result++;
    }

    printf("Hariu ni %d / %d = %d\n", n + result * m, m, result);

    return 0;
}


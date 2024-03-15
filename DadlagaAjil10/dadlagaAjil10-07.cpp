#include <stdio.h>
#include <math.h>

int main() {
    int m;

    printf("m: ");
    scanf("%d", &m);

    if (m <= 0) {
        printf("m zaaval eyreg too baina.\n");
        return 1; // Exit with an error code
    }

    int k = 0;
    while (pow(4, k) < m) {
        k++;
    }

    // Decrement k by 1 to get the maximum k such that 4^k < m
    k--;

    printf("k iin hamgiin ih utga 4^k < %d ni: %d\n", m, k);

    return 0;
}


#include<stdio.h>
#include<stdlib.h>

int a[100][100], n, m, i, j, k, l;

// Function declarations
void doosh(void);
void deesh(void);

// Main function
int main() {
    printf("n too oruul=");
    scanf("%d", &n);

    // Generate a random matrix and print it
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            a[i][j] = rand() % 100;
            printf("%d%c", a[i][j], ' ');
        }
        printf("\n");
    }

    k = 1;
    l = 1;

    // Perform the diagonal traversal using functions doosh and deesh
    deesh();

    return 0;
}

// Function to perform diagonal traversal in one direction
void doosh(void) {
    printf("%d%c", a[k][l], ' ');
    ++k;
    --l;

    while (k <= n && l >= 1)
        printf("%d%c", a[k++][l--], ' ');

    if (k > n) {
        k--;
        l += 2;
        if (l <= n)
            deesh();
    } else if (l < 1) {
        l++;
        deesh();
    }
}

// Function to perform diagonal traversal in the opposite direction
void deesh(void) {
    printf("%d%c", a[k][l], ' ');
    --k;
    ++l;

    while (k >= 1 && l <= n)
        printf("%d%c", a[k--][l++], ' ');

    if (k < 1 && l <= n) {
        k++;
        doosh();
    } else if (l > n) {
        l--;
        k += 2;
        if (k <= n)
            doosh();
    }
}


#include <stdlib.h>
#include <stdio.h>
#include <string.h>

// Function declarations for spiral traversal
void right(int a[][10], int r, int s, int f);
void left(int a[][10], int r, int s, int f);
void down(int a[][10], int c, int s, int f);
void up(int a[][10], int c, int s, int f);

int main() {
    int a[10][10], i = 1, j = 1, n = 5;

    // Input matrix size
    printf("n=");
    scanf("%d", &n);

    // Generate a random matrix and print it
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            a[i][j] = rand() % 100;
            printf("%4d", a[i][j]);
        }
        printf("\n");
    }

    // Spiral traversal of the matrix
    for (i = 1; i <= n / 2; i++) {
        down(a, i, i, n - i + 1);
        right(a, n - i + 1, i + 1, n - i + 1);
        up(a, n - i, n - i + 1, i);
        left(a, i, n - i, i + 1);
    }

    // If n is odd, print the center element
    if (n % 2 == 1)
        printf("%d\n", a[n / 2 + 1][n / 2 + 1]);

    return 0;
}

// Function to print elements to the right
void right(int a[][10], int r, int s, int f) {
    int i = s;
    for (; i <= f; i++)
        printf("%4d", a[r][i]);
}

// Function to print elements to the left
void left(int a[][10], int r, int s, int f) {
    int i = s;
    for (; i >= f; i--)
        printf("%4d", a[r][i]);
}

// Function to print elements downward
void down(int a[][10], int c, int s, int f) {
    int i = s;
    for (; i <= f; i++)
        printf("%4d", a[i][c]);
}

// Function to print elements upward
void up(int a[][10], int c, int s, int f) {
    int i = c;
    for (; i >= f; i--)
        printf("%4d", a[i][s]);
}


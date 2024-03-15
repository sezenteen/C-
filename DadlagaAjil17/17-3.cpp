#include <stdlib.h>
#include <stdio.h>
#include <string.h>

// Function declarations for spiral traversal
void right(int a[][10], int r, int s, int f, int &k);
void left(int a[][10], int r, int s, int f, int &k);
void down(int a[][10], int c, int s, int f, int &k);
void up(int a[][10], int c, int s, int f, int &k);
void print(int a[][10], int n);

int main() {
    int a[10][10], i = 0, j = 0, k = 1, n = 5;

    // Initialize the matrix with zeros
    memset(a, 0, sizeof(a));

    // Input matrix size
    printf("n=");
    scanf("%d", &n);

    // Spiral traversal of the matrix
    for (i = 0; i < n / 2; i++) {
        right(a, i, i, n - i - 1, k);
        down(a, n - i - 1, i + 1, n - i - 1, k);
        left(a, n - i - 1, n - i - 2, i, k);
        up(a, i, n - i - 2, i + 1, k);
    }

    // If n is odd, fill the center element
    if (n % 2)
        a[n / 2][n / 2] = k;

    // Print the generated spiral matrix
    print(a, n);

    return 0;
}

// Function to fill elements moving to the right
void right(int a[][10], int r, int s, int f, int &k) {
    int i = s;
    for (; i <= f; i++)
        a[r][i] = k++;
}

// Function to fill elements moving downward
void down(int a[][10], int c, int s, int f, int &k) {
    int i = s;
    for (; i <= f; i++)
        a[i][c] = k++;
}

// Function to fill elements moving to the left
void left(int a[][10], int r, int s, int f, int &k) {
    int i = s;
    for (; i >= f; i--)
        a[r][i] = k++;
}

// Function to fill elements moving upward
void up(int a[][10], int c, int s, int f, int &k) {
    int i = s;
    for (; i >= f; i--)
        a[i][c] = k++;
}

// Function to print the matrix
void print(int a[][10], int n) {
    int i = 0, j;

    for (; i < n; i++) {
        for (j = 0; j < n; j++)
            printf("%5d", a[i][j]);
        printf("\n");
    }
}


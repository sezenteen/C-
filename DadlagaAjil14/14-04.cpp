#include <stdio.h>

int isMagicSquare(int A[100][100], int n) {
    int sum = 0;

    for (int j = 0; j < n; j++) {
        sum += A[0][j];
    }

    int diag1_sum = 0;
    int diag2_sum = 0;

    for (int i = 0; i < n; i++) {
        int row_sum = 0;
        int col_sum = 0;

        for (int j = 0; j < n; j++) {
            row_sum += A[i][j];
            col_sum += A[j][i];

            if (i == j) {
                diag1_sum += A[i][j];
            }

            if (i + j == n - 1) {
                diag2_sum += A[i][j];
            }
        }

        if (row_sum != sum || col_sum != sum) {
            return 0; 
        }
    }

    return (diag1_sum == sum && diag2_sum == sum);
}

int main() {
    int n; 
    printf("Quadrat massiviin hemjee (n x n): ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Utgagvi. 0ees ih too oruul.\n");
        return 1;
    }

    int A[100][100]; 

    printf("Quadrat massiviin elementvvdiig oruulna uu: (%d x %d):\n", n, n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    if (isMagicSquare(A, n)) {
        printf("Shidet massive.\n");
    } else {
        printf("Shidet massive bish.\n");
    }

    return 0;
}


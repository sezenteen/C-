#include <stdio.h>

int main() {
    int n, m; 
    printf("Möriin toog oruulna uu (n): ");
    scanf("%d", &n);
    printf("Baganyn toog oruulna uu (m): ");
    scanf("%d", &m);

    if (n <= 0 || m <= 0) {
        printf("Utgagvi. 0ees too oruul.\n");
        return 1;
    }

    int a[n][m]; 

    printf("2D massivyn elyemyentüüdiig oruulna uu(%d x %d):\n", n, m);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    int maxSum = 0; 
    int count = 0;

    for (int i = 1; i < n - 1; i++) {
        for (int j = 1; j < m - 1; j++) {
            int sum = a[i][j] + a[i - 1][j] + a[i + 1][j] + a[i][j - 1] + a[i][j + 1];
            if (sum > maxSum) {
                maxSum = sum;
                count = 1; 
            } else if (sum == maxSum) {
                count++; 
            }
        }
    }

    printf("Khörshüüdiin khamgiin ikh niilber (niilber = %d) bükhii bairlal(uud) ni:\n", maxSum);
    for (int i = 1; i < n - 1; i++) {
        for (int j = 1; j < m - 1; j++) {
            int sum = a[i][j] + a[i - 1][j] + a[i + 1][j] + a[i][j - 1] + a[i][j + 1];
            if (sum == maxSum) {
                printf("Bairlal dakhi elyemyent(%d, %d)\n", i, j);
            }
        }
    }

    printf("Khörshüüdiin khamgiin ikh niilber bükhii elyemyentüüdiin too: %d\n", count);

    return 0;
}


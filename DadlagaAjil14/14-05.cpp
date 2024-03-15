#include <stdio.h>

int main() {
    int n; 
    printf("quadrat massiviin hemjee (n x n): ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Utgagvi. 0ees ih too oruulna uu.\n");
        return 1;
    }

    int A[100][100]; 

    printf("Elementvvdiig oruul (%d x %d):\n", n, n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    int sum = 0;

    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            sum += A[i][j];
        }
    }

    printf("budagdsan gurvaljingiin niilber: %d\n", sum);

    return 0;
}


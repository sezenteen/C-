#include <stdio.h>

int main() {
    int n; 
    printf("Quadrat massiviin elementiin toonuud (n x n): ");
    scanf("%d", &n);

    int A[n][n];

    printf("elementvvdee oruul (%d x %d):\n", n, n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    int saddlePointFound = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int element = A[i][j];
            int isSaddlePoint = 1; 

            
            for (int k = 0; k < n; k++) {
                if (A[i][k] > element) {
                    isSaddlePoint = 0;
                    break;
                }
            }

            for (int k = 0; k < n; k++) {
                if (A[k][j] < element) {
                    isSaddlePoint = 0;
                    break;
                }
            }

            if (isSaddlePoint) {
                printf("Emeel tseg ni A[%d][%d]- %d\n", i, j, element);
                saddlePointFound = 1;
                break; 
            }
        }

        if (saddlePointFound) {
            break; 
        }
    }

    if (!saddlePointFound) {
        printf("Emeel tseg oldsongvi.\n");
    }

    return 0;
}


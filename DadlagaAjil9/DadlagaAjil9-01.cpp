#include <stdio.h>

int main() {
    int n;
    unsigned long long factorial = 1;

    printf("Natural too oruul: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("surug too hvcingvi.\n");
    } else {
    	
        for (int i = 1; i <= n; i++) {
            factorial *= i;
        }

        printf("%d! = %llu\n", n, factorial);
    }

    return 0;
}


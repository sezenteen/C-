#include <stdio.h>

int main() {
    int n, m;
    printf("(n ba m) natural too oruul: ");
    scanf("%d %d", &n, &m);

    int i = 1, j = 1;  

    do {
        do {
            if (n * j != m * i) {
                printf("vl huraagdah toonuud: i = %d, j = %d\n", i, j);
                return 0;  
            }
            j++;
        } while (j <= m);
        i++;
        j = 1;  
    } while (i <= n);

    printf("vl huraagdah too oldsongvi:\n");

    return 0;
}


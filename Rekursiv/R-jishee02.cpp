#include <stdio.h>

long F(int k) {
    if (k < 2)
        return 1;
    else
        return F(k - 2) + F(k - 1);
}

int main() {
    int n;
    printf("n= ");
    scanf("%d", &n);
    printf("%d-dugaar gishvvn = %ld\n", n, F(n));
    
    return 0;
}


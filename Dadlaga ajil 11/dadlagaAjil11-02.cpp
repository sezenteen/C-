#include <stdio.h>

int main() {
    int num, reversed = 0;

    printf("N bvhel too oruul: ");
    scanf("%d", &num);

    do {
        int digit = num % 10;    
        reversed = reversed * 10 + digit;  
        num /= 10;               
    } while (num != 0);

    printf("Huruvsun too ni: %d\n", reversed);

    return 0;
}


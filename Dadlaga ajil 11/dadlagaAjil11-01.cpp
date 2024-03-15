#include <stdio.h>

int main() {
    int num, digit, sum = 0;

    printf("n too oruul: ");
    scanf("%d", &num);

    if (num < 0) {
        num = -num;
    }

    do {
        digit = num % 10; 
        sum += digit;     
        num /= 10;       
    } while (num != 0);

    printf("Ugugdsun bvghel toon niilber: %d\n", sum);

    return 0;
}


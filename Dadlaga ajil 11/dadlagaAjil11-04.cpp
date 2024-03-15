#include <stdio.h>

int isPerfect(int num) {
    int sum = 0;
    for (int i = 1; i < num; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }
    return sum == num;
}

int main() {
    int n;

    printf("(n) too oruul: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("eyreg too oruulna uu.\n");
        return 1;
    }

    printf("Tugs toonuud %d:\n", n);

    do {
        if (isPerfect(n)) {
            printf("%d\n", n);
        }
        n++;
    } while (1);  

    return 0;
}


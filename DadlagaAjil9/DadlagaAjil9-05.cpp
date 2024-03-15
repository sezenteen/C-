#include <stdio.h>
#include <stdbool.h>

bool isPerfect(int num) {
    int sum = 1; 
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            if (i * i != num) {
                sum += i + num / i;
            } else {
                sum += i;
            }
        }
    }
    return sum == num && num != 1;
}

int main() {
    printf("5 orontoi toonuudiin svvliin 3 orongiin niilber ni tugs too baih toonuud:\n");
    
    for (int num = 10000; num <= 99999; num++) {
        int last3Digits = num % 1000;
        if (isPerfect(last3Digits)) {
            printf("%d\n", num);
        }
    }

    return 0;
}


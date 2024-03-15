#include <stdio.h>

int main() {
    int m;
    printf("M too oruul: ");
    scanf("%d", &m);

    if (m < 1 || m > 27) {
        printf("1 ees 27 dotor too oruulna uu.\n");
        return 1;
    }

    int count = 0;

    for (int num = 100; num <= 999; num++) {
        int digitSum = 0;
        int temp = num;

        while (temp != 0) {
            digitSum += temp % 10;
            temp /= 10;
        }

        if (digitSum == m) {
            printf("%d 3 orongiin niilbertei tenshvv %d\n", num, m);
            count++;
        }
    }

    if (count == 0) {
        printf("3 orongiin niilbertei tentsvv bish %d\n", m);
    }

    return 0;
}


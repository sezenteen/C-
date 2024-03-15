#include <stdio.h>

int main() {
    int year;

    printf("jil oruulna uu: ");
    scanf("%d", &year);

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        printf("%d on 366 honogtoi.\n", year);
    } else {
        printf("%d on 365 honogtoi.\n", year);
    }

    return 0;
}


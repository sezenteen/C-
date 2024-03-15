#include <stdio.h>

int isLeapYear(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        return 1;
    } else {
        return 0;
    }
}

int daysInMonth(int year, int month) {
    int days[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (isLeapYear(year) && month == 2) {
        return 29;
    }
    return days[month];
}

int main() {
    int year, month, day;
    printf("On, sar, bas uduruu oruulna uu (YYYY MM DD): ");
    scanf("%d %d %d", &year, &month, &day);

    int daysLeft = 0;
    for (int i = month + 1; i <= 12; i++) {
        daysLeft += daysInMonth(year, i);
    }

    daysLeft += daysInMonth(year, month) - day;

    printf("Tanii oruulsan on duusahad: %d\n honog dutuu baina.", daysLeft);

    return 0;
}


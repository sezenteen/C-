#include <stdio.h>

int main() {
    int year, month, day;
    int days_in_month[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int days_left = 0;

    printf("On, sar, uduruu oruulna uu: (YYYY MM DD): ");
    scanf("%d %d %d", &year, &month, &day);

    // Check if it's a leap year
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        days_in_month[2] = 29; // February has 29 days in a leap year
    }

    switch (month) {
        case 12:
            days_left += 30; // November
        case 11:
            days_left += 31; // October
        case 10:
            days_left += 30; // September
        case 9:
            days_left += 31; // August
        case 8:
            days_left += 31; // July
        case 7:
            days_left += 30; // June
        case 6:
            days_left += 31; // May
        case 5:
            days_left += 30; // April
        case 4:
            days_left += 31; // March
        case 3:
            days_left += 28; // February (non-leap year by default)
        case 2:
            days_left += 31; // January
    }

    days_left = days_in_month[month] - day + days_left;

    printf("Tanii oruulsan on duusahad %d dutuu baina\n", days_left);

    return 0;
}


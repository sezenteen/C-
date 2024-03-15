#include <stdio.h>

int main() {
    int dayNumber;

    printf("(1-7) dotor too oruulna uu: ");
    scanf("%d", &dayNumber);

    switch (dayNumber) {
        case 1:
            printf("Davaa\n");
            break;
        case 2:
            printf("Mygmar\n");
            break;
        case 3:
            printf("Lhagva\n");
            break;
        case 4:
            printf("Pvrew\n");
            break;
        case 5:
            printf("Baasan\n");
            break;
        case 6:
            printf("Bymba\n");
            break;
        case 7:
            printf("Nym\n");
            break;
        default:
            printf("Garigiin nereer nerleh bolomjgvi.\n");
    }

    return 0;
}


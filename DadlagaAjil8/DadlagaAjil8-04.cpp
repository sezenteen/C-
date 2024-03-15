#include <stdio.h>
#include <string.h>

// Function to print a number less than 1000 in words
void printLessThanThousand(int num) {
    const char* ones[] = {"", "Neg", "Hoer", "Guraw", "Duruw", "tav", "Zurgaa", "Doloo", "Naim", "Es"};
    const char* teens[] = {"", "Arvan neg", "Arvan hoer", "Arvan guraw", "Arvan duruw", "Arvan tav", "Arvan zurgaa", "Arvan doloo", "Arvan naim", "Arvan es"};
    const char* tens[] = {"", "Arav", "Hori", "Guch", "Duch", "Tavi", "Jar", "Dal", "Nay", "Er"};

    if (num >= 100) {
        printf("%s Zuu", ones[num / 100]);
        num %= 100;
        if (num > 0) {
            printf("n");
        }
    }

    if (num >= 20) {
        printf("%s", tens[num / 10]);
        num %= 10;
        if (num > 0) {
            printf("n%s", ones[num]);
        }
    } else if (num >= 11) {
        printf("n%s", teens[num - 10]);
    } else if (num >= 1) {
        printf("%s", ones[num]);
    }
}

int main() {
    long long int num;
    
    printf("Too oruulna uu: ");
    scanf("%lld", &num);

    if (num == 0) {
        printf("Teg\n");
    } else if (num < 0) {
        printf("Eyreg too oruulna uu\n");
    } else {
        if (num >= 1000000) {
            printf("999,999 hvrtel l bodno.\n");
        } else {
            int thousands = num / 1000;
            int remainder = num % 1000;

            if (thousands > 0) {
                printLessThanThousand(thousands);
                printf(" Mynga");
                if (remainder > 0) {
                    printf(" ");
                }
            }

            if (remainder > 0) {
                printLessThanThousand(remainder);
            }

            printf("\n");
        }
    }

    return 0;
}


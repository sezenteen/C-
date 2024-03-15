#include <stdio.h>

int findGCD(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int findLCD(int a, int b) {
    return (a * b) / findGCD(a, b);
}

int areFriendNumbers(int a, int b) {
    return (findGCD(a, b) == 1);
}

int main() {
    int n, m;

    printf("(n)=: ");
    scanf("%d", &n);
    printf("(m)=: ");
    scanf("%d", &m);

    printf("a. HIEH ni %d , %d iin: %d\n", n, m, findGCD(n, m));

    printf("b. HBEH ni %d , %d iin: %d\n", n, m, findLCD(n, m));

    if (areFriendNumbers(n, m)) {
        printf("c. %d ba %d ni naiz toonuud.\n", n, m);
    } else {
        printf("c. %d ba %d ni naiz toonuud bish.\n", n, m);
    }

    int gcdResult = findGCD(n, m);
    int lcdResult = findLCD(n, m);

    printf("d. Funktsiin vr dvn:\n");
    printf("   HIEH: %d\n", gcdResult);
    printf("   HBEH: %d\n", lcdResult);
    printf("   Naiz too: %s\n", areFriendNumbers(n, m) ? "mun" : "bish");

    return 0;
}


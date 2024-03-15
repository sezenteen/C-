#include <stdio.h>

int n;
long s, s1;

void s_even(int m);
void s_odd(int m);

void s_even(int m) {
    if (m != 0) {
        s1 = s1 + m;
        s_odd(m - 1);
    }
}

void s_odd(int m) {
    if (m != 0) {
        s = s + m;
        s_even(m - 1);
    }
}

int main() {
    printf("n= ");
    scanf("%d", &n);
    s = 0;
    s1 = 0;
    if (n % 2 == 1)
        s_odd(n);
    else
        s_even(n);
    printf("oruulsan n too hvrtelh sondgoi toonuudiin niilber = %ld\n", s);
    printf("oruulsan n too hvrtelh tegsh toonuudiin niilber = %ld", s1);

    return 0;
}


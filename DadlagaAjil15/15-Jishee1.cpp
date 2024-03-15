#include <stdio.h>
#include <string.h>

int main() {
    char s[100];

    printf("String oruulna uu: ");
    fgets(s, sizeof(s), stdin);

    int n = strlen(s);

    for (int i = 0; i < n; i++) {
        if (s[i] >= 'a' && s[i] <= 'z') {
            s[i] = s[i] - 'a' + 'A';
        } else if (s[i] >= 'A' && s[i] <= 'Z') {
            s[i] = s[i] - 'A' + 'a';
        }
    }

    printf("Zasvarlasan string: %s", s);

    return 0;
}


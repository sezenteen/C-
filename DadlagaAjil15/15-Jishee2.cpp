#include <stdio.h>
#include <string.h>

int main() {
    char s[100];

    printf("String oruulna uu: ");
    fgets(s, sizeof(s), stdin);

    int n = strlen(s);
    int vowelCount = 0;

    for (int i = 0; i < n; i++) {
        
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' ||
            s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U') {
            vowelCount++;
        }
    }

    printf("Ene string dahi egshignvvdiin too: %d\n", vowelCount);

    return 0;
}


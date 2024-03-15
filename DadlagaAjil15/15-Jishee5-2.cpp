#include <stdio.h>
#include <string.h>

int main() {
    char s[100];

    printf("Ugvvlber oruul: ");
    gets(s);  

    int count[256] = {0}; 

    int n = strlen(s);

    for (int i = 0; i < n; i++) {
        count[(int)s[i]]++;
    }

    printf("Davtagdsan temdegt:\n");
    for (int i = 0; i < 256; i++) {
        if (count[i] > 0) {
            printf("'%c': %d udaa\n", (char)i, count[i]);
        }
    }

    return 0;
}


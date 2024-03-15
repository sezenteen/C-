#include<stdio.h>
#include<string.h>

int main() {
    char s[100], s1[100], smax[100];

    printf("Ugvvlber oruulna uu: ");
    gets(s);  

    int k = 0, max = 0, currentLength = 0;
    int n = strlen(s);

    s[n] = ' ';     
    s[n + 1] = '\0'; 

    n = strlen(s); 

    for (int i = 0; i < n; i++) {
        if (s[i] != ' ') {
            s1[k++] = s[i];
            currentLength++;
        } else if (currentLength > 0) {
            s1[k] = '\0';
            if (currentLength > max) {
                max = currentLength;
                strncpy(smax, s1, max);
                smax[max] = '\0';
                k = 0;
            } else if (currentLength == max) {
                printf("Ijil urttai vg. %d  vsegtei: %s\n", max, s1);
            }
            k = 0;
            currentLength = 0;
        }
    }

    puts("hamgiin urt vg:");
    puts(smax);

    return 0;
}


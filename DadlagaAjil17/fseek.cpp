#include <stdio.h>

int main() {
    
    FILE *file = fopen("example.txt", "rb+");

    if (file == NULL) {
        perror("Error opening the file");
        return 1;
    }

    fputs("Hello, World!\nThis is a sample file.", file);

    fseek(file, 0, SEEK_SET);

    char buffer[100];
    while (fgets(buffer, sizeof(buffer), file) != NULL) {
        printf("%s", buffer);
    }

    fseek(file, 0, SEEK_END);

    fputs("\nAppending new data.", file);

    fseek(file, -10, SEEK_CUR);

    while (fgets(buffer, sizeof(buffer), file) != NULL) {
        printf("%s", buffer);
    }

    fclose(file);

    return 0;
}


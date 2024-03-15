#include <stdio.h>
#include <ctype.h> // Include ctype.h for character functions

int main() {
    char letter;

    printf("Latin vseg oruul: ");
    scanf(" %c", &letter); // Use a space before %c to consume any leading whitespace

    // Convert the letter to uppercase for easier comparison
    letter = toupper(letter);

    if (letter == 'A' || letter == 'E' || letter == 'I' || letter == 'O' || letter == 'U') {
        printf("%c Egshig\n", letter);
    } else if (letter >= 'A' && letter <= 'Z' && (letter != 'Y')) {
        printf("%c Giigvvlegch.\n", letter);
    } else {
        printf("Utgagvi. Latin vseg oruulna uu:\n");
    }

    return 0;
}


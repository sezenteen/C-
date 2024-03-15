#include <stdio.h>
#include <string.h>
#include <stdbool.h>

// Function to generate a name for an animal based on age, gender, and classification
void generateAnimalName(char type[], int age, char gender, bool classified) {
    char name[50] = "";

    // Handle type-specific naming rules (you can customize this based on Mongolian traditions)
    if (strcmp(type, "Mori") == 0) {
        if (age < 1) {
            strcpy(name, "Unaga");
        } else if (age < 5) {
            strcpy(name, "Uree");
        } else {
            strcpy(name, "Azarga");
        }
    } else if (strcmp(type, "Honi") == 0) {
        if (age < 1) {
            strcpy(name, "Hurga");
        } else {
            strcpy(name, "Huts");
        }
	} else if ()
	
    } else {
        strcpy(name, "?");
    }

    // Add gender-specific suffix
    if (gender == 'M') {
        strcat(name, " (Er)");
    } else if (gender == 'F') {
        strcat(name, " (Em)");
    }

    // Add classification
    if (classified) {
        strcat(name, " (Classified)");
    }

    printf("Amitnii ner oruulna uu: %s: %s\n", type, name);
}

int main() {
    char type[20];
    int age;
    char gender;
    bool classified;

    printf("Ymar turuliin amitan be?: ");
    scanf("%s", type);

    printf("Nas: ");
    scanf("%d", &age);

    printf("Huis (er/em): ");
    scanf(" %c", &gender);

    printf("Tavan hoshuu mal mun uu? (1 bol tiim, 0 bol vgvi): ");
    scanf("%d", &classified);

    generateAnimalName(type, age, gender, classified);

    return 0;
}


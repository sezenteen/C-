#include <stdio.h>
#include <stdlib.h>

int main() {
    int SomeVariable = 0;
    int *pInt;  // Declare a pointer
    pInt = &SomeVariable;  // Point it to the variable

    *pInt = 9;  // Assign a value to the variable through the pointer
    printf("pInt Huvisagchiin utga: %d\n", *pInt);

    int *pVar = &SomeVariable;  // Declare a pointer and point it to SomeVariable
    *pVar = 9;  // Assign a value to SomeVariable through the pointer
    printf("Huvisagchiin utga: %d\n", *pVar);

    return 0;
}


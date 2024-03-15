#include <stdio.h>

int main() {
    int n; // Number of elements
    printf("niit elementnii too: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("utgaggvi. 0 ees ih too oruulna uu.\n");
        return 1;
    }

    int arr[n]; // Declare an array of size 'n'

    // Input elements
    printf("elementvvdiig oruul:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Find the smallest element
    int smallest = arr[0]; // Assume the first element is the smallest

    for (int i = 1; i < n; i++) {
        if (arr[i] < smallest) {
            smallest = arr[i];
        }
    }

    printf("Ene massiv dahi hamgiin baga too ni: %d\n", smallest);

    return 0;
}


#include <stdio.h>

void sortDescending(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            int diff = arr[i] - arr[j];
            int swap = (diff >> (sizeof(int) * 8 - 1)) & 1;
            arr[i] = arr[i] - diff * swap;
            arr[j] = arr[j] + diff * swap;
        }
    }
}

int main() {
    int n;
    printf("niit elementiin toog oruul: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Urtgagvi. 0ees ih too oruul.\n");
        return 1;
    }

    int arr[n];

    printf("elementvvdiig oruul:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    sortDescending(arr, n);

    printf("Ihees baga ruu:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}


#include <stdio.h>

void insertInOrderedArray(int arr[], int *n, int num) {
    int i = *n - 1;

    while (i >= 0 && arr[i] > num) {
        arr[i + 1] = arr[i];
        i--;
    }

    arr[i + 1] = num;
    (*n)++; 
}

int main() {
    int n; 
    printf("Bagaas ih rvv erembelsen massiviin elementiin too: ");
    scanf("%d", &n);

    int arr[n];

    printf("Bagaas ih rvv erembelsen massiviin elementvvd:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int num; 
    printf("Massivet oruulah too: ");
    scanf("%d", &num);

    insertInOrderedArray(arr, &n, num);

    printf("Shineclegdsen erebelsen massive:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}


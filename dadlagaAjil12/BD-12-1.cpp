#include <stdio.h>
#include <stdlib.h>

int main() {
    float* p;
    p = (float*)malloc(sizeof(float));

    if (p != NULL) {
        *p = 1.23;
        printf("allocated memory-d hadgalagdsan: %f\n", *p);
        free(p); // Don't forget to free the allocated memory when done
    } else {
        printf("Memory allocation failed.\n");
    }

    return 0;
}


#include <stdio.h>

int k, f, n, m, i, j, a[100][100], s, max;

// Function to perform recursive mapping and counting
void map(int p, int l) {
    if (a[p][l] != 0) {
        a[p][l] = 0;  // Mark the cell as visited
        s = s + 1;    // Increment the size of the connected region

        // Recursive calls to neighboring cells
        if (p > 1) map(p - 1, l);
        if (p < n) map(p + 1, l);
        if (l < n) map(p, l + 1);
        if (l > 1) map(p, l - 1);
    }
}

int main() {
    FILE *f;
    f = fopen("rec.in", "r");
    fscanf(f, "%d", &n);

    // Reading the matrix from the file
    for (i = 1; i <= n; i++)
        for (j = 1; j <= n; j++)
            fscanf(f, "%d", &a[i][j]);

    fclose(f);

    max = 0;

    // Iterate through each cell of the matrix
    for (i = 1; i <= n; i++)
        for (j = 1; j <= n; j++)
            if (a[i][j] != 0) {  // If the cell is part of a region
                s = 0;
                map(i, j);  // Count the size of the connected region starting from this cell

                if (s > max)
                    max = s;  // Update the maximum size if the current region is larger
            }

    FILE *G;
    G = fopen("rec.out", "w");
    fprintf(G, "%d", max);
    fclose(G);

    return 0;
}


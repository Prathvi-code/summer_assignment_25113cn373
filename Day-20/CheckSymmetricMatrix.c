#include <stdio.h>

int main() {
    int a[10][10], r, c, i, j, symmetric = 1;

    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    if (r != c) {
        printf("Matrix is not symmetric (not square).\n");
        return 0;
    }

    printf("Enter matrix:\n");
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            scanf("%d", &a[i][j]);

    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            if (a[i][j] != a[j][i]) {
                symmetric = 0;
                break;
            }
        }
    }

    if (symmetric)
        printf("Matrix is symmetric.\n");
    else
        printf("Matrix is not symmetric.\n");

    return 0;
}
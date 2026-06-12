#include <stdio.h>

int main() {
    int n, i, j, sum;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int a[n];
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter target sum: ");
    scanf("%d", &sum);

    printf("Pairs with sum %d:\n", sum);
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (a[i] + a[j] == sum) {
                printf("(%d, %d)\n", a[i], a[j]);
            }
        }
    }
    return 0;
}
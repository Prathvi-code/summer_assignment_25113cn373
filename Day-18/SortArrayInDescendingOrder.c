#include <stdio.h>

int main() {
    int n, i, j, temp;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int a[n];
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) scanf("%d", &a[i]);

    // Simple bubble sort in descending
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (a[j] < a[j + 1]) {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    printf("Array in descending order: ");
    for (i = 0; i < n; i++) printf("%d ", a[i]);
    return 0;
}
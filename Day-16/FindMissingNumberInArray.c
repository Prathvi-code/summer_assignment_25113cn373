#include <stdio.h>

int main() {
    int n, i, sum = 0, total;
    printf("Enter n (last number): ");
    scanf("%d", &n);

    int a[n-1];
    printf("Enter %d elements (from 1 to %d, one missing):\n", n-1, n);
    for (i = 0; i < n-1; i++) {
        scanf("%d", &a[i]);
        sum += a[i];
    }

    total = n * (n + 1) / 2;   // sum of 1..n
    printf("Missing number = %d\n", total - sum);

    return 0;
}
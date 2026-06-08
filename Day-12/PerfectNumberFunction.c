#include <stdio.h>

int isPerfect(int n) {
    int sum = 0, i;
    for (i = 1; i < n; i++) {
        if (n % i == 0) {
            sum += i;
        }
    }
    return (sum == n);
}

int main() {
    int n;
    printf("Enter number: ");
    scanf("%d", &n);

    if (isPerfect(n))
        printf("%d is Perfect Number\n", n);
    else
        printf("%d is Not Perfect Number\n", n);

    return 0;
}
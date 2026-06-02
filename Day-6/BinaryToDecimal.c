#include <stdio.h>
#include <math.h>

int main() {
    int n, decimal = 0, base = 1, rem;
    printf("Enter binary number: ");
    scanf("%d", &n);

    while (n > 0) {
        rem = n % 10;       
        decimal = decimal + rem * base;
        base = base * 2;
        n = n / 10;
    }

    printf("Decimal = %d\n", decimal);
    return 0;
}
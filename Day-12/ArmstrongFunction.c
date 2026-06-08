#include <stdio.h>

int isArmstrong(int n) {
    int sum = 0, temp = n, digits = 0;

    while (temp > 0) {
        digits++;
        temp /= 10;
    }

    temp = n;
    while (temp > 0) {
        int rem = temp % 10;

        int power = 1;
        for (int i = 0; i < digits; i++) {
            power = power * rem;
        }

        sum += power;
        temp /= 10;
    }

    return (sum == n);
}

int main() {
    int n;
    printf("Enter number: ");
    scanf("%d", &n);

    if (isArmstrong(n))
        printf("%d is Armstrong\n", n);
    else
        printf("%d is Not Armstrong\n", n);

    return 0;
}
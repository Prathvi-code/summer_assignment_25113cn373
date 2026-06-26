#include <stdio.h>
#include <string.h>

int main() {
    int roll[50], marks[50], n, i;
    char name[50][50];

    printf("Enter number of students: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Enter roll, name, marks: ");
        scanf("%d %s %d", &roll[i], name[i], &marks[i]);
    }

    printf("\n--- Student Records ---\n");
    for (i = 0; i < n; i++) {
        printf("Roll: %d, Name: %s, Marks: %d\n", roll[i], name[i], marks[i]);
    }
    return 0;
}
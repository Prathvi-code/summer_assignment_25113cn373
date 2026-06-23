#include <stdio.h>
struct Student {
    int roll;
    char name[50];
    int marks[5];
    int total;
    float percent;
};

int main() {
    struct Student s[50];
    int n, i, j;

    printf("Enter number of students: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Enter roll, name: ");
        scanf("%d %s", &s[i].roll, s[i].name);

        s[i].total = 0;
        printf("Enter 5 subject marks: ");
        for (j = 0; j < 5; j++) {
            scanf("%d", &s[i].marks[j]);
            s[i].total += s[i].marks[j];
        }
        s[i].percent = s[i].total / 5.0;
    }

    printf("\n--- Marksheet ---\n");
    for (i = 0; i < n; i++) {
        printf("Roll: %d, Name: %s, Total: %d, Percent: %.2f%%\n",
               s[i].roll, s[i].name, s[i].total, s[i].percent);
    }
    return 0;
}
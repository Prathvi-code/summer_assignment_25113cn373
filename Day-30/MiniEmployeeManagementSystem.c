#include <stdio.h>
#include <string.h>

int main() {
    int id[50], n, i;
    char name[50][50], dept[50][50];
    float salary[50];

    printf("Enter number of employees: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Enter id, name, dept, salary: ");
        scanf("%d %s %s %f", &id[i], name[i], dept[i], &salary[i]);
    }

    printf("\n--- Employee Records ---\n");
    for (i = 0; i < n; i++) {
        printf("ID: %d, Name: %s, Dept: %s, Salary: %.2f\n",
               id[i], name[i], dept[i], salary[i]);
    }
    return 0;
}
#include <stdio.h>
struct Student {
    int roll;
    char name[50];
    int age;
    float marks;
};

int main() {
    struct Student s[50];
    int n, i;

    printf("Enter number of students: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Enter roll, name, age, marks: ");
        scanf("%d %s %d %f", &s[i].roll, s[i].name, &s[i].age, &s[i].marks);
    }

    printf("\n--- Student Records ---\n");
    for (i = 0; i < n; i++) {
        printf("Roll: %d, Name: %s, Age: %d, Marks: %.2f\n",
               s[i].roll, s[i].name, s[i].age, s[i].marks);
    }
    return 0;
}
#include <stdio.h>
#include <string.h>

struct Student {
    int roll;
    char name[50];
    int marks;
};

void display(struct Student s[], int n) {
    int i;
    printf("\n--- Student Records ---\n");
    for (i = 0; i < n; i++) {
        printf("Roll: %d, Name: %s, Marks: %d\n", s[i].roll, s[i].name, s[i].marks);
    }
}

// Function to search by roll number
void search(struct Student s[], int n, int roll) {
    int i, found = 0;
    for (i = 0; i < n; i++) {
        if (s[i].roll == roll) {
            printf("Record Found: Roll: %d, Name: %s, Marks: %d\n",
                   s[i].roll, s[i].name, s[i].marks);
            found = 1;
            break;
        }
    }
    if (!found) printf("Record not found.\n");
}

// Function to update marks
void update(struct Student s[], int n, int roll, int newMarks) {
    int i, found = 0;
    for (i = 0; i < n; i++) {
        if (s[i].roll == roll) {
            s[i].marks = newMarks;
            printf("Marks updated successfully.\n");
            found = 1;
            break;
        }
    }
    if (!found) printf("Record not found.\n");
}

int main() {
    struct Student s[50];
    int n = 0, choice, roll, marks;

    do {
        printf("\n--- Student Record Menu ---\n");
        printf("1. Add Student\n");
        printf("2. Display All\n");
        printf("3. Search by Roll\n");
        printf("4. Update Marks\n");
        printf("5. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        
  switch (choice) {
            case 1:
                printf("Enter roll, name, marks: ");
                scanf("%d %s %d", &s[n].roll, s[n].name, &s[n].marks);
                n++;
                break;
            case 2:
                display(s, n);
                break;
            case 3:
                printf("Enter roll to search: ");
                scanf("%d", &roll);
                search(s, n, roll);
                break;
            case 4:
                printf("Enter roll to update: ");
                scanf("%d", &roll);
                printf("Enter new marks: ");
                scanf("%d", &marks);
                update(s, n, roll, marks);
                break;
            case 5:
                printf("Exiting system.\n");
                break;
            default:
                printf("Invalid choice.\n");
        }
    } while (choice != 5);

    return 0;
}        
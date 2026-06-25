#include <stdio.h>
struct Contact {
    int id;
    char name[50];
    char phone[15];
};

int main() {
    struct Contact c[50];
    int n, i;

    printf("Enter number of contacts: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Enter id, name, phone: ");
        scanf("%d %s %s", &c[i].id, c[i].name, c[i].phone);
    }

    printf("\n--- Contact List ---\n");
    for (i = 0; i < n; i++) {
        printf("ID: %d, Name: %s, Phone: %s\n",
               c[i].id, c[i].name, c[i].phone);
    }
    return 0;
}
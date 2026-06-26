#include <stdio.h>
#include <string.h>

int main() {
    int id[50], n, i;
    char title[50][50], author[50][50];

    printf("Enter number of books: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Enter id, title, author: ");
        scanf("%d %s %s", &id[i], title[i], author[i]);
    }

    printf("\n--- Library Records ---\n");
    for (i = 0; i < n; i++) {
        printf("ID: %d, Title: %s, Author: %s\n", id[i], title[i], author[i]);
    }
    return 0;
}
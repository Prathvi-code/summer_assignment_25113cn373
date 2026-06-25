#include <stdio.h>

int main() {
    int a[50], n, choice, i, key, found;

    printf("Enter size of array: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) scanf("%d", &a[i]);

    do {
        printf("\n--- Array Menu ---\n");
        printf("1. Display\n2. Search\n3. Find Max\n4. Find Min\n5. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                for (i = 0; i < n; i++) printf("%d ", a[i]);
                printf("\n");
                break;
            case 2:
                printf("Enter element to search: ");
                scanf("%d", &key);
                found = 0;
                for (i = 0; i < n; i++) {
                    if (a[i] == key) { found = 1; break; }
                }
                if (found) printf("Element found at position %d\n", i+1);
                else printf("Element not found\n");
                break;
            case 3:
                key = a[0];
                for (i = 1; i < n; i++) if (a[i] > key) key = a[i];
                printf("Maximum = %d\n", key);
                break;
            case 4:
                key = a[0];
                for (i = 1; i < n; i++) if (a[i] < key) key = a[i];
                printf("Minimum = %d\n", key);
                break;
            case 5: printf("Exiting array system.\n"); break;
            default: printf("Invalid choice.\n");
        }
    } while (choice != 5);

    return 0;
}
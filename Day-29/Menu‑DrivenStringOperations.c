#include <stdio.h>
#include <string.h>

int main() {
    char str[100], rev[100];
    int choice, i, j, len, vowels;

    printf("Enter a string: ");
    gets(str);

    do {
        printf("\n--- String Menu ---\n");
        printf("1. Length\n2. Reverse\n3. Count Vowels\n4. Uppercase\n5. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Length = %d\n", strlen(str));
                break;
            case 2:
                len = strlen(str);
                j = 0;
                for (i = len-1; i >= 0; i--) rev[j++] = str[i];
                rev[j] = '\0';
                printf("Reversed = %s\n", rev);
                break;
             case 3:
                vowels = 0;
                for (i = 0; str[i] != '\0'; i++) {
                    char ch = str[i] | 32; // lowercase
                    if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u') vowels++;
                }
                printf("Vowels = %d\n", vowels);
                break;
            case 4:
                for (i = 0; str[i] != '\0'; i++)
                    if (str[i] >= 'a' && str[i] <= 'z') str[i] -= 32;
                printf("Uppercase = %s\n", str);
                break;
            case 5: printf("Exiting string system.\n"); break;
            default: printf("Invalid choice.\n");
        }
    } while (choice != 5);

    return 0;
}    
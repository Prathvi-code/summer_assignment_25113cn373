#include <stdio.h>
#include <string.h>

int main() {
    char str[100], rev[100];
    int i, j, len;

    printf("Enter a string: ");
    gets(str);

    len = strlen(str);
    j = 0;
    for (i = len - 1; i >= 0; i--) {
        rev[j++] = str[i];
    }
    rev[j] = '\0';

    if (strcmp(str, rev) == 0)
        printf("String is Palindrome\n");
    else
        printf("String is Not Palindrome\n");

    return 0;
}
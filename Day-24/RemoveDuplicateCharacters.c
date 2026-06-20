#include <stdio.h>
#include <string.h>

int main() {
    char str[100], result[100];
    int i, j, k = 0, found;

    printf("Enter a string: ");
    gets(str);

    for (i = 0; str[i] != '\0'; i++) {
        found = 0;
        for (j = 0; j < k; j++) {
            if (result[j] == str[i]) {
                found = 1;
                break;
            }
        }
        if (!found) {
            result[k++] = str[i];
        }
    }
    result[k] = '\0';

    printf("String after removing duplicates = %s\n", result);
    return 0;
}
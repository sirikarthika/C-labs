#include <stdio.h>
#include <string.h>

int main() {
    int n, i, found = 0;
    char str[100][100], search[100];
    printf("Enter number of strings: ");
    scanf("%d", &n);


    printf("\nEnter %d strings:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%s", str[i]);
    }


    printf("\nEnter string to search: ");
    scanf("%s", search);
    for (i = 0; i < n; i++) {
        if (strcmp(str[i], search) == 0) {
            found = 1;
            break;
        }
    }
    if (found)
        printf("\n'%s' found at position %d.\n", search, i + 1);
    else
        printf("\n'%s' not found in the array.\n", search);

    return 0;
}
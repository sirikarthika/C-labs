#include <stdio.h>

int main() {
    int i, n;
    printf("Enter number of strings: ");
    scanf("%d", &n);

    
    char str[n][100]; 
    printf("\nEnter %d strings:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%s", str[i]); 
    }
    printf("\nYou entered:\n");
    for (i = 0; i < n; i++) {
        printf("%s\n", str[i]);
    }

    return 0;
}
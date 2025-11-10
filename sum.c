#include <stdio.h>

int sum(int n) {
    if (n == 0)
        return 0;
    else
        return n + sum(n - 1); 
}

int main() {
    int n;

    printf("Enter a positive number: ");
    scanf("%d", &n);
    if (n < 0)
        printf("Please enter a positive number.\n");
    else
        printf("Sum of first %d natural numbers = %d\n", n, sum(n));

    return 0;
}
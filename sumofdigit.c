#include <stdio.h>

int main() {
    int num, sum = 0;

  
    printf("Enter a number: ");
    scanf("%d", &num);

    // Calculate sum of digits
    while (num != 0) {
        int nums= num % 10;   
        sum = sum + nums;  
        num = num / 10;       
    }

  
    printf("Sum of digits = %d\n", sum);

    return 0;
}
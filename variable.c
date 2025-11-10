#include <stdio.h>

int main() {
    // Variable declaration
    int a;           // integer variable
    float b;         // float variable
    char c;          // character variable

    // Variable initialization
    a = 10;          // assigning value to integer
    b = 5.5;         // assigning value to float
    c = 'A';         // assigning value to character

    // Declaration and initialization together
    int x = 20;
    float y = 3.14;
    char z = 'Z';

    // Display the values
    printf("Values after initialization:\n");
    printf("a = %d\n", a);
    printf("b = %.2f\n", b);
    printf("c = %c\n", c);
    printf("x = %d\n", x);
    printf("y = %.2f\n", y);
    printf("z = %c\n", z);

    return 0;
}
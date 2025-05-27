#include <stdio.h>
int main() {
    // swap two numbers
    float A,B,temp;
    printf("Enter the first digit A: ");
    scanf("%f",&A);
    printf("Enter the second digit B: ");
    scanf("%f",&B);

    // swaping of the numbers
    temp = A;
    A = B;
    B = temp;
    // print the swaped numbers
    // %f is used for float value
    // %d is used for integer value
    // %c is used for char value
    // %s is used for string value
    // %lf is used for double value
    // %u is used for unsigned int value
    // %o is used for octal value
    printf("swaping of the numbers: \nA = %.2f \nB = %.2f",A,B);
    // %.2f is used for float value and .2 is used for two digits after the full stop
    return 0;

}
#include <stdio.h>

int main() {
    float num1, num2, result;
    char function;

    printf("Welcome to calculator..\n");

    printf("Enter the 1st number: ");
    scanf("%f", &num1);

    printf("Enter the 2nd number: ");
    scanf("%f", &num2);

    printf("Enter an operation character (A = Add, S = Subtract, M = Multiply, D = Divide, R = Modulus): ");
    scanf(" %c", &function);  // Notice the space before %c to handle newline

    switch (function)
    {
        case 'A':
        case 'a':
            result = num1 + num2;
            printf("The addition of two numbers is: %.2f\n", result);
            break;

        case 'S':
        case 's':
            result = num1 - num2;
            printf("The subtraction of two numbers is: %.2f\n", result);
            break;

        case 'M':
        case 'm':
            result = num1 * num2;
            printf("The multiplication of two numbers is: %.2f\n", result);
            break;

        case 'D':
        case 'd':
            if (num2 != 0) {
                result = num1 / num2;
                printf("The division of two numbers is: %.2f\n", result);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;

        case 'R':  // Modulus operation
        case 'r':
            if ((int)num2 != 0) {
                int mod = (int)num1 % (int)num2;
                printf("The modulus of two numbers is: %d\n", mod);
            } else {
                printf("Error: Modulus by zero is not allowed.\n");
            }
            break;

        default:
            printf("Invalid operation selected.\n");
            break;
    }

    printf("Calculator operation complete.\n");
    return 0;
}
// This code is a simple calculator that performs addition, subtraction, multiplication, division, and modulus operations based on user input.
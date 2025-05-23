#include <stdio.h>
int main() {
    int num1,num2;
    // find minimum number using ternary oprator
    printf("Welcome to find the minimum number\n");
    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    // using ternary oprator
    int min = (num1 < num2) ? num1 : num2;
    printf("The minimum number is: %d\n", min);


    return 0;
    
}
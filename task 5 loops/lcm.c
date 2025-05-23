#include <stdio.h>
int main() {
    int num1, num2,lcm;
    printf("Welcome to get the LCM of two numbers.\n");
    printf("Enter the first nmber:");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Find the maximum of the two numbers
    int max = (num1 > num2) ? num1 : num2;
    // Loop until we find the LCM

    while (1) {
        if (max % num1 == 0 && max % num2 == 0) {
            lcm = max;
            break; // Exit the loop when LCM is found
        }
        max++; // Increment max to check the next number
    }
    printf("The LCM of %d and %d is: %d\n", num1, num2, lcm);
    return 0;
}
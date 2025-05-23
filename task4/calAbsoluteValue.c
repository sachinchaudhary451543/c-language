#include <stdio.h>
int main() {
    int num,abs;
    printf("Welcome to find the absolute value of a number\n");
    printf("Enter the number:");
    scanf("%d", &num);

    abs = (num < 0 ) ? -num : num; // if the number is less then 0 then multiply it with -1 otherwise return the number as it is.
    printf("The absolute value of %d is %d\n", num, abs);
    printf("Absolute value calculation complete.\n");
}
#include <stdio.h>
int main() {
    int year;
    printf("Welcome to check the yar if leap or not\n");
    printf("Enter the year: ");
    scanf("%d", &year);

    if (year % 4 == 0 || year % 400 == 0) {
        printf("%d is a leap year.\n", year);
    } else {
        printf("%d is not a leap year.\n", year);
    }
    printf("Leap year checking complete.\n");
    return 0;
}
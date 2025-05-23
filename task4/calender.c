#include <stdio.h>
int main() {
    int month;

    printf("Welcome to calender..\n");
    printf("Enter the month number between (1-12): ");
    scanf("%d", &month);

    switch (month)
    {
    case 1:
        printf("This is the January");
        break;
    case 2:
        printf("This is the February");
        break;
    case 3:
        printf("This is the March");
        break;
    case 4:
        printf("This is the April");
        break;
    case 5:
        printf("This is the May");
        break;
    case 6:
        printf("This is the June");
        break;
    case 7:
        printf("This is the July");
        break;
    case 8:
        printf("This is the August");
        break;
    case 9:
        printf("This is the September");
        break;
    case 10:
        printf("This is the October");
        break;
    case 11:
        printf("This is the November");
        break;
    case 12:
        printf("This is the December");
        break;

    default:
        printf("Input incorrect...");
        break;
    }
    return 0;



}
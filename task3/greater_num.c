#include <stdio.h>
int main() {
    int A,B,C;
    printf("Welcome to check the greater number\n");
    printf("Enter the first number: ");
    scanf("%d", &A);
    printf("Enter the second number: ");
    scanf("%d", &B);
    printf("Enter the third number: ");
    scanf("%d", &C);

    if (A > B && A > C)
    {
        printf("%d A is greater then other",A);
    }else if (B > C && B > A)
    {
        printf("%d B,is greater then other",B);
    }else{
        printf("%d C,is greater then other",C);
    }


    return 0;
    
    
}
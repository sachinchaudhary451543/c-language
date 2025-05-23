#include <stdio.h>
int main(){
    int num, sum = 0,digit;
    printf("Welcome to get the some of integer digits.\n");
    printf("Enter the number: ");
    scanf("%d", &num);

    if (num < 0)
    {
        num = -num; // Convert to positive if negative
    }
    while (num != 0)
    {
        digit = num % 10;
        sum += digit;
        num = num/10;
    }

    printf("Here is the sum: %d",sum);
    return 0;
    
}
    
    

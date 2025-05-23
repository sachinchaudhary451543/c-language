#include <stdio.h>
int main(){
    int num,fact = 1;
    printf("Welcome to get the factorial of numbers.");
    printf("Enter the number: ");
    scanf("%d", &num);



    for (int i = 1; i <= num; i++)
    {
        if (i <= num)
        {
            fact *= i;
        }
        
    }
    
    printf("here is the factorial of %d is: %d",num,fact);
    return 0;

}
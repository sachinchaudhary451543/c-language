#include <stdio.h>
int main(){
    int num,sum = 0;
    printf("Welcome to calculate the sm of all Odd numbers..\n");
    printf("Enter the numer: ");
    scanf("%d", &num);


    for (int i = 1; i <= num; i++)
    {
        if (i % 2 != 0)
        {
            sum += i;
        }
    }

    printf("Here is the sum of all odd number from 1 to %d is: %d", num,sum);
        
    return 0;
    
}
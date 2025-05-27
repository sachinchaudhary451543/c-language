#include <stdio.h>
int main(){
    int num1 , num2, sum;

    printf("Please enter first number: ");
    scanf("%d",&num1);
    
    printf("Please enter second number: ");
    scanf("%d",&num2);


    sum = num1 + num2;

    printf("the sum of %d and %d is: %d",num1,num2,sum);
    return 0;
}
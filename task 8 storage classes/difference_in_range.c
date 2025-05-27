/*
write a program to demonstrate the difference in range between long and long long by calculating
the factorial of 20!
*/

#include<stdio.h>

long factorial_1(int);
long long factorial(int);    

int main(){
    printf("Here is lng factorial of 20: %ld",factorial_1(20));
    printf("\nHere is lng lng factorial of 20: %lld",factorial(20));
    
    return 0;
}


long factorial_1(int num){
    long result = 1;
    for (int i = 2; i <= num; i++)
    {
        result*=i;
    }

    return result;
    
}



long long factorial(int num2){
    long long result2 = 1;
    for (int i = 2; i <= num2; i++)
    {
        result2*=i;
    }

    return result2;
    
}
/*
1-size-larger than int,often 64-bit on 64-bit systems and 32-bits on 32-bit systems. 
2-range-can hold larger integer values, useful for extended arithmetic precision. 
3-suffix-denoted by an L or I suffix for long literals, eg., 100L
4-types-has a long long variant for even larger integers,at-least 64 bits. 
5-standard-size guaranteed by the c standard for at-least 32 bits. 
*/


#include<stdio.h>

long factorial(int);

int main(){
    int num1 = factorial(20);
    // printf("Factorial of 4 is: %ld",factorial(4));
    // printf("\nFactorial of 5 is: %ld",factorial(5));
    // printf("\nFactorial of 10 is: %ld",factorial(10));
    // printf("\nFactorial of 15 is: %ld",factorial(15));
    printf("\nFactorial of 20 is: %ld",num1);
    // printf("\nFactorial of 25 is: %ld",factorial(25));   
    return 0;

}

long factorial(int num) {
    long result = 1;
    for (int i = 2; i <= num; i++)
    {
        result*=i;
    }
    return result;
    
}
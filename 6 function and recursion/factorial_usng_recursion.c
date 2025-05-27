#include<stdio.h>

int factorial_using_loop(int);
int factorial_using_recursion(int);
int main(){
    int loop_factorial = factorial_using_loop(4);
    printf("factorial using loop is: %d",loop_factorial);
    
    int recursion_factorial = factorial_using_recursion(5);
    printf("\nfactorial using recursion is: %d",recursion_factorial);
    return 0;
}
int factorial_using_recursion(int num1){
    if (num1 == 0)
    {
        return 1;
    }

    return num1*factorial_using_recursion(num1-1);
    

}

int factorial_using_loop(int num){
    int result = 1;
    for (int i = 2; i <= num; i++)
    {
        result *= i;
    }
      return result;

}

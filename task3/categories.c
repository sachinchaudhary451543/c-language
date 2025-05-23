#include <stdio.h>
int main() {
    int age;
    printf("Welcome to check your age category\n");
    printf("Enter your age: ");
    scanf("%d", &age);


    if (age >= 60 && age <= 110)
    {
        printf("You are the senior.");
    }else if (age <= 60 && age >= 20)
    {
        printf("You are Adult");
    }else if (age < 20 && age > 13)
    {
        printf("You are Teenager");
    }else if (age <= 13 && age >= 1)
    {
        printf("You are the Child");
    }else
    {
        printf("You Entered incorrect age");
    }
    
    
    return 0;
    
    
    
}
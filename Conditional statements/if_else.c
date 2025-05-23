#include <stdio.h>
int main (){
    int age;
    printf("Enter your age for licence: ");
    scanf("%d",&age);

    if (age < 18 )
    {
        /* code */
        printf("You are too young to apply licence..");
    }else if (age >= 60)
    {
        /* code */
        printf("you are senior you can not apply anymore....");
    }else{
        printf("You are eligible to apply for licence. Apply,Now");
    }
    





    printf("\nYour age is: %d",age);


    return 0;
}
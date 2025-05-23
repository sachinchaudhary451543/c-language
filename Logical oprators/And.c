#include <stdio.h>
int main(){
    int age;
    char is_Indian;
    printf("enter the age: ");
    scanf("%d",&age);
    // printf("Are you Indian? Y/N: ");
    // scanf(" &c",&is_Indian);


 
    if (age >= 18 && age < 70 ){
            /* And logic */
        printf("You are eligible for licence.");
    }else{
        printf("you are not eligible for licence..");
    }


    printf("Your age is: %d",age);

    return 0;
    
    
}
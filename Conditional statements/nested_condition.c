#include <stdio.h>
int main (){
    int age;
    char Indian;
    printf("Enter your age for licence: ");
    scanf("%d",&age);
    printf("Are you Indian?  Y/N: ");
    scanf(" %c",&Indian);


    if (Indian == 'Y')
    {
        if (age < 18)
        {
            printf("\nYou are too young for Licence..");
        }else if (age > 60)
        {
            printf("\nyou are senior,you can't apply for licence...");
        }else{
            printf("\nYou are eligible for licence..");
        }
    }else{
        printf("\nThis is for Indians Only...");
    }
    


    
    printf("\nYour age is: %d",age);
    return 0;
}
#include <stdio.h>
int main(){
    int age;
    char is_Indian;
    printf("enter the age: ");
    scanf("%d", &age);
    printf("Are you an Indian citizen? (y/n): ");
    scanf(" %c", &is_Indian);



    // OR oprator-- if any of the condition is true this will give you the true result.
    // AND oprator-- both the condition should be true.

    if (is_Indian == 'Y' || (age >=18 && age < 60)) {
        printf("You are eligible for licence.\n");
    } else{
        printf("You are not eligible for licence.\n");
    }


    printf("your age is %d\n", age);
    return 0;
    
    
    
}

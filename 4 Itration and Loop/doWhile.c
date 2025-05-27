/*
executes block first,then checks condition.asm
guaranteed to run at least one iteration. 
unlike while, first iteration is unconditional. 
don't forget to update condition to avoid infinite loops. 

*/


#include <stdio.h>
int main(){
    int num;

    do
    {
        printf("Enter the number:");
        scanf("%d", &num);
    } while (num != 10);

    printf("You got the number...");
    
    
    return 0;
    
}
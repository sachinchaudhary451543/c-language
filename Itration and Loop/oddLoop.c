/*
condition driven: run until a spacific condition is fulfiled.
while and do-while: commonly used for indeterminate iterations.
dynamic iteration: iterations depend on changing conditions or input. 
break usage: may use break for exit in any loop type
practical use: ideal for processing with unknown compeletion point.
design carefully:  important to avoid infinite loops by ensuring a valid exit condition. 

*/


#include <stdio.h>
int main(){
    int num = 0;
    while (num != 10)
    {
        printf("Please enter the number: ");
        scanf("%d", &num);
    }

    printf("Congrates you have guessed the correct number");

    return 0;
    
}
/*
1.default class: variales within a function are auto by default if no other storage class specifier is provided
2.stack storage:auto variables are typically stored on the stack
3.function scope:they are local to the block in which they are defned
4.no initial vaalue:typically have an undefined initial alue explicitly initialized
5.lifetime:created when block is entered and destroyed when it is exited. 
*/

#include<stdio.h>
void function() {
    // an auto variable (though auto keyword is usully omitted)
    int autoVar = 10;
    printf("the value of autoVar is: %d",autoVar);
    // autoVar is destroyed here as it goes out of scope
}
int main(){
    function(); //cals function with auto variable
    //function() has finished; autoVar is no longer accessible
    return 0;
}
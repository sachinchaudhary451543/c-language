/*
definition: blocks of reusable code. 
Dry principle: Don't repeat yourself" it encourages code reusability. 
usage: organizes code and performs specific tasks. 

*/
/*
function prototype---> 
specifies function name,return type,parameters without the body. 
purpose: enables type checking ad forward declaration of functions. 
parameter names optional: only types require in prototpes. 
placement: often at the start of a c file or in a header file. 
*/

// void countTo100();  //function prototype
// int sum (int a, int b);
//     |   |       |           |
// return function parameter   ending statement semicolon
// type    name        name


#include<stdio.h>

void count_to_100();    //function prototype
int sum(int, int);

int main() {            //function calling
    count_to_100();
    int add = sum(4,5);
    printf("\nAddition is: %d",add);


    int x = 9;     // we can pass teh values like this for function.
    int y = 19;
    int z = sum(x,y);
    printf("\nAddition is: %d", z);
    return 0;
}

void count_to_100(){        //function defination
    for (int i = 1; i <= 100; i++)
    {
        printf(" %d", i);
    }
    
}
int sum(int first,int second){
    int addition = first+second;
    return addition;
}
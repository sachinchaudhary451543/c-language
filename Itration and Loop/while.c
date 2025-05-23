/*
[initialization]
    |
[condition]----------------->Exit from the loop
    |
[Execute loop body]
    |
[Update variable]
*/

#include <stdio.h>
int main () {
    // initialization
    int num = 1;

    // condition
    while (num <= 10)
    {
        printf("%d\n", num);
        num++;      //update
    }
// reverse 
    // int num2 = 10;
    // while (num2 >= 1)
    // {
    //     printf("%d\n", num2);
    //     num2--;
    // }
    

    printf("loop has ended.");
    return 0;

    
}
#include <stdio.h>
int main() {
    int num;
    input_number: //label for goto 
    // in the goto we use a label to whare you want togo repeatidly untill you got you right input from user.
    printf("Enter the number: ");
    scanf("%d", &num);


    if (num != 10)
    {
        goto input_number;
        // the input method will repeat in loop untill it get 10.
    
    }
    return 0;
}
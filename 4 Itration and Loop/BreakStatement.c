/*
break lets you stop a loop early,or break out of a lop
exit loops: Ends for, while,do-while loops early.
ends switch cases: prevents fall-through in switch cases.
immediate effect: Imediately leaves the loop/switch.
control flow: Alters program flow for efficiency.
use wisely: Important for readability.
*/


#include <stdio.h>
int main(){
    int num;
    printf("Please enter the number: ");
    scanf("%d", &num);


    for (int i = 1; i <= 10; i++) {
       printf("%d X %d = %d\n",num,i,num*i);
       if (i == 5)
       {
         break;   /*this will exit the output from 5*/
       }
        
    }
    return 0;
}
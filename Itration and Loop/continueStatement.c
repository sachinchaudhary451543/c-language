/*
continue is used to skip one iteration or the current iteration
nest iteration: imediately starts the next iteration of the loop.
in while loop remember to do the increment manually before using continue.
used in loops: works within for,while,do-while loops.
not for switch: unlike break,not used in switch statements. 
improves logic: helps in avoiding nested conditions within loops. 

*/

#include <stdio.h>
int main() {
    
    for (int i = 1; i <= 100; i++)
    {
        if (i % 2 == 1)
        {
            continue;
        }
        printf("%d\n",i);
    }
    
}
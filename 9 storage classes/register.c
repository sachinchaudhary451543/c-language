/*
1-CPU register Hints to the compiler that the variable should e stored in a CPU register for faster access
2-limited size:can only be applied to variables that can fit within a CPU register
3-no memory address: cannot use the address-of oprator(&) on a register variable since it might not have a memory address
4-function scope:local to the function or block they are defined in,simiar to auto
5-quick Access:intended for variables that are heavily used,such as counters in loops. 
*/

#include<stdio.h>
int main(){
    //suggests storing counter in a register
    register int counter;
    for (counter = 0; counter < 5; ++counter)
    {
        printf("counter is %d\n",counter);
    }

    //note: Attempting to get the address of counter
    //like & counter, will cause a compile error

    return 0;
    
}
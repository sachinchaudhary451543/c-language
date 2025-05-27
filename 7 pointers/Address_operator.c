#include<stdio.h>
int main(){
    int i = 3;
    printf("Address of i= %p\n", &i);  //%p is for pointer address and &- is used for address operator
    printf("Value of i = %d\n", i);

    printf("Value at adress is= %d", *(&i));  // (*)-operator is called value at address oprator. this operator used to get the value from a particular address.

    return 0;
}

/*
address oprator: the ampersand & grts the address of a variable.
*/
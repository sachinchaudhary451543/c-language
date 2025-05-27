#include<stdio.h>
int main(){
    int i = 3;
    int *j = &i;


    printf("address of i = %p", &i);
    printf("\naddress of i = %p",j);
    printf("\nAddress of j = %p", &j);
    printf("\nvalue of j = %p", j);
    printf("\nvalue of i = %d", i);
    printf("\nvalue of i = %d",*(&i));
    printf("\nvalues of i = %d", *j);



    return 0;
}
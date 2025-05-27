#include<stdio.h>
int main(){
    int i = 3,*j,**k;

    j = &i;
    k = &j;


    printf("address of i = %p", &i);
    printf("\naddress of i = %p",j);
    printf("\nAddress of i = %p",*k);
    printf("\nAddress of j = %p", &j);
    printf("\nAddress of j = %p",k);
    printf("\nAddress of k = %p",&k);
    printf("\nvalue of j = %p", j);
    printf("\nvalue of k = %p", k);
    printf("\nvalue of i = %d", i);
    printf("\nvalue of i = %d",*(&i));
    printf("\nvalue of i = %d", *j);
    printf("\nvalue of i = %d", **k);



    return 0;
}
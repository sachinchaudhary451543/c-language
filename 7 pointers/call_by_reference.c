/*
1-direct access-call by reference pases teh address of variables,allowing functions to modify the actual values.asm
2-pointers in c-implemented using pointers that point to the original data. 
3-efficiency-avoids copying large data structures,saving memory and time. 
4-multiple returns-can return multiple values from a function via out-parameters. 
5-risk-increases the potential for unintended side efects if not used carefully. 

*/


#include<stdio.h>
void swap(int*,int*);

int main(){
    int x = 4;
    int y = 85;

    printf("Value of x = %d, value of y = %d",x,y);

    swap(&x,&y);  //finction call
    printf("\nValue of x = %d, value of y = %d",x,y);
}
void swap(int *ptr1,int *ptr2){

    printf("\nValue of ptr1 = %d, value of ptr2 = %d",*ptr1,*ptr2);
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;

    printf("\nvalue of ptr1= %d, value of ptr2 = %d",*ptr1,*ptr2);

}
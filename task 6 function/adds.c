#include<stdio.h>
int adds(int,int,int,int);

int main(){
    int sum_of_integers = adds(2,3,4,5);
    printf("Here is the sum: %d",sum_of_integers);
    return 0;
}


int adds(int a, int b,int c, int d){
    int sum = a+b+c+d;

    return sum;
}
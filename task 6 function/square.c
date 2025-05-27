#include<stdio.h>
int square(int);
int main(){
    int a;
    printf("Enter the number to get teh square: ");
    scanf("%d",&a);
    int Is_square = square(a);

    printf("The square of %d is: %d",a,Is_square);
    
    return 0;

}

int square(int num){
    int square1 = num*num;
    return square1;

}
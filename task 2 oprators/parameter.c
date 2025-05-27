#include <stdio.h>
int main() {
    float a,b,c,d,parameter;
    printf("enter side A: ");
    scanf("%f",&a);
    printf("enter side B: ");
    scanf("%f",&b);
    printf("enter side C: ");
    scanf("%f",&c);
    printf("enter side D: ");
    scanf("%f",&d);



    parameter = a+b+c+d;


    printf("Here's the parameter of the Rectangle: %f",parameter);
    return 0;



}
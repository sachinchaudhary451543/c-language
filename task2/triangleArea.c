#include <stdio.h>
int main() {
    float B,H,Area;

    printf("Enter the Base: ");
    scanf("%f",&B);
    printf("Enter the Height: ");
    scanf("%f",&H);


    Area = (B*H)/2;


    printf("Here's the Area of Triangle: %f",Area);


    return 0;
}
#include <stdio.h>
int main() {
    float a, area;

    printf("Enter the Arc of the Square: ");
    scanf("%f",&a);

    area = a*a;
    printf("Area of square is: %.3f",area);
    return 0;
}
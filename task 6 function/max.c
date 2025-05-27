#include<stdio.h>
int max(float,float);
int main(){
    float a,b;
    printf("Welcome to get the large value of two.");
    printf("\nEnter the first number: ");
    scanf("%f",&a);
    printf("\nEnter the second number: ");
    scanf("%f",&b);

    float maximum_value = max(a,b);
    printf("\nThe maximum value is: %.2f\n", maximum_value);  // Display result
    return 0;

}


int max(float num1,float num2){
    if (num1 == num2)
    {
        printf("Both numbers are equal..");
        return num1;  // Return either number since they are equal
    }else if(num1 < num2){
        printf("Large number is: %f",num2);
        return num2;  // Return the larger number
    }else
    {
        printf("Large number is: %f", num1);
        return num1;  // Return the larger number
    }
}
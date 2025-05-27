/*
create a program that converts a large number of kilometers to miles,using long or long long to store the distance. 
*/
#include<stdio.h>
int main(){

    long long kilometers;
    double miles;

    printf("Welcome to convert km to miles.");
    printf("\nEnter the KM: ");
    scanf("%lld", &kilometers);


    miles = kilometers*0.621371;

    printf("%lld kilometers is equals to %.6f miles",kilometers,miles);


    return 0;
}
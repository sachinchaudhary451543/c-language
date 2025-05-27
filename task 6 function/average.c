#include<stdio.h>
int get_average (int,int,int,int,int);

int main(){
    int a,b,c,d,e;
    printf("Welcome to check avrage in five integer\n.");
    printf("Enter the first number: ");
    scanf("%d",&a);
    printf("\nEnter the second number: ");
    scanf("%d",&b);
    printf("\nEnter the third number: ");
    scanf("%d",&c);
    printf("\nEnter the forth number: ");
    scanf("%d",&d);
    printf("\nEnter the fifth number: ");
    scanf("%d",&e);



    float is_avrage = get_average(a,b,c,d,e);
    printf("\nThe avrage is: %f",is_avrage);
    return 0;
}


int get_average(int num1,int num2,int num3,int num4,int num5){
    int sum = num1+num2+num3+num4+num5;
    float avrage = sum/5;

    return avrage;
}
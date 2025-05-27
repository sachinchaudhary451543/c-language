#include <stdio.h>
int main() {
    int a,b,sum,sub,mult,devide,moduler;
    printf("Enter the first digit:  ");
    scanf("%d",&a);
    printf("Enter the second digit:  ");
    scanf("%d",&b);

    sum = a+b;
    sub = a-b;
    mult = a*b;
    devide= a/b;
    moduler = a % b;
    
    
    printf("sum: %d\nsub: %d\nmultiply: %d\ndevide: %d\nmoduler:%d",sum,sub,mult,devide,moduler);
    return 0;


}
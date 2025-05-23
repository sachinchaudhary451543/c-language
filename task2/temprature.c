#include <stdio.h>
int main(){
    float F,C;

    printf("Enter the fahrenheit temp: ");
    scanf("%f",&F);

    C = (F-32)*5/9;
    printf("Here's the Temp. in celcius: %f",C);
    printf("/degree");

    return 0;
}
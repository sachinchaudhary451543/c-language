#include <stdio.h>
int main(){
    float P,R,T,SI,CI;


    printf("Enter the principle value: ");
    scanf("%f",&P);
    printf("Enter the Rate of Interest: ");
    scanf("%f",&R);
    printf("Enter the Time Duration: ");
    scanf("%f",&T);


    SI = (P*R*T)/100;
    CI = P*(1+R/100)*T;
    

    printf("Here's the simple intrest: %f",SI);
    printf("\nHere's the compound interest: %f",CI);
    printf("\nFinal Amount after SI: %f",(SI+P));
    printf("\nFinal Amount after CI: %f",(CI+P));


    return 0;

}
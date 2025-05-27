#include <stdio.h>
int main (){
    // [12],[18] is array method wil store the 12,18 words
    char first[12],last[18];
    float age;

// %s reads a word (stops at space) it reads single word not full sentence
    printf("Enter first name: ");
    scanf("%s",&first);
    printf("Now,Enter your last name: ");
    scanf("%s",&last);
    printf("Enter your age: ");
    // %.2f uses for float digit and .2 is for storing the two digtis after the full stop
    // %d uses for integer value
    scanf("%f",&age);


    printf("\n\nHello %s %s \nyour age is: %.2f",first,last,age);
    return 0;
}
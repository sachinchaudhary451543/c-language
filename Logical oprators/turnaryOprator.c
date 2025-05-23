#include <stdio.h>
int main() {
    char gender;
    printf("Please enter your gender M/F: ");
    scanf(" %c", &gender);

// this gives output according to the statement if condition is true then return the first output other wise second...
    gender == 'M' ? printf("Male"):printf("Female");


    return 0;
}
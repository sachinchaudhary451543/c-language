#include <stdio.h>
int main() {
    int score,category;
    printf("Welcome to Generate the categorization of students");
    printf("Enter your Score: ");
    scanf("%d", &score);


    (score >= 80) ? printf("High") : 
    (score >= 50) ? printf("Modrate"): 
    (score > 0) ? printf("Low") : printf("Invalid score");

}
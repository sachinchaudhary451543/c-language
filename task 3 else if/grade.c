#include <stdio.h>
int main() {
    int marks;
    printf("Welcome to check the grade\n");
    printf("enter the marks: ");
    scanf("%d", &marks);

    if (marks >= 90 && marks <= 100) {
        printf("Grade A\n");
    } else if (marks >= 80 && marks < 90) {
        printf("Grade B\n");
    } else if (marks >= 70 && marks < 80) {
        printf("Grade C\n");
    } else if (marks >= 60 && marks < 70) {
        printf("Grade D\n");
    } else if (marks >= 50 && marks < 60) {
        printf("Grade E\n");
    } else if (marks >= 0 && marks < 50) {
        printf("Grade Fail\n");
    } else {
        printf("Invalid marks entered.\n");
    }
    printf("Grade generation is completed..");
    return 0;
    
}
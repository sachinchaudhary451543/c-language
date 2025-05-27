/*
1-Array to pointer:Arrays become pointers when passed to functions
2-call by reference:changes in functions affect the original array
3-include size:pas aray size as an extra argument
4-specify type:declare element type in the function parameters
5-efficient:No full array copy just pointers is passed
*/


#include<stdio.h>
void print_marks(int marks[],int no_of_students);

int main(){
    int marks[3];
    int no_of_students = 3;


    for (int i = 0; i < no_of_students; i++)
    {
        printf("Please Enter the marks of students %d: ",i+1);
        scanf(" %d",&marks[i]);
    }
    print_marks(marks,no_of_students);


    return 0;

}

void print_marks(int students_marks[],int students_counts){

    for (int i = 0; i < students_counts; i++)
    {
        printf("\nMarks of Student %d are: %d",(i+1),students_marks[i]);

    }
    
    
}
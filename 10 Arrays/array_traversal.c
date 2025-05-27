/*
1-orderly visit:go throug elements from start to end
2-loops:use for or while for access
3-indexes:start at 0,end at size-1
4-modify or read:perform operations on elements
5-pointer option:increment pointers to naviate

*/


#include<stdio.h>
int main(){
    int marks[5];
    int no_of_students = 5;


    for (int i = 0; i < no_of_students; i++)
    {
        printf("Please Enter the marks of students %d: ",i+1);
        scanf(" %d",&marks[i]);
    }

    for (int i = 0; i < no_of_students; i++)
    {
        printf("\nMarks of Student %d are: %d",(i+1),marks[i]);

    }



    return 0;
    
    
}
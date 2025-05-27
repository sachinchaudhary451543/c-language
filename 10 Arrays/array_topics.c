/*
1-NEED OF ARRAY-
--> an array is just a list of values.
-->index:starts with 0
-->arrays are used for storng multiple values in a single variable

2-ARRAY DECLARATION--
-->syntax:declared by specifying the type,name,and size in brackets,as..int arr[10]
-->fixe size:size must be known at compile time or be a constant expression
-->zero-based indexing:Arrays are indexed starting from 0
-->storage: contiguous block of meory
-->type uniformity:all elements must be of the same type

3-ACCESSING ARRAY ELEMENTS--
-->use indexex:access with arr[index]
-->starts at 0: first element is arr[0]
-->for loops:Iterate with loops
-->no bounds check:Accessing outside the array size is unsafe. 

4-ARRAY INITIALIZATION--
-->direct assignment:initialize with value,as--> int num[] = {1,2,3};
-->Auto Zero-fill:Unspecified elements default to zero, as--> int ar[5]={1};
-->zero array: Initialize al to zero with int arr[5]={0}; or empty braces
-->designated:set specific elements as--> int arr[5]={[2]=5};


5-ARRAY TRAVERSAL--

6-BOUNDS CHECKING--
-->c doesn't Auto-check: No automatic bounds verfication on arrays
-->risks: Out-of-bounds access can lead to crashes or security risks
-->validate indices:Always check indices against array size


7-ARRAY AS FUNCTION ARGUMENTS--


8-POINTER ARITHMETIC
9-POINTERS AND ARRAYS
10-TWO-DIMENSIONAL ARRAY
11-MULTI-DIMENSIONAL ARRAY
*/


// 3-acessing array

#include<stdio.h>
int main(){
    int marks[5];
    //int marks[]={99,45,50,85,99}  //array initialiation

    printf("Enter marks for student 1: ");
    scanf(" %d",&marks[0]);
    printf("Enter marks for student 2: ");
    scanf(" %d",&marks[1]);
    printf("Enter marks for student 3: ");
    scanf(" %d",&marks[2]);
    printf("Enter marks for student 4: ");
    scanf(" %d",&marks[3]);
    printf("Enter marks for student 5: ");
    scanf(" %d",&marks[4]);




    printf("\nMarks of student 1 are: %d",marks[0]);
    printf("\nMarks of student 2 are: %d",marks[1]);
    printf("\nMarks of student 3 are: %d",marks[2]);
    printf("\nMarks of student 4 are: %d",marks[3]);
    printf("\nMarks of student 5 are: %d",marks[4]);



    return 0;
}
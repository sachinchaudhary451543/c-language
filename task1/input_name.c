#include <stdio.h>
int main (){
    char name[50],last[50];
    printf("Enter your name please: ");
    scanf("%s %s",&name,&last);
    printf("Welcome %s %s to \"C\" Programming",name,last);
}


// output 2 diffrent types of input of %s in this situations
// Enter your name please: sachin chaudhary
// Welcome sachin chaudhary to "C" Programming
// PS C:\Users\Admin\OneDrive\Desktop\web development\c language\task1> .\input_name
// Enter your name please: sachin
// chaudahry
// Welcome sachin chaudahry to "C" Programming
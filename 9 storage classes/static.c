/*
1-persistance:static variables retain their value between function calls
2-initialization:automatically initialized to zero if no initial value is provided
3-fuction and file scope: static variables can be local to a function or have files scope if declared outside of a function
4-internal linkage:file-scope static variables are only visible within the file they are declared in,not externally
5-single instance:the variable is allocated once and is not recreated with each function call.
*/


#include<stdio.h>
void increamentCounter(){
    //A static variable retains its value between
    //function calls

    static int counter = 0;
    counter++;
    printf("counter is %d\n",counter);
    

}
int main(){
    for (int i = 0; i < 3; i++)
    {
        //each call will increament the counter
        increamentCounter();

    }
    //the counter retains its value between calls
    // and is not reinitialized

    return 0;
    
}
/*
1-external linkage- extern variables are define in another file or outside of any function,allowing them to be acceesed across multiple files
2-global access-enables variables to be shared between difrent program files
3-declaration vs definition-an extern declaration in one file references the variable's memory location defined in another file witout alocating space for it
4-no initialization-typically,extern variables are not initialized with the declaration
5-use case-useful for global variables that need to be accessed by multiple function acress diffresnt files

*/

//main.c file
#include<stdio.h>
//declaration of an external variable
extern int extVar;


void printExtVar();
//declaration of fuction that uses extVar


int main() {
    printExtVar();
    //use extVar from another file

    return 0;
}






//help.c file

#include<stdio.h>

//definition and initialization of external variable
int extVar = 42;
void printExtVar(){
    printExtVar("External variable is: %d\n",extVar);
}
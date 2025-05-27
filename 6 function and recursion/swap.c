/*
value copy: passes argument's copy,not the orignal. 
seprate memory: parameters use distinct memory locations. 
data safty: original data remains unchanged by the function. 
efiency: Good for small data types.less so for large structures.asm
ease of use: straightforword and safe for functions not altering inputs. 
s

*/
#include<stdio.h>
void swap(int,int);

int main(){
    printf("enter the first number: ");
    int x;
    scanf("%d", &x);
    printf("enter the second number: ");
    int y;
    scanf("%d", &y);


    printf("x: %d, y: %d", x,y);

    swap(x,y);

    printf("\nThe main data will remain same their will no change.`\n --> x: %d, y: %d",x,y);
    return 0;
}

void swap(int first, int second){
int temp = first;
first = second;
second = temp;

printf("\nfirst: %d, second: %d", first,second);
}

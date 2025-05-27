// in this we have to do all i the single line - 
// for (initialization:condition;update) {
// body of the loop
// }


// standard loop for runing code multiple times.
// generally preferred for counting iterations.
#include <stdio.h>
int main() {
    for (int num = 1; num <= 10; num++)
    {
        printf("%d\n", num);
    }

    printf("Loop has ended...");

    return 0;
    
}
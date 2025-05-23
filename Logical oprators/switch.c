/*
1-switch provides a cleaner method for multi-way branching than multiple if-else statements when testing the same expression.asm
2-the switch expression must result in an integer or character value,used to match case labels.
3-represents individual branches. execution jumps to the matching case label.
4-breaking statement-typically used to exit the switch block after a case is executed to prevent "fall through" to subsequent cases.
5-default caase-- Optional. executes if no case matches. placed at the end of the switch block
6-enhances readability--for certain types of conditional logic,switch can make the code more readabile compared to nested if-else statements.
*/

#include <stdio.h>
int main(){
    int day;
    printf("please enter the number of da between (1-7): ");
    scanf("%d", &day);

    switch (day) {
    case 1:
        printf("This is Monday");
        break;
    case 2:
        printf("This is Tuesday");
        break;
    case 3:
        printf("This is Wednesday");
        break;
    case 4:
        printf("This is Thursday");
        break;
    case 5:
        printf("This is Friday");
        break;
    case 6:
        printf("This is Saturday");
        break;
    case 7:
        printf("This is Sunday");
        break;
    
    default:
        printf("The day number entered incorrect...");
        break;
    }

    printf("\nday finding complete..");

    return 0;


}
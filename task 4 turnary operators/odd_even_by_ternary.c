#include <stdio.h>
int main() {
    int num;
    printf("Welcome to check the number is odd or even Using ternary\n");
    printf("Ente the numer: ");
    scanf("%d", &num);

    int result = (num % 2 == 0) ? printf("The number is even"): printf("The number is odd"); // 1 for even, 0 for odd

}
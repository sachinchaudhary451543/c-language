#include <stdio.h>
int main(){
    int num; 
    printf("Welcome to check if the number is prime or not.");
    printf("\nEnter the number: ");
    scanf("%d", &num);

    int isPrime = 1; // Assume the number is prime
    if (num <= 1) {
        isPrime = 0; // Numbers less than or equal to 1 are not prime
    } else {
        for (int i = 2; i * i <= num; i++) { // Check divisibility up to the square root of num
            if (num % i == 0) {
                isPrime = 0; // Found a divisor, so it's not prime
                break;
            }
        }
    }

}
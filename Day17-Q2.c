/*
Question: Write a program to check if a number is prime.
A prime number is a number greater than 1 that has no positive divisors other than 1 and itself.
*/

#include <stdio.h>

int main() 
{
    int num, is_prime = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num <= 1) {
        printf("%d is not a prime number.\n", num);
        return 0;
    }

    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            is_prime = 0;
            break;
        }
    }

    if (is_prime) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }

    return 0;
}
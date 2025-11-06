/*
Question: Write a program to check if a number is a perfect number.
A perfect number is a positive integer that is equal to the sum of its proper divisors (excluding itself).
Example: 6 → 1 + 2 + 3 = 6
*/

#include <stdio.h>

int main() 
{
    int num, sum = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num <= 0) {
        printf("Please enter a positive integer greater than 0.\n");
        return 1;
    }

    for (int i = 1; i < num; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }

    if (sum == num) {
        printf("%d is a perfect number.\n", num);
    } else {
        printf("%d is not a perfect number.\n", num);
    }

    return 0;
}
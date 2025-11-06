/*
Question: Write a program to check if a number is a strong number.
A strong number is a number in which the sum of the factorials of its digits equals the number itself.
Example: 145 → 1! + 4! + 5! = 145
*/

#include <stdio.h>

// Function to compute factorial of a digit
int factorial(int n) {
    int fact = 1;
    for (int i = 2; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() 
{
    int num, original, sum = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num <= 0) {
        printf("Please enter a positive integer greater than 0.\n");
        return 1;
    }

    original = num;

    while (num != 0) {
        int digit = num % 10;
        sum += factorial(digit);
        num /= 10;
    }

    if (sum == original) {
        printf("%d is a strong number.\n", original);
    } else {
        printf("%d is not a strong number.\n", original);
    }

    return 0;
}
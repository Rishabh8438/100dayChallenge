/*
Question: Write a program to check if a number is an Armstrong number.
An Armstrong number is a number that is equal to the sum of its own digits each raised to the power of the number of digits.
Example: 153 = 1^3 + 5^3 + 3^3
*/

#include <stdio.h>
#include <math.h>  

int main() 
{
    int num, original, sum = 0, digits = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    original = num;

    int temp = num;
    while (temp != 0) {
        digits++;
        temp /= 10;
    }

    temp = num;
    while (temp != 0) {
        int digit = temp % 10;
        sum += pow(digit, digits);
        temp /= 10;
    }

    if (sum == original) {
        printf("%d is an Armstrong number.\n", original);
    } else {
        printf("%d is not an Armstrong number.\n", original);
    }

    return 0;
}
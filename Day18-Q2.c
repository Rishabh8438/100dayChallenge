/*
Question: Write a program to find the HCF (GCD) of two numbers.
*/

#include <stdio.h>

int main() 
{
    int a, b;

    printf("Enter two positive integers: ");
    scanf("%d %d", &a, &b);

    if (a <= 0 || b <= 0) {
        printf("Please enter positive integers only.\n");
        return 1;
    }

    int x = a, y = b;
    while (y != 0) {
        int temp = y;
        y = x % y;
        x = temp;
    }

    printf("HCF (GCD) of %d and %d is: %d\n", a, b, x);

    return 0;
}
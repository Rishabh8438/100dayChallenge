/*
Question: Write a program to find the LCM of two numbers.
*/

#include <stdio.h>

int main() 
{
    int a, b, hcf, lcm;

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
    hcf = x;

    lcm = (a * b) / hcf;

    printf("LCM of %d and %d is: %d\n", a, b, lcm);

    return 0;
}
/*
Question: Write a program to take a number as input and print its equivalent binary representation.
*/

#include <stdio.h>

int main() 
{    
    int num, binary[32], i = 0;

    printf("Enter a non-negative integer: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Binary representation is not defined for negative numbers.\n");
        return 1;
    }
    if (num == 0) {
        printf("Binary: 0\n");
        return 0;
    }

    while (num > 0) {
        binary[i] = num % 2;  
        num /= 2;         
        i++;
    }

    printf("Binary: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    printf("\n");

    return 0;
}
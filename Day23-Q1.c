/*
Question: Write a program to find the sum of the series:
2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms
*/

#include <stdio.h>

int main() 
{
    int n;
    float sum = 0.0;

    printf("Enter the number of terms (n): ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive integer for n.\n");
        return 1;
    }

    int numerator = 2;
    int denominator = 3;
    for (int i = 1; i <= n; i++) {
        sum += (float)numerator / denominator;
        numerator += 2;
        denominator += 4;
    }

    printf("Sum of the series up to %d terms is: %.4f\n", n, sum);

    return 0;
}
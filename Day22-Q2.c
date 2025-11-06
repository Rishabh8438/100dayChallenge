/*
Question: Write a program to find the sum of the series:
1 + 3/4 + 5/6 + 7/8 + ... up to n terms
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

    int numerator = 1;
    int denominator = 2;
    for (int i = 1; i <= n; i++) {
        sum += (float)numerator / denominator;
        numerator += 2;
        denominator += 2;
    }

    printf("Sum of the series up to %d terms is: %.4f\n", n, sum);

    return 0;
}
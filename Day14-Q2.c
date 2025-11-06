/*
Question: Write a program to print the product of even numbers from 1 to n.
*/

#include <stdio.h>

int main()
 {
    
    int n;
    long long product = 1;  
    int has_even = 0;       

    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    if (n < 2) {
        printf("No even numbers in the range 1 to %d.\n", n);
        return 0;
    }

    for (int i = 2; i <= n; i += 2) {
        product *= i;
        has_even = 1;
    }

    if (has_even)
        printf("Product of even numbers from 1 to %d is: %lld\n", n, product);

    return 0;
}
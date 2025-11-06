/*
Question: Write a program to print all the prime numbers from 1 to n.
*/

#include <stdio.h>

int isPrime(int num) {
    if (num <= 1) return 0; 
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return 0; 
    }
    return 1; 
}

int main() {
    int n;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    if (n < 2) {
        printf("There are no prime numbers up to %d.\n", n);
        return 0;
    }

    printf("Prime numbers from 1 to %d are:\n", n);
    for (int i = 2; i <= n; i++) {
        if (isPrime(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}
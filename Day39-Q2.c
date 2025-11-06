/*
Question: Write a program to find the sum of main diagonal elements for a square matrix.
*/

#include <stdio.h>

int main() 
{
    int n, sum = 0;

    printf("Enter the size of the square matrix (n x n): ");
    scanf("%d", &n);

    if (n <= 0 || n > 10) {
        printf("Please enter a valid size between 1 and 10.\n");
        return 1;
    }

    int matrix[10][10];

    printf("Enter elements of the matrix (%d x %d):\n", n, n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
            if (i == j) {
                sum += matrix[i][j]; 
            }
        }
    }

    printf("\nSum of main diagonal elements = %d\n", sum);

    return 0;
}
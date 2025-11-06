/*
Question: Write a program to add two matrices.
*/

#include <stdio.h>

int main() 
{
    int rows, cols;

    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);

    if (rows <= 0 || cols <= 0 || rows > 10 || cols > 10) {
        printf("Please enter valid dimensions (1–10).\n");
        return 1;
    }

    int A[10][10], B[10][10], sum[10][10];

    printf("Enter elements of Matrix A (%d x %d):\n", rows, cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("A[%d][%d]: ", i, j);
            scanf("%d", &A[i][j]);
        }
    }

    printf("Enter elements of Matrix B (%d x %d):\n", rows, cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("B[%d][%d]: ", i, j);
            scanf("%d", &B[i][j]);
        }
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            sum[i][j] = A[i][j] + B[i][j];
        }
    }

    printf("\nSum of Matrix A and B:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%4d", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}
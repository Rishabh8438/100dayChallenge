/*
Question: Write a program to find the transpose of a matrix.
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

    int matrix[10][10], transpose[10][10];

    printf("Enter elements of the matrix (%d x %d):\n", rows, cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }

    printf("\nTranspose of the matrix (%d x %d):\n", cols, rows);
    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++) {
            printf("%4d", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}
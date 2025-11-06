/*
Question: Write a program to read and print a matrix.
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

    int matrix[10][10]; 

    printf("Enter elements of the matrix (%d x %d):\n", rows, cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\nThe matrix is:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%4d", matrix[i][j]); 
        }
        printf("\n");
    }

    return 0;
}
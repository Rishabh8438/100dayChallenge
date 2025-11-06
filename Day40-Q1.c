/*
Question: Write a program to perform diagonal traversal of a matrix.
This version prints diagonals starting from the top-left corner.
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

    printf("\nDiagonal traversal of the matrix:\n");

    for (int k = 0; k < cols; k++) {
        int i = 0, j = k;
        while (i < rows && j >= 0) {
            printf("%d ", matrix[i][j]);
            i++;
            j--;
        }
    }

    for (int k = 1; k < rows; k++) {
        int i = k, j = cols - 1;
        while (i < rows && j >= 0) {
            printf("%d ", matrix[i][j]);
            i++;
            j--;
        }
    }

    printf("\n");
    return 0;
}
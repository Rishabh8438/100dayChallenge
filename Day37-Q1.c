/*
Question: Write a program to find the sum of each row of a matrix and store it in an array.
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
    int rowSum[10] = {0};   

    printf("Enter elements of the matrix (%d x %d):\n", rows, cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
            rowSum[i] += matrix[i][j]; 
        }
    }

    printf("\nSum of each row:\n");
    for (int i = 0; i < rows; i++) {
        printf("Row %d sum = %d\n", i, rowSum[i]);
    }

    return 0;
}
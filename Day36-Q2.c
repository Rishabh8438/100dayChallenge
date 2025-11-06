/*
Question: Write a program to find the sum of all elements in a matrix.
*/

#include <stdio.h>

int main()
 {
    int rows, cols, sum = 0;

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
            sum += matrix[i][j]; 
        }
    }

    printf("\nSum of all elements in the matrix = %d\n", sum);

    return 0;
}
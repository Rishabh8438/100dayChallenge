/*
Question: Write a program to check if the elements on the diagonal of a matrix are distinct.
*/

#include <stdio.h>

int main() 
{
    int n, isDistinct = 1;

    printf("Enter the size of the square matrix (n x n): ");
    scanf("%d", &n);

    if (n <= 0 || n > 10) {
        printf("Please enter a valid size between 1 and 10.\n");
        return 1;
    }

    int matrix[10][10];
    int diag[10]; 

    printf("Enter elements of the matrix (%d x %d):\n", n, n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }


    for (int i = 0; i < n; i++) {
        diag[i] = matrix[i][i];
    }

    for (int i = 0; i < n - 1 && isDistinct; i++) {
        for (int j = i + 1; j < n; j++) {
            if (diag[i] == diag[j]) {
                isDistinct = 0;
                break;
            }
        }
    }

    if (isDistinct) {
        printf("\nAll diagonal elements are distinct.\n");
    } else {
        printf("\nDiagonal elements are not all distinct.\n");
    }

    return 0;
}
/*
Question: Write a program to multiply two matrices.
*/

#include <stdio.h>

int main() 
{
    int r1, c1, r2, c2;

    printf("Enter rows and columns of Matrix A: ");
    scanf("%d %d", &r1, &c1);

    printf("Enter rows and columns of Matrix B: ");
    scanf("%d %d", &r2, &c2);

    if (c1 != r2 || r1 <= 0 || c1 <= 0 || r2 <= 0 || c2 <= 0 || r1 > 10 || c1 > 10 || r2 > 10 || c2 > 10) {
        printf("Invalid dimensions. Matrix A's columns must equal Matrix B's rows.\n");
        return 1;
    }

    int A[10][10], B[10][10], product[10][10];

    printf("Enter elements of Matrix A (%d x %d):\n", r1, c1);
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            printf("A[%d][%d]: ", i, j);
            scanf("%d", &A[i][j]);
        }
    }

    printf("Enter elements of Matrix B (%d x %d):\n", r2, c2);
    for (int i = 0; i < r2; i++) {
        for (int j = 0; j < c2; j++) {
            printf("B[%d][%d]: ", i, j);
            scanf("%d", &B[i][j]);
        }
    }

    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            product[i][j] = 0;
        }
    }

    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            for (int k = 0; k < c1; k++) {
                product[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    printf("\nProduct of Matrix A and B (%d x %d):\n", r1, c2);
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            printf("%5d", product[i][j]);
        }
        printf("\n");
    }

    return 0;
}
/*
Question: Write a program to print the following pattern:
*****
*****
*****
*****
*****
*/

#include <stdio.h>

int main() 
{
    int rows = 5, columns = 5;

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= columns; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
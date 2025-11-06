/*
Question: Write a program to print the following pattern:
*
***
*****
*******
*********
*******
*****
***
*
*/

#include <stdio.h>

int main() {
    int rows = 5; 

    for (int i = 1; i <= rows; i++) {
        int stars = 2 * i - 1;
        for (int j = 1; j <= stars; j++) {
            printf("*");
        }
        printf("\n");
    }

    for (int i = rows - 1; i >= 1; i--) {
        int stars = 2 * i - 1;
        for (int j = 1; j <= stars; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
/*
Question: Write a program to find the 1’s complement of a binary number and print it.
*/

#include <stdio.h>
#include <string.h>

int main() 
{
    char binary[100];

    printf("Enter a binary number (only 0s and 1s): ");
    scanf("%s", binary);

    printf("1's Complement: ");
    for (int i = 0; i < strlen(binary); i++) {
        if (binary[i] == '0') {
            printf("1");
        } else if (binary[i] == '1') {
            printf("0");
        } else {
            printf("\nError: Invalid binary digit '%c'. Only 0 and 1 are allowed.\n", binary[i]);
            return 1;
        }
    }
    printf("\n");

    return 0;
}
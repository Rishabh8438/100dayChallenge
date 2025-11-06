/*
Question: Write a program to print each character of a string on a new line.
*/

#include <stdio.h>

int main() 
{
    char str[1000];
    int i = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); 

    printf("\nCharacters in the string:\n");
    while (str[i] != '\0') {
        if (str[i] != '\n') { 
            printf("%c\n", str[i]);
        }
        i++;
    }

    return 0;
}
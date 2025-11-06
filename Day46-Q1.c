/*
Question: Write a program to remove all vowels from a string.
*/

#include <stdio.h>

int main() 
{
    char str[1000], result[1000];
    int i = 0, j = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); 

    while (str[i] != '\0') {
        char ch = str[i];

        if (ch >= 'A' && ch <= 'Z') {
            ch = ch + ('a' - 'A');
        }

        if (!(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')) {
            result[j++] = str[i];
        }

        i++;
    }

    result[j] = '\0'; 

    printf("String without vowels: %s", result);

    return 0;
}
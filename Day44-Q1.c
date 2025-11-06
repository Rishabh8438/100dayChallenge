/*
Question: Write a program to count spaces, digits, and special characters in a string.
*/

#include <stdio.h>

int main() {
    char str[1000];
    int i = 0, spaces = 0, digits = 0, specials = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); 

    while (str[i] != '\0') {
        if (str[i] == ' ') {
            spaces++;
        } else if (str[i] >= '0' && str[i] <= '9') {
            digits++;
        } else if ((str[i] >= 33 && str[i] <= 47) ||  
                   (str[i] >= 58 && str[i] <= 64) ||  
                   (str[i] >= 91 && str[i] <= 96) ||  
                   (str[i] >= 123 && str[i] <= 126))  
        {
            specials++;
        }
        i++;
    }

    printf("\nSpaces          = %d\n", spaces);
    printf("Digits          = %d\n", digits);
    printf("Special symbols = %d\n", specials);

    return 0;
}
/*
Question: Write a program to count characters in a string without using built-in length functions.
*/

#include <stdio.h>

int main()
 {
    char str[1000];
    int count = 0;

    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); 

    while (str[count] != '\0') {
        count++;
    }

    if (count > 0 && str[count - 1] == '\n') {
        count--; 
    }

    printf("Number of characters = %d\n", count);

    return 0;
}
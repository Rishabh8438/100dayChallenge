/*
Question: Write a program to count frequency of a given character in a string.
*/

#include <stdio.h>

int main()
 {
    char str[1000], ch;
    int i = 0, count = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); 

    printf("Enter the character to count: ");
    scanf("%c", &ch);

    while (str[i] != '\0') {
        if (str[i] == ch) {
            count++;
        }
        i++;
    }

    printf("Frequency of '%c' = %d\n", ch, count);

    return 0;
}
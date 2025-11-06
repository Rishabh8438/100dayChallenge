/*
Question: Write a program to count vowels and consonants in a string.
*/

#include <stdio.h>

int main()
 {
    char str[1000];
    int vowels = 0, consonants = 0, i = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); 

    while (str[i] != '\0') {
        char ch = str[i];

        if (ch >= 'A' && ch <= 'Z') {
            ch = ch + ('a' - 'A');
        }

        if (ch >= 'a' && ch <= 'z') {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }

        i++;
    }

    printf("\nVowels = %d\n", vowels);
    printf("Consonants = %d\n", consonants);

    return 0;
}
/*
Question: Read a text file and count how many vowels and consonants are in the file. 
Ignore digits and special characters.
*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h> 

int main() {
    FILE *infile;
    int ch;
    int vowels = 0, consonants = 0;

    infile = fopen("input.txt", "r");
    if (infile == NULL) {
        perror("Error opening input.txt");
        return EXIT_FAILURE;
    }

    while ((ch = fgetc(infile)) != EOF) {
        if (isalpha(ch)) {  
            ch = tolower(ch);  
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }
    }

    fclose(infile);

    printf("Number of vowels: %d\n", vowels);
    printf("Number of consonants: %d\n", consonants);

    return EXIT_SUCCESS;
}
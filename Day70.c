/*
Question: Convert a string to sentence case.
Each sentence starts with a capital letter, rest are lowercase.
*/

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char str[1000];
    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    int capitalize = 1; 

    for (int i = 0; str[i] != '\0'; i++) {
        if (capitalize && isalpha(str[i])) {
            str[i] = toupper(str[i]);
            capitalize = 0;
        } else {
            str[i] = tolower(str[i]);
        }

        if (str[i] == '.' || str[i] == '!' || str[i] == '?') {
            capitalize = 1;
        }
    }

    printf("Sentence case: %s\n", str);

    return 0;
}
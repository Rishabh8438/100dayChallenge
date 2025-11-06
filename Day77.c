/*
Question: Read text from input.txt, convert all lowercase letters to uppercase,
and write the result to output.txt.
*/

#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *inputFile, *outputFile;
    char ch;

    inputFile = fopen("input.txt", "r");
    if (inputFile == NULL) {
        printf("Error: Could not open input.txt\n");
        return 1;
    }

    outputFile = fopen("output.txt", "w");
    if (outputFile == NULL) {
        printf("Error: Could not create output.txt\n");
        fclose(inputFile);
        return 1;
    }

    while ((ch = fgetc(inputFile)) != EOF) {
        if (islower(ch)) {
            ch = toupper(ch);
        }
        fputc(ch, outputFile);
    }

    fclose(inputFile);
    fclose(outputFile);

    printf("Text successfully converted to uppercase and saved to output.txt\n");

    return 0;
}
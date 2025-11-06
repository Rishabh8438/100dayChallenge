/*
Question: Read a text file and count total characters, words, and lines.
A word is defined as a sequence of non-space characters separated by spaces or newlines.
*/

#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *file;
    char ch;
    int characters = 0, words = 0, lines = 0;
    int inWord = 0;

    file = fopen("info.txt", "r");

    if (file == NULL) {
        printf("Error: Could not open file info.txt\n");
        return 1;
    }

    while ((ch = fgetc(file)) != EOF) {
        characters++;

        if (ch == '\n') {
            lines++;
        }

        if (!isspace(ch)) {
            if (!inWord) {
                words++;
                inWord = 1;
            }
        } else {
            inWord = 0;
        }
    }

    if (characters > 0 && ch != '\n') {
        lines++;
    }

    printf("Total characters: %d\n", characters);
    printf("Total words: %d\n", words);
    printf("Total lines: %d\n", lines);

    fclose(file);

    return 0;
}
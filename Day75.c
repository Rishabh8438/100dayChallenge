/*
Question: Open an existing file in append mode and allow the user to enter a new line of text.
Append the text at the end without overwriting existing content.
*/

#include <stdio.h>
#include <string.h>

int main() {
    FILE *file;
    char filename[100];
    char newLine[1000];

    printf("Enter the filename to append to: ");
    scanf("%s", filename);
    getchar(); 

    file = fopen(filename, "a");
    if (file == NULL) {
        printf("Error: Could not open file %s\n", filename);
        return 1;
    }

    printf("Enter a new line of text to append: ");
    fgets(newLine, sizeof(newLine), stdin);

    fprintf(file, "%s", newLine);

    fclose(file);

    printf("Text successfully appended to %s\n", filename);

    return 0;
}
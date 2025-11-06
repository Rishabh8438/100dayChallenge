/*
Question: Ask the user for a filename. Check if it exists by opening in read mode.
If it exists, read and display its content. Otherwise, print an error message.
*/

#include <stdio.h>

int main() {
    char filename[100];
    FILE *file;
    char line[1000];

    printf("Enter the filename to open: ");
    scanf("%s", filename);

    file = fopen(filename, "r");

    if (file == NULL) {
        printf("Error: File '%s' does not exist or cannot be opened.\n", filename);
        return 1;
    }

    printf("Contents of '%s':\n", filename);
    while (fgets(line, sizeof(line), file) != NULL) {
        printf("%s", line); 
    }

    fclose(file);

    return 0;
}
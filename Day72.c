/*
Question: Open an existing file (info.txt), read its contents using fgets(),
and print all lines to the console until EOF.
*/

#include <stdio.h>

int main() {
    FILE *file;
    char line[1000];

    file = fopen("info.txt", "r");

    if (file == NULL) {
        printf("Error: Could not open file info.txt\n");
        return 1;
    }

    printf("Contents of info.txt:\n");
    while (fgets(line, sizeof(line), file) != NULL) {
        printf("%s", line); 
    }

    fclose(file);

    return 0;
}
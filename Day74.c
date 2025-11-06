/*
Question: Copy content from source file to destination file using fgetc() and fputc().
*/

#include <stdio.h>

int main() {
    char sourceFile[100], destFile[100];
    FILE *src, *dest;
    int ch;

    printf("Enter source filename: ");
    scanf("%s", sourceFile);

    printf("Enter destination filename: ");
    scanf("%s", destFile);

    src = fopen(sourceFile, "r");
    if (src == NULL) {
        printf("Error: Cannot open source file %s\n", sourceFile);
        return 1;
    }

    dest = fopen(destFile, "w");
    if (dest == NULL) {
        printf("Error: Cannot create destination file %s\n", destFile);
        fclose(src);
        return 1;
    }

    while ((ch = fgetc(src)) != EOF) {
        fputc(ch, dest);
    }

    fclose(src);
    fclose(dest);

    printf("Content successfully copied from %s to %s\n", sourceFile, destFile);

    return 0;
}
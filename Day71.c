/*
Question: Create a file named info.txt in write mode.
Take user's name and age as input, write to file using fprintf(),
and confirm successful save.
*/

#include <stdio.h>

int main() {
    char name[100];
    int age;

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);

    if (name[strlen(name) - 1] == '\n') {
        name[strlen(name) - 1] = '\0';
    }

    printf("Enter your age: ");
    scanf("%d", &age);

    FILE *file = fopen("info.txt", "w");
    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    fprintf(file, "Name: %s\nAge: %d\n", name, age);

    fclose(file);

    printf("Data successfully saved to info.txt\n");

    return 0;
}
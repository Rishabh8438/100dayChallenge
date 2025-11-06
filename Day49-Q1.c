/*
Question: Write a program to print the initials of a name.
*/

#include <stdio.h>

int main() 
{
    char name[1000];
    int i = 0;

    printf("Enter a full name: ");
    fgets(name, sizeof(name), stdin); 

    printf("Initials: ");

    if ((name[0] >= 'A' && name[0] <= 'Z') || (name[0] >= 'a' && name[0] <= 'z')) {
        printf("%c", name[0]);
    }

    while (name[i] != '\0') {
        if (name[i] == ' ' && name[i + 1] != ' ' && name[i + 1] != '\0' && name[i + 1] != '\n') {
            printf("%c", name[i + 1]);
        }
        i++;
    }

    printf("\n");
    return 0;
}
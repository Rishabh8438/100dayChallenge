/*
Question: Write a program to print initials of a name with the surname displayed in full.
Example: "Rishabh Kumar Singh" → "R. K. Singh"
*/

#include <stdio.h>
#include <string.h>

int main() 
{
    char name[1000];
    int i = 0, start = 0;

    printf("Enter a full name: ");
    fgets(name, sizeof(name), stdin);

    name[strcspn(name, "\n")] = '\0';

    printf("Formatted name: ");

    while (name[i] != '\0') {
        
        if (i == 0 || (name[i - 1] == ' ' && name[i] != ' ')) {
            start = i;
        }

        if (name[i] == ' ' || name[i + 1] == '\0') {
            if (name[i] == ' ') {
                printf("%c. ", name[start]);
            } else {
                
                printf("%s\n", &name[start]);
                break;
            }
        }

        i++;
    }

    return 0;
}
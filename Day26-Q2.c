
/*
Question: Write a program to print the following pattern:
*
*
*
*

*
*
*
*
*

*
*
*

*
*/

#include <stdio.h>

int main() 
{
    int groups[] = {1, 4, 5, 3, 1};
    int totalGroups = sizeof(groups) / sizeof(groups[0]);

    for (int g = 0; g < totalGroups; g++) {
        for (int i = 0; i < groups[g]; i++) {
            printf("*\n");
        }
        if (g < totalGroups - 1) {
            printf("\n");
        }
    }

    return 0;
}
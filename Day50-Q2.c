
/*
Question: Write a program to print all substrings of a string.
*/

#include <stdio.h>
#include <string.h>

int main()
 {
    char str[1000];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    int len = strlen(str);

    printf("All substrings:\n");
    for (int i = 0; i < len; i++) {
        for (int j = i; j < len; j++) {
            for (int k = i; k <= j; k++) {
                printf("%c", str[k]);
            }
            printf("\n");
        }
    }

    return 0;
}
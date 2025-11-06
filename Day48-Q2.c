/*
Question: Write a program to reverse each word in a sentence without changing the word order.
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Function to reverse a portion of the string from index 'start' to 'end'
void reverse(char str[], int start, int end) {
    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

int main() 
{
    char str[1000];
    int i = 0, start = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    while (str[i] != '\0') {
        if (str[i] == ' ') {
            reverse(str, start, i - 1); 
            start = i + 1;              
        }
        i++;
    }

    reverse(str, start, i - 1);

    printf("Modified sentence: %s\n", str);

    return 0;
}
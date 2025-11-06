/*
Question: Given a string s, find the length of the longest substring without repeating characters.
*/

#include <stdio.h>
#include <string.h>

int isUnique(char str[], int start, int end) {
    int visited[256] = {0}; 

    for (int i = start; i <= end; i++) {
        if (visited[(unsigned char)str[i]]) {
            return 0; 
        }
        visited[(unsigned char)str[i]] = 1;
    }
    return 1; 
}

int main() {
    char s[1000];

    printf("Enter a string: ");
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0'; 

    int maxLen = 0;
    int len = strlen(s);

    for (int i = 0; i < len; i++) {
        for (int j = i; j < len; j++) {
            if (isUnique(s, i, j)) {
                int currLen = j - i + 1;
                if (currLen > maxLen) {
                    maxLen = currLen;
                }
            }
        }
    }

    printf("Length of longest substring without repeating characters: %d\n", maxLen);

    return 0;
}
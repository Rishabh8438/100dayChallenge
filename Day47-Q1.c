/*
Question: Write a program to check if two strings are anagrams.
*/

#include <stdio.h>

int main() 
{
    char str1[1000], str2[1000];
    int freq[26] = {0}; 

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    for (int i = 0; str1[i] != '\0'; i++) {
        char ch = str1[i];
        if (ch >= 'A' && ch <= 'Z') ch += 'a' - 'A'; 
        if (ch >= 'a' && ch <= 'z') freq[ch - 'a']++;
    }

    for (int i = 0; str2[i] != '\0'; i++) {
        char ch = str2[i];
        if (ch >= 'A' && ch <= 'Z') ch += 'a' - 'A'; 
        if (ch >= 'a' && ch <= 'z') freq[ch - 'a']--;
    }

    int isAnagram = 1;
    for (int i = 0; i < 26; i++) {
        if (freq[i] != 0) {
            isAnagram = 0;
            break;
        }
    }

    if (isAnagram) {
        printf("The strings are anagrams.\n");
    } else {
        printf("The strings are not anagrams.\n");
    }

    return 0;
}
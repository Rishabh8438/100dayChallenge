/*
Question: Write a program to find the digit that occurs the most times in an integer number.
*/

#include <stdio.h>

int main() {
    long long num;
    int freq[10] = {0}; 

    printf("Enter an integer number: ");
    scanf("%lld", &num);

    if (num < 0) {
        num = -num;
    }

    while (num > 0) {
        int digit = num % 10;
        freq[digit]++;
        num /= 10;
    }

    int maxFreq = 0, mostFrequentDigit = 0;
    for (int i = 0; i < 10; i++) {
        if (freq[i] > maxFreq) {
            maxFreq = freq[i];
            mostFrequentDigit = i;
        }
    }

    printf("The digit that occurs the most times is %d (appeared %d times).\n", mostFrequentDigit, maxFreq);

    return 0;
}
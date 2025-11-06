/*
Question: Given an integer array where only one element is repeated,
find and print the repeated element using one iteration.
Assume all elements are in the range 0 to n-1.
*/

#include <stdio.h>

int main() {
    int arr[1000], freq[1000] = {0}, n;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter %d elements (one repeated): ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);

        if (freq[arr[i]] == 1) {
            printf("Repeated element: %d\n", arr[i]);
            return 0;
        }
        freq[arr[i]] = 1;
    }

    printf("No repeated element found.\n");
    return 0;
}
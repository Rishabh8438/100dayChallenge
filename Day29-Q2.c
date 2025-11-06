/*
Question: Write a program to find the maximum and minimum element in an array.
*/

#include <stdio.h>

int main() {
    int n;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    if (n <= 0 || n > 100) {
        printf("Please enter a valid number between 1 and 100.\n");
        return 1;
    }

    int arr[100]; 

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    int max = arr[0];
    int min = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > max)
            max = arr[i];
        if (arr[i] < min)
            min = arr[i];
    }

    printf("Maximum element = %d\n", max);
    printf("Minimum element = %d\n", min);

    return 0;
}
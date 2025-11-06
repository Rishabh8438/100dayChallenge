/*
Question: Write a program to find the second largest element in an array.
*/

#include <stdio.h>

int main() 
{
    int n;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    if (n < 2 || n > 100) {
        printf("Please enter at least 2 elements (max 100).\n");
        return 1;
    }

    int arr[100];

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        printf("arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }

    int first, second;
    if (arr[0] > arr[1]) {
        first = arr[0];
        second = arr[1];
    } else {
        first = arr[1];
        second = arr[0];
    }

    for (int i = 2; i < n; i++) {
        if (arr[i] > first) {
            second = first;
            first = arr[i];
        } else if (arr[i] > second && arr[i] != first) {
            second = arr[i];
        }
    }

    if (first == second) {
        printf("All elements are equal. No second largest.\n");
    } else {
        printf("Second largest element = %d\n", second);
    }

    return 0;
}
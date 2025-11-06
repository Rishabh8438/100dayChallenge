/*
Question: Write a program to insert an element in an array at a given position.
*/

#include <stdio.h>

int main() 
{
    int n, pos, value;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    if (n <= 0 || n >= 100) {
        printf("Please enter a valid number between 1 and 99.\n");
        return 1;
    }

    int arr[100];

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        printf("arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }

    printf("Enter the position to insert (0 to %d): ", n);
    scanf("%d", &pos);
    printf("Enter the value to insert: ");
    scanf("%d", &value);

    if (pos < 0 || pos > n) {
        printf("Invalid position. Must be between 0 and %d.\n", n);
        return 1;
    }

    for (int i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    arr[pos] = value;
    n++; 

    printf("Array after insertion:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
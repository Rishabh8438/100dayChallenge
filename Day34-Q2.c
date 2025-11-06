/*
Question: Write a program to delete an element from an array.
*/

#include <stdio.h>

int main() 
{
    int n, pos;


    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    if (n <= 0 || n > 100) {
        printf("Please enter a valid number between 1 and 100.\n");
        return 1;
    }

    int arr[100];

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        printf("arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }

    printf("Enter the position to delete (0 to %d): ", n - 1);
    scanf("%d", &pos);

    if (pos < 0 || pos >= n) {
        printf("Invalid position. Must be between 0 and %d.\n", n - 1);
        return 1;
    }

    for (int i = pos; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    n--; 

    printf("Array after deletion:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
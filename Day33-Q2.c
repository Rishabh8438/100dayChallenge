/*
Question: Write a program to insert an element in a sorted array at the appropriate position.
*/

#include <stdio.h>

int main() 
{
    int n, key;

    printf("Enter the number of elements in the sorted array: ");
    scanf("%d", &n);

    if (n <= 0 || n >= 100) {
        printf("Please enter a valid number between 1 and 99.\n");
        return 1;
    }

    int arr[100];

    printf("Enter %d sorted elements (in ascending order):\n", n);
    for (int i = 0; i < n; i++) {
        printf("arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to insert: ");
    scanf("%d", &key);

    int pos = n;
    for (int i = 0; i < n; i++) {
        if (key < arr[i]) {
            pos = i;
            break;
        }
    }

    for (int i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    arr[pos] = key;
    n++; 

    printf("Array after insertion:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
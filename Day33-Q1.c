/*
Question: Write a program to search for an element in a sorted array using binary search.
*/

#include <stdio.h>

int main() {
    int n, key;

    printf("Enter the number of elements in the sorted array: ");
    scanf("%d", &n);

    if (n <= 0 || n > 100) {
        printf("Please enter a valid number between 1 and 100.\n");
        return 1;
    }

    int arr[100];

    printf("Enter %d sorted elements (in ascending order):\n", n);
    for (int i = 0; i < n; i++) {
        printf("arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &key);

    int low = 0, high = n - 1, mid;
    int found = 0;

    while (low <= high) {
        mid = (low + high) / 2;

        if (arr[mid] == key) {
            printf("Element %d found at position %d (index %d).\n", key, mid + 1, mid);
            found = 1;
            break;
        } else if (arr[mid] < key) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    if (!found) {
        printf("Element %d not found in the array.\n", key);
    }

    return 0;
}
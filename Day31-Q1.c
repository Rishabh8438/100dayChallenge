/*
Question: Write a program to search for an element in an array using linear search.
*/

#include <stdio.h>

int main() {
    int n, key, found = 0;

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

    printf("Enter the element to search: ");
    scanf("%d", &key);

    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            printf("Element %d found at position %d (index %d).\n", key, i + 1, i);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Element %d not found in the array.\n", key);
    }

    return 0;
}
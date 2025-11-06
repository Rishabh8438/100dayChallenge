/*
Question: Write a program to merge two arrays.
*/

#include <stdio.h>

int main() 
{
    int n1, n2;

    printf("Enter the number of elements in the first array: ");
    scanf("%d", &n1);

    if (n1 <= 0 || n1 > 100) {
        printf("Please enter a valid size (1–100).\n");
        return 1;
    }

    int arr1[100];
    printf("Enter %d elements for the first array:\n", n1);
    for (int i = 0; i < n1; i++) {
        printf("arr1[%d]: ", i);
        scanf("%d", &arr1[i]);
    }

    printf("Enter the number of elements in the second array: ");
    scanf("%d", &n2);

    if (n2 <= 0 || n2 > 100) {
        printf("Please enter a valid size (1–100).\n");
        return 1;
    }

    int arr2[100];
    printf("Enter %d elements for the second array:\n", n2);
    for (int i = 0; i < n2; i++) {
        printf("arr2[%d]: ", i);
        scanf("%d", &arr2[i]);
    }

    int arr3[200];
    for (int i = 0; i < n1; i++) {
        arr3[i] = arr1[i];
    }
    for (int i = 0; i < n2; i++) {
        arr3[n1 + i] = arr2[i];
    }

    printf("Merged array:\n");
    for (int i = 0; i < n1 + n2; i++) {
        printf("%d ", arr3[i]);
    }
    printf("\n");

    return 0;
}
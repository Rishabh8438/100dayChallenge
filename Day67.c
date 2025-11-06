/*
Question: Merge two sorted arrays into one sorted array.
*/

#include <stdio.h>

int main() {
    int arr1[1000], arr2[1000], merged[2000];
    int m, n;

    printf("Enter size of first sorted array: ");
    scanf("%d", &m);
    printf("Enter %d sorted elements: ", m);
    for (int i = 0; i < m; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter size of second sorted array: ");
    scanf("%d", &n);
    printf("Enter %d sorted elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr2[i]);
    }

    int i = 0, j = 0, k = 0;
    while (i < m && j < n) {
        if (arr1[i] <= arr2[j]) {
            merged[k++] = arr1[i++];
        } else {
            merged[k++] = arr2[j++];
        }
    }

    while (i < m) {
        merged[k++] = arr1[i++];
    }
    while (j < n) {
        merged[k++] = arr2[j++];
    }

    printf("Merged sorted array: ");
    for (int x = 0; x < m + n; x++) {
        printf("%d ", merged[x]);
    }
    printf("\n");

    return 0;
}
/*
Question: Given an integer array arr[] and an integer k,
find and print the kth smallest element in the array.
*/

#include <stdio.h>

void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIdx = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIdx]) {
                minIdx = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[minIdx];
        arr[minIdx] = temp;
    }
}

int main() {
    int arr[1000], n, k;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter value of k: ");
    scanf("%d", &k);

    if (k <= 0 || k > n) {
        printf("Invalid value of k.\n");
        return 1;
    }

    selectionSort(arr, n);

    printf("The %dth smallest element is: %d\n", k, arr[k - 1]);

    return 0;
}
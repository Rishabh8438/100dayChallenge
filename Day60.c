/*
Question: Given an integer array arr[] and an integer k,
print the maximum element in each subarray of size k.
*/

#include <stdio.h>

int main() {
    int arr[1000], n, k;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter window size k: ");
    scanf("%d", &k);

    if (k > n || k <= 0) {
        printf("Invalid window size.\n");
        return 1;
    }

    printf("Maximums in each window: ");
    for (int i = 0; i <= n - k; i++) {
        int max = arr[i];
        for (int j = i + 1; j < i + k; j++) {
            if (arr[j] > max) {
                max = arr[j];
            }
        }
        printf("%d ", max);
    }

    printf("\n");
    return 0;
}
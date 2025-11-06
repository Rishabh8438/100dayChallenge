/*
Question: Given an integer array arr[] and an integer k,
print the maximum sum of all subarrays of size k.
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

    printf("Enter subarray size k: ");
    scanf("%d", &k);

    if (k > n || k <= 0) {
        printf("Invalid subarray size.\n");
        return 1;
    }

    int maxSum = -2147483648; 
    for (int i = 0; i <= n - k; i++) {
        int currentSum = 0;
        for (int j = i; j < i + k; j++) {
            currentSum += arr[j];
        }
        if (currentSum > maxSum) {
            maxSum = currentSum;
        }
    }

    printf("Maximum sum of subarrays of size %d: %d\n", k, maxSum);

    return 0;
}
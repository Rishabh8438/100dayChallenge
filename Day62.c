/*
Question: Find the maximum sum of any contiguous subarray using Kadane's algorithm.
If all elements are negative, print the largest (least negative) element.
*/

#include <stdio.h>

int main() {
    int arr[1000], n;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int maxSum = arr[0];
    int currentSum = arr[0];

    for (int i = 1; i < n; i++) {
        currentSum = (currentSum + arr[i] > arr[i]) ? currentSum + arr[i] : arr[i];
        if (currentSum > maxSum) {
            maxSum = currentSum;
        }
    }

    printf("Maximum subarray sum: %d\n", maxSum);

    return 0;
}
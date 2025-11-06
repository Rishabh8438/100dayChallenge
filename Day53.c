/*
Question: Find the pivot index in an array where the sum of elements to the left
equals the sum of elements to the right. If no such index exists, print -1.
*/

#include <stdio.h>

int main() {
    int arr[1000], n;
    int totalSum = 0, leftSum = 0;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        totalSum += arr[i]; 
    }

    for (int i = 0; i < n; i++) {
        int rightSum = totalSum - leftSum - arr[i];
        if (leftSum == rightSum) {
            printf("Pivot index: %d\n", i);
            return 0;
        }
        leftSum += arr[i];
    }

    printf("-1\n");
    return 0;
}
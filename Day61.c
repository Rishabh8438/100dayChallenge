/*
Question: Given an integer array arr[] and an integer k,
print the first negative integer in each subarray of size k.
If no negative exists in a window, print 0.
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

    printf("First negative in each window: ");
    for (int i = 0; i <= n - k; i++) {
        int found = 0;
        for (int j = i; j < i + k; j++) {
            if (arr[j] < 0) {
                printf("%d ", arr[j]);
                found = 1;
                break;
            }
        }
        if (!found) {
            printf("0 ");
        }
    }

    printf("\n");
    return 0;
}
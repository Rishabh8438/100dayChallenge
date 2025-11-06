/*
Question: Write a program to rotate an array to the right by k positions.
*/

#include <stdio.h>

int main() {
    int n, k;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    // Validate size
    if (n <= 0 || n > 100) {
        printf("Please enter a valid size between 1 and 100.\n");
        return 1;
    }

    int arr[100];

    // Input: Read array elements
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        printf("arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }

    printf("Enter the number of positions to rotate right (k): ");
    scanf("%d", &k);


    k = k % n;

    void reverse(int a[], int start, int end) {
        while (start < end) {
            int temp = a[start];
            a[start] = a[end];
            a[end] = temp;
            start++;
            end--;
        }
    }


    reverse(arr, 0, n - 1);
    reverse(arr, 0, k - 1);
    reverse(arr, k, n - 1);

    printf("Array after rotating right by %d positions:\n", k);
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
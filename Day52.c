/*
Question: Given a sorted array arr[] and an integer x,
find the index of the smallest element >= x (ceil of x).
If not found, print -1.
*/

#include <stdio.h>

int findCeilIndex(int arr[], int size, int x) {
    int low = 0, high = size - 1;
    int result = -1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] >= x) {
            result = mid;       
            high = mid - 1;     
        } else {
            low = mid + 1;
        }
    }

    return result;
}

int main() {
    int arr[1000], size, x;

    printf("Enter size of sorted array: ");
    scanf("%d", &size);

    printf("Enter %d sorted elements: ", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the value of x: ");
    scanf("%d", &x);

    int index = findCeilIndex(arr, size, x);
    if (index != -1) {
        printf("Ceil of %d is %d at index %d\n", x, arr[index], index);
    } else {
        printf("-1\n");
    }

    return 0;
}
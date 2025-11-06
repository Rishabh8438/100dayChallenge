/*
Question: Given a sorted array (possibly with duplicates) and a target value,
print the first and last occurrence of the target and their indices.
If the target is not found, print -1, -1.
*/

#include <stdio.h>

int findFirst(int nums[], int size, int target) {
    int low = 0, high = size - 1, result = -1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (nums[mid] == target) {
            result = mid;
            high = mid - 1; 
        } else if (nums[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return result;
}

int findLast(int nums[], int size, int target) {
    int low = 0, high = size - 1, result = -1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (nums[mid] == target) {
            result = mid;
            low = mid + 1; 
        } else if (nums[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return result;
}

int main() {
    int nums[1000], size, target;

    printf("Enter size of sorted array: ");
    scanf("%d", &size);

    printf("Enter %d sorted elements: ", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &nums[i]);
    }

    printf("Enter target value: ");
    scanf("%d", &target);

    int first = findFirst(nums, size, target);
    int last = findLast(nums, size, target);

    // Output
    if (first == -1 || last == -1) {
        printf("Target not found: -1, -1\n");
    } else {
        printf("First occurrence at index %d\n", first);
        printf("Last occurrence at index %d\n", last);
    }

    return 0;
}
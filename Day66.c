/*
Question: Given an array of positive integers nums[] and a target value,
find two distinct indices i and j such that nums[i] + nums[j] == target.
Print the indices separated by a space. If no solution exists, print "-1 -1".
*/

#include <stdio.h>

int main() {
    int nums[1000], n, target;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter %d positive integers: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    
    printf("Enter target value: ");
    scanf("%d", &target);

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (nums[i] + nums[j] == target) {
                printf("%d %d\n", i, j);
                return 0;
            }
        }
    }

    printf("-1 -1\n");
    return 0;
}
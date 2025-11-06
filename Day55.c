/*
Question: Find the majority element in an array.
The majority element appears strictly more than floor(n / 2) times.
If no such element exists, print -1.
*/

#include <stdio.h>

int main() {
    int nums[1000], n;
    
    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    int count = 0, candidate = -1;
    for (int i = 0; i < n; i++) {
        if (count == 0) {
            candidate = nums[i];
            count = 1;
        } else if (nums[i] == candidate) {
            count++;
        } else {
            count--;
        }
    }

    count = 0;
    for (int i = 0; i < n; i++) {
        if (nums[i] == candidate) {
            count++;
        }
    }

    if (count > n / 2) {
        printf("Majority element: %d\n", candidate);
    } else {
        printf("-1\n");
    }

    return 0;
}
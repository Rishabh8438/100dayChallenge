/*
Question: Given an integer array nums[], print an array answer[] such that
answer[i] = product of all elements in nums except nums[i].
Assume all prefix/suffix products fit in 32-bit integer.
*/

#include <stdio.h>

int main() {
    int nums[1000], answer[1000], n;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    int prefix[1000];
    prefix[0] = 1;
    for (int i = 1; i < n; i++) {
        prefix[i] = prefix[i - 1] * nums[i - 1];
    }

    int suffix = 1;
    for (int i = n - 1; i >= 0; i--) {
        answer[i] = prefix[i] * suffix;
        suffix *= nums[i];
    }

    printf("Answer array: ");
    for (int i = 0; i < n; i++) {
        printf("%d", answer[i]);
        if (i != n - 1) {
            printf(", ");
        }
    }
    printf("\n");

    return 0;
}
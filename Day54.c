/*
Question: Find the pivot integer x such that
sum from 1 to x == sum from x to n.
If no such x exists, print -1.
*/

#include <stdio.h>

int main() {
    int n;
    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    int totalSum = n * (n + 1) / 2;

    int leftSum = 0;

    for (int x = 1; x <= n; x++) {
        leftSum += x;
        int rightSum = totalSum - leftSum + x; 
        if (leftSum == rightSum) {
            printf("Pivot integer: %d\n", x);
            return 0;
        }
    }

    printf("-1\n");
    return 0;
}
/*
Question: Write a program to find the sum of array elements.
*/

#include <stdio.h>

int main() {
    int n, sum = 0;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    if (n <= 0 || n > 100) {
        printf("Please enter a valid number between 1 and 100.\n");
        return 1;
    }

    int arr[100]; 

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
        sum += arr[i]; 
    }

    printf("Sum of array elements = %d\n", sum);

    return 0;
}
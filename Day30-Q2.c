/*
Question: Write a program to count positive, negative, and zero elements in an array.
*/

#include <stdio.h>

int main() {
    int n;
    int positive = 0, negative = 0, zero = 0;

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

        if (arr[i] > 0)
            positive++;
        else if (arr[i] < 0)
            negative++;
        else
            zero++;
    }

    printf("\nPositive elements = %d\n", positive);
    printf("Negative elements = %d\n", negative);
    printf("Zero elements     = %d\n", zero);

    return 0;
}
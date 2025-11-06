/*
Question: Write a program to count even and odd numbers in an array.
*/

#include <stdio.h>

int main() 
{
    int n, evenCount = 0, oddCount = 0;

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

        if (arr[i] % 2 == 0)
            evenCount++;
        else
            oddCount++;
    }

    printf("Number of even elements = %d\n", evenCount);
    printf("Number of odd elements  = %d\n", oddCount);

    return 0;
}
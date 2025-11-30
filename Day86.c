/*
Question: Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.
*/

#include <stdio.h>

enum Menu {
    ADD = 1,
    SUBTRACT,
    MULTIPLY
};

int main() {
    int choice;
    int a, b, result;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    printf("\nMenu:\n");
    printf("1. ADD\n");
    printf("2. SUBTRACT\n");
    printf("3. MULTIPLY\n");
    printf("Enter your choice (1-3): ");
    scanf("%d", &choice);

    switch (choice) {
        case ADD:
            result = a + b;
            printf("Result of addition: %d\n", result);
            break;
        case SUBTRACT:
            result = a - b;
            printf("Result of subtraction: %d\n", result);
            break;
        case MULTIPLY:
            result = a * b;
            printf("Result of multiplication: %d\n", result);
            break;
        default:
            printf("Invalid choice!\n");
    }

    return 0;
}
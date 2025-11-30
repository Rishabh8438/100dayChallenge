/*
Question: Store multiple student records (name, roll number, marks) into a file using fprintf(). 
Then read them using fscanf() and display each record.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *outfile, *infile;
    int n, roll;
    char name[50];
    float marks;

    printf("Enter number of students: ");
    scanf("%d", &n);

    outfile = fopen("students.txt", "w");
    if (outfile == NULL) {
        perror("Error opening students.txt for writing");
        return EXIT_FAILURE;
    }

    for (int i = 0; i < n; i++) {
        printf("\nEnter details for student %d\n", i + 1);
        printf("Name: ");
        scanf("%s", name);
        printf("Roll Number: ");
        scanf("%d", &roll);
        printf("Marks: ");
        scanf("%f", &marks);

        fprintf(outfile, "%s %d %.2f\n", name, roll, marks);
    }

    fclose(outfile);

    infile = fopen("students.txt", "r");
    if (infile == NULL) {
        perror("Error opening students.txt for reading");
        return EXIT_FAILURE;
    }

    printf("\n--- Student Records ---\n");
    while (fscanf(infile, "%s %d %f", name, &roll, &marks) == 3) {
        printf("Name: %s | Roll: %d | Marks: %.2f\n", name, roll, marks);
    }

    fclose(infile);
    return EXIT_SUCCESS;
}
/*
Question:
Store employee data in a binary file using fwrite() and read using fread().
*/

#include <stdio.h>
#include <stdlib.h>

struct Date {
    int day;
    int month;
    int year;
};

struct Employee {
    int id;
    char name[50];
    float salary;
    struct Date joiningDate;
};

int main() {
    struct Employee emp, empRead;
    FILE *fp;

    printf("Enter Employee ID: ");
    scanf("%d", &emp.id);

    printf("Enter Employee Name: ");
    scanf("%s", emp.name);

    printf("Enter Employee Salary: ");
    scanf("%f", &emp.salary);

    printf("Enter Joining Date (dd mm yyyy): ");
    scanf("%d %d %d", &emp.joiningDate.day, &emp.joiningDate.month, &emp.joiningDate.year);

    fp = fopen("employee.dat", "wb");
    if (fp == NULL) {
        printf("Error opening file for writing!\n");
        exit(1);
    }

    fwrite(&emp, sizeof(struct Employee), 1, fp);
    fclose(fp);

    fp = fopen("employee.dat", "rb");
    if (fp == NULL) {
        printf("Error opening file for reading!\n");
        exit(1);
    }

    fread(&empRead, sizeof(struct Employee), 1, fp);
    fclose(fp);

    printf("\n--- Employee Details from File ---\n");
    printf("ID: %d\n", empRead.id);
    printf("Name: %s\n", empRead.name);
    printf("Salary: %.2f\n", empRead.salary);
    printf("Joining Date: %02d-%02d-%04d\n",
           empRead.joiningDate.day,
           empRead.joiningDate.month,
           empRead.joiningDate.year);

    return 0;
}
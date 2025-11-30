/*
Question:
Use pointer to struct to modify and display data using -> operator.
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
    struct Employee *emp;

    emp = (struct Employee *)malloc(sizeof(struct Employee));
    if (emp == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Enter Employee ID: ");
    scanf("%d", &emp->id);

    printf("Enter Employee Name: ");
    scanf("%s", emp->name);

    printf("Enter Employee Salary: ");
    scanf("%f", &emp->salary);

    printf("Enter Joining Date (dd mm yyyy): ");
    scanf("%d %d %d", &emp->joiningDate.day, &emp->joiningDate.month, &emp->joiningDate.year);

    printf("\n--- Employee Details ---\n");
    printf("ID: %d\n", emp->id);
    printf("Name: %s\n", emp->name);
    printf("Salary: %.2f\n", emp->salary);
    printf("Joining Date: %02d-%02d-%04d\n",
           emp->joiningDate.day,
           emp->joiningDate.month,
           emp->joiningDate.year);

    free(emp);

    return 0;
}
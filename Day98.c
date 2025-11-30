/*
Question:
Take two Employee structs (with nested Date) as input and check if they are identical.
*/

#include <stdio.h>
#include <string.h>

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

int areEmployeesIdentical(struct Employee e1, struct Employee e2) {
    if (e1.id != e2.id) return 0;
    if (strcmp(e1.name, e2.name) != 0) return 0;
    if (e1.salary != e2.salary) return 0;
    if (e1.joiningDate.day != e2.joiningDate.day) return 0;
    if (e1.joiningDate.month != e2.joiningDate.month) return 0;
    if (e1.joiningDate.year != e2.joiningDate.year) return 0;

    return 1; 
}

int main() {
    struct Employee emp1, emp2;

    printf("Enter details for Employee 1:\n");
    printf("ID: ");
    scanf("%d", &emp1.id);
    printf("Name: ");
    scanf("%s", emp1.name);
    printf("Salary: ");
    scanf("%f", &emp1.salary);
    printf("Joining Date (dd mm yyyy): ");
    scanf("%d %d %d", &emp1.joiningDate.day, &emp1.joiningDate.month, &emp1.joiningDate.year);

    printf("\nEnter details for Employee 2:\n");
    printf("ID: ");
    scanf("%d", &emp2.id);
    printf("Name: ");
    scanf("%s", emp2.name);
    printf("Salary: ");
    scanf("%f", &emp2.salary);
    printf("Joining Date (dd mm yyyy): ");
    scanf("%d %d %d", &emp2.joiningDate.day, &emp2.joiningDate.month, &emp2.joiningDate.year);

    if (areEmployeesIdentical(emp1, emp2)) {
        printf("\nEmployees are IDENTICAL.\n");
    } else {
        printf("\nEmployees are DIFFERENT.\n");
    }

    return 0;
}
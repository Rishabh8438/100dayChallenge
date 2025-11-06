/*
Question: Write a program to change the date format from dd/04/yyyy to dd-Apr-yyyy.
*/

#include <stdio.h>
#include <string.h>

int main() 
{
    char date[20];
    char day[3], year[5];

    printf("Enter date in dd/04/yyyy format: ");
    fgets(date, sizeof(date), stdin);

    date[strcspn(date, "\n")] = '\0';

    strncpy(day, date, 2);
    day[2] = '\0';

    strncpy(year, date + 6, 4);
    year[4] = '\0';

    printf("Formatted date: %s-Apr-%s\n", day, year);

    return 0;
}
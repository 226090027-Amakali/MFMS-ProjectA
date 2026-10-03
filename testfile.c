#include <stdio.h>
#include "employees.h"

int main()
{
    int id;
    int position;

    printf("EMPLOYEE MANAGEMENT TEST\n");

    addEmployee();

    printf("\nDisplaying employees:\n");
    displayEmployees();

    printf("\nEnter Employee ID to search: ");
    scanf("%d", &id);

    position = searchEmployee(id, employeeID, employeeCount);

    if (position != -1)
    {
        printf("Employee found.\n");
    }
    else
    {
        printf("Employee not found.\n");
    }

    return 0;
}
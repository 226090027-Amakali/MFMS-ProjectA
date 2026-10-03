#include <stdio.h>
#include "employees.h"

#define MAX_EMPLOYEES 100

int employeeID[MAX_EMPLOYEES];
char employeeName[MAX_EMPLOYEES][50];
char department[MAX_EMPLOYEES][50];

float basicSalary[MAX_EMPLOYEES];
float housingAllowance[MAX_EMPLOYEES];
float transportAllowance[MAX_EMPLOYEES];

int employeeCount = 0;

void addEmployee()
{
    printf("\nEnter Employee ID: ");
    scanf("%d", &employeeID[employeeCount]);

    printf("Enter Employee Name: ");
    scanf(" %[^\n]", employeeName[employeeCount]);

    printf("Enter Department: ");
    scanf(" %[^\n]", department[employeeCount]);

    printf("Enter Basic Salary: ");
    scanf("%f", &basicSalary[employeeCount]);

    printf("Enter Housing Allowance: ");
    scanf("%f", &housingAllowance[employeeCount]);

    printf("Enter Transport Allowance: ");
    scanf("%f", &transportAllowance[employeeCount]);

    employeeCount++;

    printf("\nEmployee added successfully.\n");
}


float calculateSalary(float basic, float housing, float transport)
{
    return basic + housing + transport;
}

void displayEmployees()
{
    int i;

    if(employeeCount == 0)
    {
        printf("No employees have been added.\n");
    }
    else
{
for(i=0;i < employeeCount;i++)

{
    printf("Employee ID: %d\n", employeeID[i]);
    printf("Employee Name: %s\n", employeeName[i]);
    printf("Department: %s\n", department[i]);
    printf("Basic Salary: %.2f\n", basicSalary[i]);
    printf("Housing Allowance: %.2f\n", housingAllowance[i]);
    printf("Transport Allowance: %.2f\n", transportAllowance[i]);

    printf("Total Salary: %.2f\n", calculateSalary(basicSalary[i], housingAllowance[i], transportAllowance[i]));


     }
   }
} 

int searchEmployee(int id, int ids[], int size)
{
    int i = 0;

    while(i < size)
    {
        if (ids[i] == id)
        {
        return i;
        }
        i++;
    }

    return -1;
}
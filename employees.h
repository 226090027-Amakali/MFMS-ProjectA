#ifndef EMPLOYEES_H
#define EMPLOYEES_H

extern int employeeID[];
extern int employeeCount;


void addEmployee();
void displayEmployees();
int searchEmployee(int id, int ids[], int size);
float calculateSalary(float basic, float housing, float transport);

#endif
//Employee Data Entry and Display: Write a C program to allow entry and display of an employee's details such as name, ID, department, and salary, using functions to handle the data.
#include <stdio.h>
struct Employee {
    char name[50];
    int id;
    char department[50];
    float salary;
};
void inputEmployeeData(struct Employee* emp) {
    printf("Enter Employee Name: ");
    fgets(emp->name, sizeof(emp->name), stdin);
    printf("Enter Employee ID: ");
    scanf("%d", &emp->id);
    getchar(); // Consume newline character left by scanf
    printf("Enter Department: ");
    fgets(emp->department, sizeof(emp->department), stdin);
    printf("Enter Salary: ");
    scanf("%f", &emp->salary);
}
void displayEmployeeData(const struct Employee* emp) {
    printf("\nEmployee Details:\n");
    printf("Name: %s", emp->name);
    printf("ID: %d\n", emp->id);
    printf("Department: %s", emp->department);
    printf("Salary: %.2f\n", emp->salary);
}
int main() {
    struct Employee emp;
    inputEmployeeData(&emp);
    displayEmployeeData(&emp);
    return 0;
}

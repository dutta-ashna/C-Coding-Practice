//Calculate Monthly Salary of an Employee: Develop a C program to calculate an employee's monthly salary by taking the basic salary as input and calculating HRA (If metro city: 15%, non-metro-10%) and DA (5%) within a function.
#include <stdio.h>
float calculateMonthlySalary(float basicSalary, int isMetro) {
    float hra, da, totalSalary;
    if (isMetro) {
        hra = 0.15 * basicSalary; // HRA for metro city
    } else {
        hra = 0.10 * basicSalary; // HRA for non-metro city
    }
    da = 0.05 * basicSalary; // DA
    totalSalary = basicSalary + hra + da;
    return totalSalary;
}
int main() {
    float basicSalary, monthlySalary;
    int isMetro;
    printf("Enter Basic Salary: ");
    scanf("%f", &basicSalary);
    printf("Is the employee in a metro city? (1 for Yes, 0 for No): ");
    scanf("%d", &isMetro);
    monthlySalary = calculateMonthlySalary(basicSalary, isMetro);
    printf("Monthly Salary: %.2f\n", monthlySalary);
    return 0;
}
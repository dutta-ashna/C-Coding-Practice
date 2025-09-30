//Display Student Information: Create a C program that uses a function to display a student's details, including name, roll number, and marks.
#include <stdio.h>
void displayStudentInfo(char name[], int rollNumber, float marks) {
    printf("Student Name: %s\n", name);
    printf("Roll Number: %d\n", rollNumber);
    printf("Marks: %.2f\n", marks);
}
int main() {
    char name[50];
    int rollNumber;
    float marks;

    // Input student details
    printf("Enter Student Name: ");
    fgets(name, sizeof(name), stdin);
    printf("Enter Roll Number: ");
    scanf("%d", &rollNumber);
    printf("Enter Marks: ");
    scanf("%f", &marks);

    // Display student information
    displayStudentInfo(name, rollNumber, marks);

    return 0;
}
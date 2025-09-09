//Write a C program to print a hollow rectangle pattern of asterisks based on user input for the number of rows and columns.
#include <stdio.h>
int main() {
    int rows, cols, i, j;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    for (i = 1; i <= rows; i++) {
        for (j = 1; j <= cols; j++) {
            // Print '*' for the border positions
            if (i == 1 || i == rows || j == 1 || j == cols) {
                printf("*");
            } else {
                printf(" "); // Print space for hollow part
            }
        }
        printf("\n"); // Move to the next line after each row
    }

    return 0;
}
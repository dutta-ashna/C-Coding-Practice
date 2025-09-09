//Write a C program to print a pyramid pattern of asterisks based on user input for the number of rows.
#include <stdio.h>
int main() {
    int n, i, j;

    printf("Enter the number of rows for the pyramid pattern: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        // Print spaces
        for (j = i; j < n; j++) {
            printf(" ");
        }
        // Print asterisks
        for (j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
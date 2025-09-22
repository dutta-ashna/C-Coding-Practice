//Write a C program to print the pattern of asterisks (*) in the form of the letter A (First letter of my name).
#include <stdio.h>

int main() {
    int i, j;
    int n = 7; // height of the letter A

    for (i = 0; i < n; i++) {
        for (j = 0; j <= n; j++) {
            
            // Left and right legs of A (skip at top row)
            if ((j == 0 || j == n) && i != 0)
                printf("*");

            // Top bar of A
            else if (i == 0 && j > 0 && j < n)
                printf("*");

            // Middle bar of A
            else if (i == n / 2)
                printf("*");

            // Empty spaces
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}
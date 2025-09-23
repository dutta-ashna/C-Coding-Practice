//Write a C program to generate the Fibonacci series up to n terms, where n is entered by the user.
#include <stdio.h>
int main() {
    int n, first = 0, second = 1, next, i;

    printf("Enter the number of terms for Fibonacci series: ");
    scanf("%d", &n);

    printf("Fibonacci Series:\n");
    for (i = 0; i < n; i++) {
        if (i <= 1)
            next = i; // First two terms are 0 and 1
        else {
            next = first + second; // Next term is the sum of the previous two
            first = second; // Update first to the previous second
            second = next; // Update second to the new term
        }
        printf("%d ", next);
    }
    printf("\n");

    return 0;
}
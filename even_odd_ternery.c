//Check if number is even or odd using ternary operator.
#include <stdio.h>
int main() {
    int number;
    printf("Enter an integer: ");
    scanf("%d", &number);

    // Using ternary operator to check even or odd
    (number % 2 == 0) ? printf("%d is even.\n", number) : printf("%d is odd.\n", number);

    return 0;
}
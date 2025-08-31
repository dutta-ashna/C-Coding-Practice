//Calculate the remainder and the quotient of two given numbers.
#include <stdio.h>
int main() {
    int dividend, divisor, quotient, remainder;
    printf("Enter the dividend: ");
    scanf("%d", &dividend);
    printf("Enter the divisor: ");
    scanf("%d", &divisor);
    
    if (divisor == 0) {
        printf("Error: Division by zero is not allowed.\n");
        return 1;
    }
    
    quotient = dividend / divisor;
    remainder = dividend % divisor;
    
    printf("Quotient: %d\n", quotient);
    printf("Remainder: %d\n", remainder);
    
    return 0;
}
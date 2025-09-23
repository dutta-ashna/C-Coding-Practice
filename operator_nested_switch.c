//Relational, logical, bitwise, assignment, increment decrement operators implementation (using nested switch case)
#include <stdio.h>

int main() {
    int choice, subChoice;
    int a, b;

    printf("---- Operator Implementation using Nested Switch ----\n");
    printf("1. Relational Operators\n");
    printf("2. Logical Operators\n");
    printf("3. Bitwise Operators\n");
    printf("4. Assignment Operators\n");
    printf("5. Increment/Decrement Operators\n");

    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1: // Relational
            printf("\nEnter two numbers: ");
            scanf("%d %d", &a, &b);
            printf("1. Equal to (==)\n2. Not equal (!=)\n3. Greater than (>)\n4. Less than (<)\n5. Greater or Equal (>=)\n6. Less or Equal (<=)\n");
            printf("Enter sub choice: ");
            scanf("%d", &subChoice);

            switch (subChoice) {
                case 1: printf("a == b : %d\n", a == b); break;
                case 2: printf("a != b : %d\n", a != b); break;
                case 3: printf("a > b  : %d\n", a > b); break;
                case 4: printf("a < b  : %d\n", a < b); break;
                case 5: printf("a >= b : %d\n", a >= b); break;
                case 6: printf("a <= b : %d\n", a <= b); break;
                default: printf("Invalid sub choice\n");
            }
            break;

        case 2: // Logical
            printf("\nEnter two numbers (0 or 1): ");
            scanf("%d %d", &a, &b);
            printf("1. AND (&&)\n2. OR (||)\n3. NOT (!a)\n");
            printf("Enter sub choice: ");
            scanf("%d", &subChoice);

            switch (subChoice) {
                case 1: printf("a && b : %d\n", a && b); break;
                case 2: printf("a || b : %d\n", a || b); break;
                case 3: printf("!a : %d , !b : %d\n", !a, !b); break;
                default: printf("Invalid sub choice\n");
            }
            break;

        case 3: // Bitwise
            printf("\nEnter two numbers: ");
            scanf("%d %d", &a, &b);
            printf("1. AND (&)\n2. OR (|)\n3. XOR (^)\n4. Left Shift (a<<1)\n5. Right Shift (a>>1)\n");
            printf("Enter sub choice: ");
            scanf("%d", &subChoice);

            switch (subChoice) {
                case 1: printf("a & b : %d\n", a & b); break;
                case 2: printf("a | b : %d\n", a | b); break;
                case 3: printf("a ^ b : %d\n", a ^ b); break;
                case 4: printf("a << 1 : %d\n", a << 1); break;
                case 5: printf("a >> 1 : %d\n", a >> 1); break;
                default: printf("Invalid sub choice\n");
            }
            break;

        case 4: // Assignment
            printf("\nEnter two numbers: ");
            scanf("%d %d", &a, &b);
            printf("1. a = b\n2. a += b\n3. a -= b\n4. a *= b\n5. a /= b\n6. a %%= b\n");
            printf("Enter sub choice: ");
            scanf("%d", &subChoice);

            switch (subChoice) {
                case 1: a = b; printf("a = %d\n", a); break;
                case 2: a += b; printf("a = %d\n", a); break;
                case 3: a -= b; printf("a = %d\n", a); break;
                case 4: a *= b; printf("a = %d\n", a); break;
                case 5: if (b != 0) { a /= b; printf("a = %d\n", a); } 
                        else printf("Division by zero not allowed\n"); break;
                case 6: if (b != 0) { a %= b; printf("a = %d\n", a); } 
                        else printf("Modulo by zero not allowed\n"); break;
                default: printf("Invalid sub choice\n");
            }
            break;

        case 5: // Increment / Decrement
            printf("\nEnter a number: ");
            scanf("%d", &a);
            printf("1. Pre-increment (++a)\n2. Post-increment (a++)\n3. Pre-decrement (--a)\n4. Post-decrement (a--)\n");
            printf("Enter sub choice: ");
            scanf("%d", &subChoice);

            switch (subChoice) {
                case 1: printf("++a = %d\n", ++a); break;
                case 2: printf("a++ = %d (after increment: %d)\n", a, a+1); break;
                case 3: printf("--a = %d\n", --a); break;
                case 4: printf("a-- = %d (after decrement: %d)\n", a, a-1); break;
                default: printf("Invalid sub choice\n");
            }
            break;

        default:
            printf("Invalid main choice\n");
    }

    return 0;
}

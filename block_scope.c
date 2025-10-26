#include <stdio.h>

int main() {
    int x = 10;  // variable in main block
    printf("Value of x outside inner block = %d\n", x);

    {
        int y = 20;  // variable inside inner block
        printf("Value of x inside inner block = %d\n", x);
        printf("Value of y inside inner block = %d\n", y);
    }

    printf("Back to main block, x = %d\n", x);
    return 0;
}


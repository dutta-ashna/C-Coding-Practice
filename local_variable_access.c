#include <stdio.h>

void show();

int main() {
    int num = 10;  // local variable
    printf("Value of local variable inside main() = %d\n", num);

    show();

    return 0;
}

void show() {
    int localVar = 20; // local to show()
    printf("Value of local variable inside show() = %d\n", localVar);
}


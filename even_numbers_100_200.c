//Generate even numbers between 100 and 200.
#include <stdio.h>
int main() {
    int num;
    printf("Even numbers between 100 and 200 are:\n");
    for (num = 100; num <= 200; num++) {
        if (num % 2 == 0) {
            printf("%d\n", num);
        }
    }
    return 0;
}
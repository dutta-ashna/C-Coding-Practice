//Determine and output whether the number N is Even or Odd.
#include <stdio.h>
int main() {
    int N;
    printf("Enter an integer: ");
    scanf("%d", &N);
    if (N % 2 == 0) {
        printf("%d is Even.\n", N);
    } else {
        printf("%d is Odd.\n", N);
    }
    return 0;
}
#include <stdio.h>

int main() {
    int n, i, num, count = 0;

    printf("Enter number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the number to find its frequency: ");
    scanf("%d", &num);

    for(i = 0; i < n; i++) {
        if(arr[i] == num)
            count++;
    }

    printf("The number %d appears %d time(s) in the array.\n", num, count);

    return 0;
}

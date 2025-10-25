#include <stdio.h>

int main() {
    int n, i;
    int evenCount = 0, oddCount = 0, positiveCount = 0, negativeCount = 0;

    printf("Enter number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);

        if(arr[i] >= 0)
            positiveCount++;
        else
            negativeCount++;

        if(arr[i] % 2 == 0)
            evenCount++;
        else
            oddCount++;
    }

    printf("\nPositive = %d\nNegative = %d\nEven = %d\nOdd = %d\n",
           positiveCount, negativeCount, evenCount, oddCount);

    return 0;
}

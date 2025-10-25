#include <stdio.h>

int main() {
    int m, n, p, q, i, j, k;
    int A[10][10], B[10][10], C[10][10];

    printf("Enter rows and columns for matrix A (m n): ");
    scanf("%d %d", &m, &n);

    printf("Enter rows and columns for matrix B (p q): ");
    scanf("%d %d", &p, &q);

    // Check compatibility
    if (n != p) {
        printf("Matrix multiplication not possible.\n");
        printf("Number of columns in A must equal number of rows in B.\n");
        return 0;
    }

    // Input matrix A
    printf("\nEnter elements of matrix A (%d×%d):\n", m, n);
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // Input matrix B
    printf("\nEnter elements of matrix B (%d×%d):\n", p, q);
    for (i = 0; i < p; i++) {
        for (j = 0; j < q; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    // Initialize result matrix C with 0
    for (i = 0; i < m; i++) {
        for (j = 0; j < q; j++) {
            C[i][j] = 0;
            for (k = 0; k < n; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Display matrix A
    printf("\nMatrix A:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("%4d", A[i][j]);
        }
        printf("\n");
    }

    // Display matrix B
    printf("\nMatrix B:\n");
    for (i = 0; i < p; i++) {
        for (j = 0; j < q; j++) {
            printf("%4d", B[i][j]);
        }
        printf("\n");
    }

    // Display result matrix C
    printf("\nResultant Matrix (A × B):\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < q; j++) {
            printf("%4d", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}

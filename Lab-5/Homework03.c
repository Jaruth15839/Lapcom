#include <stdio.h>

int main()
{
    int A[3][3] = {
        {1, 0, -1},
        {-1, 2, 3},
        {2, 4, 5}
    };
    int R[3][3];
    int i, j, k;
    int sum;

    for (i = 0; i < 3; i = i + 1) {
        for (j = 0; j < 3; j = j + 1) {
            R[i][j] = 0;
        }
    }

    printf("Original A:\n");
    for (i = 0; i < 3; i = i + 1) {
        for (j = 0; j < 3; j = j + 1) {
            printf("%4d", A[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < 3; i = i + 1) {
        for (j = 0; j < 3; j = j + 1) {
            sum = 0;
            for (k = 0; k < 3; k = k + 1) {
                sum = sum + A[i][k] * A[k][j];
            }
            R[i][j] = sum;
        }
    }

    for (i = 0; i < 3; i = i + 1) {
        for (j = 0; j < 3; j = j + 1) {
            A[i][j] = R[i][j];
        }
    }

    printf("\nA x A (stored back in A):\n");
    for (i = 0; i < 3; i = i + 1) {
        for (j = 0; j < 3; j = j + 1) {
            printf("%4d", A[i][j]);
        }
        printf("\n");
    }

    return 0;
}

#include <stdio.h>

int main()
{
    int A[3][3] = {
        {1, 0, -1},
        {-1, 2, 3},
        {2, 4, 5}
    };
    int i, j, tmp;

    printf("Original A:\n");
    for (i = 0; i < 3; i = i + 1) {
        for (j = 0; j < 3; j = j + 1) {
            printf("%4d", A[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < 3; i = i + 1) {
        for (j = i + 1; j < 3; j = j + 1) {
            tmp = A[i][j];
            A[i][j] = A[j][i];
            A[j][i] = tmp;
        }
    }

    printf("\nTranspose of A:\n");
    for (i = 0; i < 3; i = i + 1) {
        for (j = 0; j < 3; j = j + 1) {
            printf("%4d", A[i][j]);
        }
        printf("\n");
    }

    return 0;
}

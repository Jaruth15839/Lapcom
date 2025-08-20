#include <stdio.h>

int main()
{
    int A[3][3] = {
        {1, 0, -1},
        {-1, 2, 3},
        {2, 4, 5}
    };
    int i, j;

    printf("Original A:\n");
    for (i = 0; i < 3; i = i + 1) {
        for (j = 0; j < 3; j = j + 1) {
            printf("%4d", A[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < 3; i = i + 1) {
        for (j = 0; j < 3; j = j + 1) {
            if (i != j) {
                A[i][j] = 0;
            }
        }
    }

    printf("\nDiagonal matrix of A:\n");
    for (i = 0; i < 3; i = i + 1) {
        for (j = 0; j < 3; j = j + 1) {
            printf("%4d", A[i][j]);
        }
        printf("\n");
    }

    return 0;
}

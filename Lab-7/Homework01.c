#include <stdio.h>

int main() {

    int matrix[3][3];
    int *ptr=&matrix[0][0];
    int locate = 0;


    printf("Enter elements of 3x3 matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Enter element at position [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

 
    printf("\nThe 3x3 matrix is:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    scanf("%d", &locate);
    printf("%d", *(ptr + locate - 1));

    return 0;
}
#include <stdio.h> 
int main() {

    float array[2][1];
    float *ptr = &array[0][0];
    int locate = 0;
    float temp = 0;
    printf("Enter elements of 2x1 matrix:\n");
    for (int i = 0; i < 2; i++) {
        printf("Enter element at position [%d][0]: ", i);
        scanf("%f", &array[i][0]);
    }
    printf("\nThe 2x1 array is:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 1; j++) {
            printf("%f ", array[i][j]);
        }
        printf("\n");
    }
    printf("Enter the position (1 or 2) to access: ");
    scanf("%d", &locate);
    ptr + (locate - 1);
    scanf("%f", &temp);
    *(ptr + (locate - 1)) = temp;
    printf("Updated array:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 1; j++) {
            printf("%f ", array[i][j]);
        }
        printf("\n");
    }
    return 0;
}
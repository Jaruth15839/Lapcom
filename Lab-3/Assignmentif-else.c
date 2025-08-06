#include <stdio.h>

int main() {
    int num1, num2, menu;
    int result;

    printf("Enter Num1 : ");
    scanf("%d", &num1);

    printf("Enter Num2 : ");
    scanf("%d", &num2);

    printf("Calculator Menu :\n");
    printf("1. +\n");
    printf("2. -\n");
    printf("3. *\n");
    printf("4. /\n");
    printf("5. %%\n");
    printf("Choose menu : ");
    scanf("%d", &menu);

    if (menu == 1) {
        result = num1 + num2;
        printf("Ans : Num1 + Num2 = %d\n", result);
    } else if (menu == 2) {
        result = num1 - num2;
        printf("Ans : Num1 - Num2 = %d\n", result);
    } else if (menu == 3) {
        result = num1 * num2;
        printf("Ans : Num1 * Num2 = %d\n", result);
    } else if (menu == 4) {
            result = num1 / num2;
            printf("Ans : Num1 / Num2 = %d\n", result);
    } else if (menu == 5) {
            result = num1 % num2;
            printf("Ans : Num1 %% Num2 = %d\n", result);
    } else {
        printf("Invalid menu choice\n");
    }

    return 0;
}
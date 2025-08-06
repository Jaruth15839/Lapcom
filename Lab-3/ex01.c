#include <stdio.h>

int main() {
    int num1, num2;
    printf("Enter Num1 : ");
    scanf("%d", &num1);
    printf("Enter Num2 : ");
    scanf("%d", &num2);
    if (num1 == num2) {
        printf("MATCH\n");
    } else {
        printf("NOT MATCH\n");
    }
    return 0;
}
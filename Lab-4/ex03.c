#include<stdio.h>
int main() {
    int i, j;
    do{
        printf("enter a number: ");
        scanf("%d", &i);
        if (i % 2 == 0 && i != 0) {
            printf("You entered an even number: %d\n", i);
        } else
            printf("You entered an odd number: %d\n", i);
            continue;
        }
        }
     while (i != 0);
    printf("BYE\n");
    return 0;

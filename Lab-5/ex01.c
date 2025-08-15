#include <stdio.h>
int array[10];
int n;
int i;
int main() {
    n = 0;
    i = 0;
    do {
        printf("Enter the value %d here:", n + 1);
        scanf("%d", &array[n]);
        n++;
    }
    while (n < 10);
    printf("The number you entered are: ");
    do{;
    printf("%d,", array[i]);
    i ++;
    }while (i < 10);
    return 0;
}

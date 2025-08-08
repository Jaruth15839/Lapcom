#include <stdio.h>
int main() {
    int i, j,sum;
    sum = 0;
    j = 10;
    float average;
    for (; j > 0; ){
        printf("enter a number: ");
        scanf("%d", &i);
        sum = sum + i;
        j--;
    } 
    printf("Total sum:%d\n", sum);
    average = sum / 10.0;
    printf("Average: %.2f\n", average);

    
    return 0;
}
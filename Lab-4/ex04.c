#include<stdio.h>
int main() {
    int i,j,k;
    printf("Enter a number: ");
    scanf("%d", &i);
    printf("multiplication table for %d \n", i);
    j = 12;
    k = 0;
    while (j != 0 && k < 12) {
        k++;
        printf("%d x %d = %d\n", i, k, i * k);
        j--;
        
    }
return 0;
} 
#include <stdio.h>

int main() {
    int i, fac;
    int result = 1; 

    printf("Enter a number to calculate its factorial: ");
    scanf("%d", &fac);

for (i = fac; i >= 1; i--) {
    result = result * i;
}

    printf("Factorial of %d is %d\n", fac, result);

    return 0;
}
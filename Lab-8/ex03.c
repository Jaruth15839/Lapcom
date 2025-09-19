#include <stdio.h>
#include <math.h>

int square(int a, int b) {
    return a * a + b * b;
}
int main() {
printf("enter 2 numbers: ");
int a, b;
scanf("%d %d", &a, &b);
printf("The sum of squares is %d\n", square(a, b));
}
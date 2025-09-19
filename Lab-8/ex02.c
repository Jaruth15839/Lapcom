#include <stdio.h>
#include <math.h>

int is_prime(int n) {
    if (n < 2) return 0;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int main() {
    int upper_limit, lower_limit;
    printf("Enter the lower and upper limits: ");
    scanf("%d %d", &lower_limit, &upper_limit);
    printf("The prime numbers within the intervals are:\n");
    for (int i = lower_limit; i <= upper_limit; i++) {
        if (is_prime(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");
}
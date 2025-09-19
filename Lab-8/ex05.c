#include <stdio.h>

void evenodd(int size, int array[]) {
    int even_sum = 0;
    int odd_sum = 0;

    for (int i = 0; i < size; i++) {
        if (array[i] % 2 == 0)
            even_sum += array[i];
        else
            odd_sum += array[i];
    }

    printf("Output: Sum of even number: %d\n", even_sum);
    printf("Sum of odd number: %d\n", odd_sum);
}

int main() {
    int size;
    printf("N: ");
    scanf("%d", &size);

    int array[size];
    for (int i = 0; i < size; i++) {
        printf("Input: ");
        scanf("%d", &array[i]);
    }

    evenodd(size, array);
    return 0;
}

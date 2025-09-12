#include <stdio.h>
int main() {
	int size = 6;
    int sum = 0;
	int array[] = { 3, 1, 2, 4, 5, 6 };
        int *ptr = array;
        int *end = array + size;
        while (ptr < end) {
            sum = sum + *ptr;
            printf("%d \n", *ptr);
            ptr++;
        }
        printf("Sum: %d\n", sum);
        return 0;
}
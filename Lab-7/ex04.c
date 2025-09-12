#include <stdio.h>

int main() {
	int size = 6;
	int array[] = { 3, 1, 2, 4, 5, 6 };
        int *ptr = array;
        int *end = array + size;
        while (ptr < end) {
            printf("%d \n", *ptr);
            ptr++;
        }
    
        return 0;
    }
    

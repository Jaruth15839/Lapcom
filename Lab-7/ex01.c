#include <stdio.h>
int main() {
int test = 0;
int *ptrs;
ptrs = &test;
    printf("%p\n", &ptrs);
    return 0;
}

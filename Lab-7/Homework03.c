#include <stdio.h>
int main() {
int temp = 0;
    struct tree
    {
        int leaves, stems, roots;
    } t1;
    struct tree *ptr = &t1;
    scanf("%d %d", &t1.leaves, &t1.stems);
    temp = t1.leaves + t1.stems;
    ptr->roots = temp;
    printf("Roots: %d\n", ptr->roots);
    };
    

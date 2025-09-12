#include <stdio.h>

int main() {
    int female_pinecones, male_pinecones, temp;
    female_pinecones = 0;
    male_pinecones = 5;
    int *pf = &female_pinecones, *pm = &male_pinecones;

    printf("Before swapping:\n");
    printf("Female pinecones = %d", female_pinecones); 
    printf("\nMale pinecones = %d\n", male_pinecones);  
    temp = *pf;
    *pf = *pm;
    *pm = temp;

    printf("After swapping:\n");
    printf("Female pinecones = %d\n", female_pinecones);
    printf("Male pinecones = %d\n", male_pinecones);

    return 0;
}
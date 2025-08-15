#include <stdio.h>

int main() {
    int n, i, j;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int array[n];

    printf("Enter %d integers: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    for (i = 0; i < n; i++) {
        int found = 0;
        for (j = 0; j < i; j++) {
            if (array[j] == array[i]) {
                found = 1;
            }
        }
        if (found == 0) {
            int count = 0;
            for (j = 0; j < n; j++) {
                if (array[j] == array[i]) {
                    count++;
                }
            }
            printf("Element %d occurs %d times\n", array[i], count);
        }
    }

    return 0;
}
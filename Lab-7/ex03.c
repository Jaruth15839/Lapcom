#include <stdio.h>

int main() {
	int array[] = { 3, 1, 2, 4, 5, 6 };
    int *ptr = array;
    int most = array[0];
    for(int i=0;i<6;i++){
        if(most < *(ptr + i))
            most = *(ptr + i);
    printf("%d ", *(ptr + i));
    }
    printf("\nThe largest number is %d\n", most);
    return 0;
}
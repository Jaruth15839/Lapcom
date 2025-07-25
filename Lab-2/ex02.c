#include<stdio.h>
int main ()
{
    int Minutes;
    int hours;
    printf("\nPlease enter Minutes     :\n");
    scanf("%d",&Minutes);
    hours = Minutes/60;
    Minutes = Minutes%60;
    printf("%d hours, %d minutes   ",hours,Minutes);

    return 0;
}
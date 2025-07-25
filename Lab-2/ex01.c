#include<stdio.h>
int main ()
{
    int interger;
    float floater;
    char character[2];
    printf("\nPlease enter interger value     :\n");
    scanf("%d",&interger);
    printf("you entered                     :   %d",interger);
    printf("\nPlease enter float value        :\n");
    scanf("%f",&floater);
    printf("you entered                     :   %f",floater);
    printf("\nPlease enter character          :\n");
    scanf("%s",character);
    printf("you entered                     :   %s",character);

    return 0;
}
#include <stdio.h>
int main()
{
    char name[20];
    char gender[1];
    char educational[100];
    int age,weight;
    float height;
    printf(" Enter your name : ");
    scanf("%s", name);
    printf(" Enter your age : ");
    scanf("%d", &age);
    printf(" Enter your height : ");
    scanf("%f", &height);
    printf(" Enter your weight : ");
    scanf("%d", &weight);
    printf(" Enter your gender : ");
    scanf("%s", gender);
    printf(" Enter your educational qualification : ");
    scanf("%s", educational);


    printf(" Name : %s\n", name);
    printf(" age : %d\n", age);
    printf(" height : %f\n", height);
    printf(" weight : %d\n", weight);
    printf(" gender : %s\n", gender);
    printf(" educational qualification : %s\n", educational);
}

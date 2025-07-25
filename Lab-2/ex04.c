#include <stdio.h>
int main()
{
    char name[20];
    int ID,prscore;
    float phscore,calscore;

   
    printf(" Enter your name : ");
    scanf("%s", name);
    printf(" Enter your student ID : ");
    scanf("%d", &ID);
    printf(" Enter your programming score : ");
    scanf("%d", &prscore);
    printf(" Enter your Physics score : ");
    scanf("%f", &phscore);
    printf(" Enter your Calculus score : ");
    scanf("%f", &calscore);
    printf(" Hi %s(%d)! Your GPA is %.2f ", name,ID,(prscore + phscore + calscore)/3);
}
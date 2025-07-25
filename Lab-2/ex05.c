#include <stdio.h>
int main()
{
    char name[20];
    char surname[20];
    int age;
    float height;
    char uniname[5];
    

   
    printf(" Enter your full name : ");
    scanf("%s", name);
    scanf("%s", surname);
    printf(" Enter your age : ");
    scanf("%d", &age);
    printf(" Enter your height : ");
    scanf("%f", &height);
    printf(" Enter your Unversity name : ");
    scanf("%s", uniname);

    
    printf(" Hi everyone. This is %s%s from %s . I am %d years old and my height is %f cm tall.", name,surname,uniname,age,height);
}
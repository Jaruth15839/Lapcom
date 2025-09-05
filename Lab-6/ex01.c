#include <stdio.h>
#include <string.h>

struct Student {
    char name[100];
    int age;
    float score;
};

int main() {
    struct Student students[3];
    int i;

    for (i = 0; i < 3; i++) {
        printf("Student %d's name: ", i + 1);
        scanf(" %[^\n]", students[i].name);
        printf("Student %d's age: ", i + 1);
        scanf("%d", &students[i].age);
        printf("Student %d's score: ", i + 1);
        scanf("%f", &students[i].score);
        printf("\n");
    }

    for (i = 0; i < 3; i++) {
        printf("Student %d name is \"%s\", age %d.\n", i + 1, students[i].name, students[i].age);
    }
}
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
    float max_value = 0.0;
    char highest_scorer[100] = "";

    for (i = 0; i < 3; i++) {
        printf("Student %d's name: ", i + 1);
        scanf(" %s", students[i].name);
        printf("Student %d's age: ", i + 1);
        scanf("%d", &students[i].age);
        printf("Student %d's score: ", i + 1);
        scanf("%f", &students[i].score);
        printf("\n");
          if (students[i].score > max_value) {
            max_value = students[i].score;
            strcpy(highest_scorer, students[i].name);
        }
    }

    for (i = 0; i < 3; i++) {
        printf("Student %d name is \"%s\", age %d.\n", i + 1, students[i].name, students[i].age);
    }
    printf("Highest score is %.2f belong to %s", max_value, highest_scorer);
}
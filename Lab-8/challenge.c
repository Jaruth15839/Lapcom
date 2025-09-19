#include <stdio.h>

float avg(int *g, int n) {
    float sum = 0;
    for (int i = 0; i < n; i++) sum += g[i];
    return sum / n;
}

int max(int *g, int n) {
    int m = g[0];
    for (int i = 1; i < n; i++)
        if (g[i] > m) m = g[i];
    return m;
}

int min(int *g, int n) {
    int m = g[0];
    for (int i = 1; i < n; i++)
        if (g[i] < m) m = g[i];
    return m;
}

int main() {
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);
    char names[n][100];
    int grades[n];
    for (int i = 0; i < n; i++) {
        printf("Enter name of student %d: ", i+1);
        scanf("%s", names[i]);
        printf("Enter grade of %s: ", names[i]);
        scanf("%d", &grades[i]);
    }
    printf("--- Results ---\n");
    printf("Average grade: %.2f\n", avg(grades, n));
    printf("Highest grade: %d\n", max(grades, n));
    printf("Lowest grade: %d\n", min(grades, n));
    printf("\nStudents who passed:\n");
    for (int i = 0; i < n; i++)
        if (grades[i] >= 60)
            printf("%s\n", names[i]);
}


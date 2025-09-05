#include <stdio.h>

struct time {
    int minutes;
    int seconds;
};
int main() {
    struct time t1, t2, sum;
    printf("Enter time 1 (minutes seconds): ");
    scanf("%d %d", &t1.minutes, &t1.seconds);
    printf("Enter time 2 (minutes seconds): ");
    scanf("%d %d", &t2.minutes, &t2.seconds);

    sum.minutes = t1.minutes + t2.minutes;
    sum.seconds = t1.seconds + t2.seconds;

    if (sum.seconds >= 60) {
        sum.minutes += sum.seconds / 60;
        sum.seconds = sum.seconds % 60;
    }

    printf("Sum of times: %d minutes and %d seconds\n", sum.minutes, sum.seconds);
    return 0;
}

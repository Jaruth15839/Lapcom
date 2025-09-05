#include <stdio.h>

struct Point {
    float x;
    float y;
};

int main() {
    struct Point p1, p2;
    float dx, dy, distance, temp;

    printf("x1: ");
    scanf("%f", &p1.x);
    printf("y1: ");
    scanf("%f", &p1.y);
    printf("x2: ");
    scanf("%f", &p2.x);
    printf("y2: ");
    scanf("%f", &p2.y);

    dx = p2.x - p1.x;
    dy = p2.y - p1.y;
    temp = dx * dx + dy * dy;

    distance = temp;
    float guess = temp / 2.0;
    for (int i = 0; i < 10; i++) {
        if (guess == 0) break;
        guess = (guess + temp / guess) / 2.0;
    }
    distance = guess;

    printf("Distance between (%.1f, %.1f) and (%.1f, %.1f) is %.3f unit(s)\n",
           p1.x, p1.y, p2.x, p2.y, distance);

    return 0;
}
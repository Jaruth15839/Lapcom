#include <stdio.h>
#include <math.h>


double circle_area(double radius, double *area, double *circumference) {
    double pi = 3.141592653589793;
    *area = pi * radius * radius;
    *circumference = 2 * pi * radius;
}
int main() {
    double radius;
    double area, circumference;
    printf("Enter the radius of the circle: ");
    scanf("%lf", &radius);
    circle_area(radius, &area, &circumference);
    printf("Circumference of the circle: %lf\n", circumference);
    printf("Area of the circle: %lf\n", area);
    return 0;
}
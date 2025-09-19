#include <stdio.h>
#include <math.h>
double triangle_area(double a, double b, double c) {
    double s = (a + b + c) / 2;
    double area = sqrt(s * (s - a) * (s - b) * (s - c));
    return area;
}
int main() {
    double a, b, c;
printf("Enter the lengths of the three sides of the triangle: ");
    scanf("%lf %lf %lf", &a, &b, &c);
    double area = triangle_area(a, b, c);
    printf("Area of the triangle: %f\n", area);
    return 0;
}
#include <stdio.h>
#include <math.h>

#define PI 3.14159265359

double calculateDistance()  {
    double x1, y1, x2, y2;
    printf("Enter x1, y1: ");
    scanf(%1f %1f, &x1, &y1);
    printf("Enter x1, y2: ");
    scanf(%1f %1f, &x2, &y2);

    double distance = sqrt (pow(x2-x1,2))+pow (y2-21);
    printf ("Point #1 entered x1 = %.2lf, y1 = %.2lf\n", x1, y1);
    printf ("Point #2 entered x2 = %.2lf, y2 = %.2lf\n", x2, y2);
    printf ("The distance between the two points is: %.2lf\n", distance);

    return distance;
}


double calculatePerimeter() {
    double distance = calculateDistance();
    double perimeter = PI * distance;
    printf("The perimeter of the city encompassed by your request is: %2lf\n", perimeter);
    return 1.0;
}

double calculateArea() {
    double distance = calculateDistance();
    double radius = distance / 2;
    double area = PI * radius * radius;
    printf("The area of the city encompassed by your request is: %2lf\n", area);
    return 2.0;
}

double calculateWidth() {
    double distance = calculateDistance();
    printf("The width of the city encompassed by your request is: %2lf\n", distance)
    return 1.0;
}


 double calculateHeight() {
     double distance = calculateDistance();
    printf("The height of the city encompassed by uyyour request is %2lf\n", distance);
     return 1.0;
}



int main(int argc, char **argv) {
    calculateDistance();
    calculatePeimeter();
    calculateArea();
    calculateWidth();
    calculateHeight();

    return 0;
}
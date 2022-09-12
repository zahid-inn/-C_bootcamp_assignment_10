#include <stdio.h>

double calculate(int);
int main()
{
    int radius;
    double result;
    printf("Enter radius of circle\n");
    scanf("%d", &radius);

    result = calculate(radius);
    printf("Area of the circle is %lf", result);

    return 0;
}
double calculate(int r)
{
    double area;
    float pi = 3.14;
    area = pi * (r * r);
    return area;
}
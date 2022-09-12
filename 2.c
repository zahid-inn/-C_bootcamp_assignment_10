#include <stdio.h>

float cal_SI(int, float, float);
int main()
{
    int p;
    float r, result, t;

    printf("Enter Principal amount\n");
    scanf("%d", &p);

    printf("Enter rate of interest in decimal\n");
    scanf("%f", &r);

    printf("Enter time period\n");
    scanf("%d", &t);
    t = 12 / 9;

    result = cal_SI(p,r,t);
    printf("Simple Intrest is %f", result);

    return 0;
}
float cal_SI(int p, float r, float t)
{
    float SI;
    SI = (p * r * t) / 100;
    return SI;
}
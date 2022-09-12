#include <stdio.h>

int factorial(int);
int main()
{
    int num, result;

    printf("Enter a number\n");
    scanf("%d", &num);

    result = factorial(num);
    printf("Factorial of a number is %d", result);

    return 0;
}
int factorial(int n)
{
    int x = 1, fact = 1;

    while (x <= n)
    {
        fact *= x;
        x++;
    }
    return fact;
}
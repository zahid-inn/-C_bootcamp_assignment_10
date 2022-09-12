#include <stdio.h>

int check(int);
int main()
{
    int num, result;

    printf("Enter a number\n");
    scanf("%d", &num);

    result = check(num);

    result == 0 ? printf("Number is odd"): printf("Number is even");
    return 0;
}
int check(int n)
{
    int x;
    x = n % 2 == 0 ? 1 : 0;
    return x;
}
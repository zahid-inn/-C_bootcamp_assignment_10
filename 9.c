#include <stdio.h>

int check(int, int);
int main()
{
    int n, d, result;

    printf("Enter a number\n");
    scanf("%d", &n);

    printf("Enter a digit\n");
    scanf("%d", &d);

    result = check(n, d);

    if (result == 1)
        printf("Yes");

    else
        printf("No");

    return 0;
}
int check(int num, int dig)
{
    int x, z = 0;

    while (num != 0)
    {
        x = num % 10;
        if (dig == x)
        {
            z = 1;
            break;
        }
        num /= 10;
    }

    return z;
}
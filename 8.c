#include <stdio.h>

int permitation(int, int);
int fact(int);
int main()
{
    int n1, n2, result;

    printf("Enter two numbers\n");
    scanf("%d %d", n1, n2);

    result = permitation(n1, n2);
    printf("Arrangments %d", result);

    return 0;
}

int permitation(int n, int r)
{
    int p = fact(n) / fact(n-r);
    return p;
}

int fact(int num)
{
    int i, factr = 1;

    for (i = 0; i <= num; i++)
    {
        factr *= i;
    }

    return factr;
}
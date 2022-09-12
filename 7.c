#include <stdio.h>

int fact(int);
int comb(int, int);
int main()
{
    int n1, n2, result;

    printf("Enter two numbers\n");
    scanf("%d %d", &n1, &n2);

    result = comb(n1, n2);
    
    printf("%d", result);
    return 0;
}

int comb(int n, int r)
{
    int c = fact(n) / (fact (r) * fact(n-r));
    return c;
}

int fact(int num)
{
    int i, factr = 1;

    for (i = 1; i <= num; i++)
    {
        factr *= i;
    }
    return factr;
}
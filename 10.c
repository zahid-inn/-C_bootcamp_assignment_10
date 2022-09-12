#include <stdio.h>

void P_factr(int);
int main()
{
    int num;

    printf("Enter a number\n");
    scanf("%d", &num);

    P_factr(num);

    return 0;
}

void P_factr(int n)
{
    int d = 2;

    while (n != 1)
    {
        if (n % d == 0)
        {
            n /= d;
            printf("%d ", d);
        }
        else
            d++;
    }
    
}
#include <stdio.h>

void Odd_Natural(int);
int main()
{
    int num;

    printf("Enter a number\n");
    scanf("%d", &num);

    Odd_Natural(num);
    return 0;
}
void Odd_Natural(int n)
{
    int x = 1;
    while (x <= n)
    {
        if (x % 2 != 0)
            printf("%d ", x);
        x++;
    }
}
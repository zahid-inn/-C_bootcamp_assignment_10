#include <stdio.h>

void Natural_nums(int);
int main()
{
    int num;

    printf("Enter number\n");
    scanf("%d", &num);

    Natural_nums(num);
    return 0;
}
void Natural_nums(int n)
{
    int x = 1;

    while (x <= n)
    {
        printf("%d ", x);
        x++;
    }
}
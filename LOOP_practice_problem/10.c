#include <stdio.h>
int main()
{
    int a, b;
    int sum = 0;
    scanf("%d %d", &a, &b);
    for (int i = a; i <= b; i++)
    {
        sum += i;
        if (i == b)
        {
            printf("%d", i);
        }
        else
        {
            printf("%d + ", i);
        }
    }
    printf(" = %d", sum);
    return 0;
}
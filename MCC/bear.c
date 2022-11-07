#include <stdio.h>
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int years = 0;
    while (1)
    {
        a = a * 3;
        b = b * 2;
        years++;
        if (a > b)
        {
            printf("%d", years);
            break;
        }
    }
    return 0;
}
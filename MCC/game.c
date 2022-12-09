#include <stdio.h>
int main()
{
    int max;
    int min;
    int a, b;
    scanf("%d %d", &a, &b);
    if (a > b)
    {
        max = a;
        min = b;
    }
    else
    {
        max = b;
        min = a;
    }
    if (max - min < 3)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }
}

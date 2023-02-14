#include <stdio.h>
#include <math.h>
int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    int result = fabs(a - b);
    if (result % 10 == 7)
    {
        int x = result / 10;
        printf("%d", x * 10 + 6);
    }
    else
    {
        int x = result / 10;
        printf("%d", x * 10 + 7);
    }
}
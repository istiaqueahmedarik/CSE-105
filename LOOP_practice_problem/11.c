#include <stdio.h>
int main()
{
    int n, sum = 1;
    scanf("%d", &n);
    for (int i = n; i > 0; i--)
    {
        if (i == 1)
        {
            printf("%d", i);
            sum *= i;
        }
        else
        {
            printf("%d x ", i);
            sum *= i;
        }
    }
    printf(" = %d", sum);

    return 0;
}
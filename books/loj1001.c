#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        if (n % 2 == 0)
        {
            printf("%d %d\n", n / 2, n / 2);
        }
        else
        {
            printf("%d %d\n", n / 2, n / 2 + 1);
        }
    }
}
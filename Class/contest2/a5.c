#include <stdio.h>
int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int ans = -1;
    for (int i = a; i <= b; i++)
    {
        if (i % c == 0)
        {
            ans = i;
        }
    }
    printf("%d", ans);
}
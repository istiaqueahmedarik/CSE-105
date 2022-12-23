#include <stdio.h>
int main()
{
    int n, last;
    scanf("%d", &n);
    int ans[4] = {6, 8, 4, 2};
    if (n == 0)
    {
        printf("1\n");
    }
    else
    {
        printf("%d", ans[n % 4]);
    }
}
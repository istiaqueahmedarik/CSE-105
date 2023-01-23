#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int m, n;
    char str[25];
    fgets(str, sizeof str, stdin);
    scanf("%d %d", &m, &n);
    int ans = 0;
    for (int i = 0; i < strlen(str) - 1; i++)
    {
        if (str[i] == '+')
        {
            ans += m + n;
        }
        else
        {
            ans += m * n;
        }
    }
    printf("%d", ans);
}